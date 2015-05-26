#include <exception>
#include "engine.h"

int main(int argc, char** args){
    try {
        otium::Engine engine;
        return engine.run(argc, args);
    }catch(std::exception& e){
        // Log fatal error
    }

}