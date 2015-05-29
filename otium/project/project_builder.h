#ifndef __PROJECT_BUILDER_H__
#define __PROJECT_BUILDER_H__

#include <string>

namespace otium{
    namespace project{

        class ProjectBuilder{
        public:
            ProjectBuilder();
            ~ProjectBuilder();

            void create(std::string path);
        };

    }
}

#endif