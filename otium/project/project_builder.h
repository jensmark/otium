#ifndef __PROJECT_BUILDER_H__
#define __PROJECT_BUILDER_H__

#include <string>

namespace otium{
    namespace project{

        class ProjectBuilder{
        public:
            ProjectBuilder();
            ~ProjectBuilder();

            void newProject(const std::string& name, const std::string& path);

            std::string defaultManifest(const std::string& name);
            std::string defaultScene();
        };

    }
}

#endif