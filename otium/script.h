#ifndef __SCRIPT_H__
#define __SCRIPT_H__

#include <string>

namespace otium{

    class Script{
    public:
        Script(std::string& file, std::string& class_name);
        ~Script();

        void callFunction(std::string& name);

    private:
        std::string m_file;

        void* m_object;
        void* m_class;
        void* m_instance;
        void* m_dict;
    };

}


#endif
