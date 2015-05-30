#include "project/project_builder.h"

namespace otium{
    namespace project{

        ProjectBuilder::ProjectBuilder() { }
        ProjectBuilder::~ProjectBuilder() { }

        std::string ProjectBuilder::defaultManifest(const std::string& name) {
            std::string str = "\n"
                    "";

            return str;
        }

        std::string ProjectBuilder::defaultScene() {
            std::string str = "";

            return str;
        }

    }
}