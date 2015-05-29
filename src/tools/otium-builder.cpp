/**
 * Program builds a new otium project
 */

#include <iostream>
#include "project/project_builder.h"

void show_help(char* path){
    std::cerr << "Usage: " << path << " --name <name> --path <path>"
        << std::endl
        << "\t-h,--help\t\tShow this help message\n"
        << "\t-n,--name <name>\tSpecify the project name, [default: Untitled]\n"
        << "\t-o,--path <path>\tSpecify the destination path, [default: .]"
        << std::endl;
}

int main(int argc, char* argv[]){

    if (argc < 2){
        show_help(argv[0]);
        return -1;
    }

    std::string name = "Unitled";
    std::string path = ".";

    for (int i = 1; i < argc; i++){

        if (strcmp(argv[i],"--help") == 0 || strcmp(argv[i],"-h") == 0){
            show_help(argv[0]);
            return 0;
        }

        else if (strcmp(argv[i],"--name") == 0 || strcmp(argv[i],"-n") == 0){
            name = std::string(argv[++i]);
            continue;
        }

        else if (strcmp(argv[i],"--path") == 0 || strcmp(argv[i],"-o") == 0){
            path = std::string(argv[++i]);
            continue;
        }

        else {
            std::cerr << "Unknown command: " << argv[i] << std::endl;
            show_help(argv[0]);
            return -1;
        }

    }

    otium::project::ProjectBuilder builder;
    builder.newProject(name, path);

    return 0;
}