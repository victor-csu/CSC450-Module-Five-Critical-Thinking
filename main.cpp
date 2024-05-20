#include <iostream>
/*
 * Program: User Input Read/Write Program
 * a program that will take a string input from a user and store it in a file "CSC450_CT5_mod5.txt".
 * The program reverses the values of the contents of the file "CSC450_CT5_mod5.txt" and stores it in "CSC450_CT5_mod5-reverse.txt".
 */

#include <fstream>
#include <string>
#include <filesystem>

#include "File.h"
#include "Input.h"
#include "String.h"

using std::cout;
using std::runtime_error;
using std::string;
using std::filesystem::path;
using std::filesystem::canonical;
using std::filesystem::current_path;
using std::ifstream;
using std::ofstream;
using std::ios;
using std::istreambuf_iterator;

void save_input() {
    cout << "**Writing User Input to File**\n";

    const string file_contents = read_file();
    const string input = get_input("Enter some text to append to the file: ");

    write_file(input);

    cout << "\n";
}

void save_reversed_file_content() {
    cout << "**Writing Reversed File Content to File**\n";

    const string file_contents = read_file();
    const string reversed_file_content = str_reverse(file_contents);

    write_file(reversed_file_content, REVERSE_FILE_ABSOLUTE_PATH, ios::trunc);

    cout << "\n";
}

int main() {
    cout << "**User Input Read/Write Program**\n\n";

    save_input();
    save_reversed_file_content();

    return 0;
}
