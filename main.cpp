#include <iostream>
#include <string>
#include <fstream>

int main() {
    std::ifstream notebook;
    std::string filepath;
    std::cout<<"Please, input filepath!" << std::endl;
    getline(std::cin, filepath);

    notebook.open(filepath, std::ios::binary);
    if(notebook) {
        while (!notebook.eof()) {
          //  std::string bufStr;
          //  getline(notebook,bufStr);
          //  std::cout << bufStr;
            char buffer[20];
            notebook.read(buffer, sizeof(buffer));
            if(notebook.gcount() < sizeof(buffer)){
                buffer[notebook.gcount()] = 0;
            }
            std::cout << buffer;

        }
        notebook.close();
    }else {
            std::cerr << "File is not found!" << std::endl;
        }

    return 0;
}
