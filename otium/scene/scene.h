#ifndef __SCENE_H__
#define __SCENE_H__

#include "object.h"

namespace otium{
    namespace scene{

        class Scene{
        public:
            Scene();
            ~Scene();

            void traverse();

        private:
            Object* m_root;
        };

    }
}

#endif