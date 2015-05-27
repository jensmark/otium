#include "script.h"
#include <Python.h>

/**
 * Python embedding
 * https://docs.python.org/2/extending/embedding.html
 */
namespace otium{

    Script::Script(std::string &file, std::string& class_name) {
        m_file = file;

        PyObject* name = PyString_FromString(file.c_str());
        m_object = (void*) PyImport_Import(name);
        Py_DECREF(name);

        m_dict = (void*) PyModule_GetDict((PyObject*)m_object);
        m_class = (void*) PyDict_GetItemString((PyObject*)m_dict, class_name.c_str());

        if (PyCallable_Check((PyObject*)m_class)) {
            m_instance = (void*)PyObject_CallObject((PyObject*)m_class, NULL);
        }else{
            PyErr_Print();
        }
    }

    Script::~Script() {
        Py_DECREF((PyObject*)m_object);
    }

    void Script::callFunction(std::string &name) {
        PyObject_CallMethod((PyObject*)m_instance, (char*)name.c_str(), NULL);
    }
}