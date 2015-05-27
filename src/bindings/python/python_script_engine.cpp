#include "script_engine.h"
#include "engine.h"
#include <Python.h>


namespace otium{

    ScriptEngine::ScriptEngine(Engine* engine){
        m_engine = engine;

        Py_Initialize();
    }

    ScriptEngine::~ScriptEngine(){
        Py_Finalize();
    }

    Script *ScriptEngine::loadScript(std::string &file, std::string& class_name) {
        m_scripts.push_back(new Script(file, class_name));
        return m_scripts[m_scripts.size()-1];
    }
}