#ifndef __SCRIPT_ENGINE_H__
#define __SCRIPT_ENGINE_H__

#include "script.h"

#include <vector>

namespace otium{

    class Engine;

    class ScriptEngine{
    public:
        ScriptEngine(Engine* engine);
        ~ScriptEngine();

        Script* loadScript(std::string& file, std::string& class_name);

    private:
        std::vector<Script*> m_scripts;
        Engine* m_engine;
    };

}

#endif