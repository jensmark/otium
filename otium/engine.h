#ifndef __ENGINE_H__
#define __ENGINE_H__

#include "script_engine.h"

namespace otium{

    class Engine{
    public:
        Engine();
        ~Engine();

        int run(int argc, char** args);

        ScriptEngine* getScriptEngine();

    private:
        ScriptEngine* m_script_engine;
    };

}

#endif