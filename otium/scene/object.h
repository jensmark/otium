#ifndef __OBJECT_H__
#define __OBJECT_H__

#include "component/component.h"

#include <vector>

namespace otium{
    namespace scene{

        class Object{
        public:
            Object(Object* parent);
            ~Object();

            component::Component* addComponent(std::string name);
            component::Component* getComponent(std::string name);

            std::vector<Object*>* getChildren();
            Object* getParent();

        private:
            std::vector<component::Component*> m_components;

            Object* m_parent;
            std::vector<Object*> m_childen;
        };

    }
}

#endif