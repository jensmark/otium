#ifndef __SCRIPT_COMPONENT_H__
#define __SCRIPT_COMPONENT_H__

namespace otium{
    namespace scene{
        namespace component{

            class ScriptComponent{
            public:
                virtual void start();
                virtual void quit();
                virtual void update();
            };

        }
    }
}

#endif