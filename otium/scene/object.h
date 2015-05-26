#ifndef __OBJECT_H__
#define __OBJECT_H__

#include "component/component.h"

#include <vector>

namespace otium{
    namespace scene{

        class Object{
        public:
            Object();
            ~Object();

            component::Component* addComponent(std::string name);
            std::vector<Object*>* getChildren();

        private:
            std::vector<component::Component*> m_components;
            std::vector<Object*> m_childen;
        };

    }
}

#endif