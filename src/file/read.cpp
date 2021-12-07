#include "read.h"

#include <fstream>
#include <iostream>
#include <string>

std::string* read_from_path(const char *path) {

    std::ifstream specified_file;
    specified_file.open(path);

    std::string *return_string;
    return_string = new std::string();

    if (specified_file.is_open()) {
        std::string curr_line;
        while (!specified_file.eof()) {
            std::getline(specified_file, curr_line);
            return_string->append(curr_line).push_back('\n');
        }
    }
    else {
        std::cout << "Unable to read from " << path << std::endl;
    }

    specified_file.close();

    return return_string;
}