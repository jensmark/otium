#ifndef __COMPONENT_H__
#define __COMPONENT_H__

namespace otium{
    namespace scene{
        class Object;

        namespace component{

            class Component{
            public:
                Component(Object* object);
                ~Component();

                virtual void start(){};
                virtual void quit(){};
                virtual void update(){};

                Object* getObject();

            private:
                Object* m_object;
            };

        }
    }
}

#endif