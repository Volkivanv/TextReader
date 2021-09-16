#include <iostream>
#include <string>
#include <fstream>

int main() {
    std::ifstream notebook;
    std::string filepath;
    std::cout<<"Please, input filepath!" << std::endl;
    getline(std::cin, filepath);
    //, std::ios::binary
    notebook.open(filepath);
    if(notebook) {
        while (!notebook.eof()) {
            std::string bufStr;
            getline(notebook,bufStr);
            std::cout << bufStr;
          //  char buffer[30];
          //  notebook.read(buffer, sizeof(buffer));
          //  std::cout << buffer.;
        }
        notebook.close();
    }else {
            std::cerr << "File is not found!" << std::endl;
        }

    return 0;
}
