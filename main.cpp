#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string log_path = std::getenv("LOG_PATH");
    std::ofstream log_file(log_path, std::ios::app);
    
    std::string input;
    while(std::getline(std::cin, input)) {
        log_file << input << std::endl;
    }
    
    return 0;
}
