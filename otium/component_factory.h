#ifndef __COMPONENT_FACTORY_H__
#define __COMPONENT_FACTORY_H__

#include <bits/stl_bvector.h>
#include "scene/component/component.h"

namespace otium{

    class Engine;

    class ComponentFactory{
    public:
        ComponentFactory(Engine* engine);
        ~ComponentFactory();

        scene::component::Component* create(std::string type);

    private:
        std::vector<scene::component::Component*> m_component_pool;
        Engine* m_engine;
    };
}

#endif