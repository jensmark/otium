#ifndef __PROJECT_BUILDER_H__
#define __PROJECT_BUILDER_H__

#include <string>

namespace otium{
    namespace project{

        class ProjectBuilder{
        public:
            ProjectBuilder();
            ~ProjectBuilder();

            void createNewProject(const std::string& name, const std::string& path);

        private:

        };

    }
}

#endif