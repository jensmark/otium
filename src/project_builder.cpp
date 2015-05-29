#include "project/project_builder.h"

namespace otium{
    namespace project{

        ProjectBuilder::ProjectBuilder() { }
        ProjectBuilder::~ProjectBuilder() { }

        std::string ProjectBuilder::defaultManifest() { return ""; }
        std::string ProjectBuilder::defaultScene() { return ""; }

    }
}