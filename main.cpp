#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "Use: logscope name_of_log_file\n";
        return 0;
    }

    std::ifstream log_file(argv[1]);
    if (!log_file.is_open()) {
        std::cout << "Cannot open this file.\n";
        return 1;
    }

    std::string line;
    int all_lines = 0;
    int errors = 0;
    int warnings = 0;

    while (std::getline(log_file, line)) {
        ++all_lines;

        // Ищу слова в строке.
        if (line.find("ERROR") != std::string::npos) {
            ++errors;
        }

        if (line.find("WARNING") != std::string::npos) {
            ++warnings;
        }
    }

    std::cout << "All lines: " << all_lines << '\n';
    std::cout << "Errors: " << errors << '\n';
    std::cout << "Warnings: " << warnings << '\n';
}
