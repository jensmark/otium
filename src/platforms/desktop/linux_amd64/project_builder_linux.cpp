#include "project/project_builder.h"
#include <sys/stat.h>
#include <iostream>
#include <fstream>

namespace otium{
    namespace project{

        void ProjectBuilder::newProject(const std::string &name, const std::string &path) {
            std::string dir(path);

            std::string folder(dir.append("/").append(name));
            int err = mkdir(folder.c_str(), S_IRWXU |
                                            S_IRGRP | S_IXGRP |
                                            S_IROTH | S_IXOTH);
            if (err != 0){
                std::cerr << "Failed to create folder: " << folder << std::endl;
            }

            std::fstream f;

            std::string manifest(folder);
            f.open(manifest.append("/").append("manifest.mnf"), std::ios_base::out);
            f << defaultManifest();
            f.close();

            std::string scene(folder);
            f.open(scene.append("/scenes/").append("scene0.scn"), std::ios_base::out);
            f << defaultScene();
            f.close();
        }

    }
}