#include <iostream>
#include <string>
#include "../file/read.h"

int main(int argc, char* argv[]) {
    std::string *output;
    output = read_from_path("/home/justin/dev/jrg/src/test/main.cpp");
    std::cout << "length is: " << output->length() << std::endl
        << "content is:" << std::endl << output->data() << std::endl;
}