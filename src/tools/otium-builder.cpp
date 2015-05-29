/**
 * Program builds a new otium project
 */

#include <iostream>
#include "project/project_builder.h"

int main(int argc, char* argv[]){

    if (argc < 2){
        std::cerr << "Usage: " << argv[0] << "--name <name> --path <path>"
            << "Options:\n"
            << "\t-h,--help\t\tShow this help message\n"
            << "\t-n,--name DESTINATION\tSpecify the destination path"
            << "\t-o,--path DESTINATION\tSpecify the destination path"
            << std::endl;

        return -1;
    }

    otium::project::ProjectBuilder builder;
    builder.createNewProject("","");

    return 0;
}