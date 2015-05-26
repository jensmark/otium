#ifndef __COMPONENT_H__
#define __COMPONENT_H__

namespace otium{
    namespace scene{
        namespace component{

            class Component{
            public:
                virtual void start(){};
                virtual void quit(){};
                virtual void update(){};
            };

        }
    }
}

#endif