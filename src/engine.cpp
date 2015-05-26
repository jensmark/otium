#include "engine.h"
#include <iostream>

namespace otium{

    Engine::Engine(){
        m_script_engine = new ScriptEngine(this);
    }
    Engine::~Engine(){
        delete m_script_engine;
    }

    int Engine::run(int argc, char** args){
        return 0;
    }

    ScriptEngine* Engine::getScriptEngine(){
        return m_script_engine;
    }
}