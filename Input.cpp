/*
 * User Input Read/Write Program
 * Input.cpp
 * reads and formats user input
 * Created by Victor Enogwe on 20/05/2024.
 */

#include <iostream>
#include <string>
#include <regex>
#include "String.h"

using namespace std::regex_constants;

using std::cout;
using std::cin;
using std::getline;
using std::string;
using std::regex;
using std::regex_replace;
using std::regex_match;
using std::runtime_error;
using std::stoi;

/*
 * get_input
 * asks a user to enter an integer
 *
 * @Param const string& {instruction} user instruction
 *
 * @Return string the input string
 */
string get_input(const string& instruction) {
    try {
        cout << instruction;

        string input;

        getline(cin, input);

        return input;
    } catch (const runtime_error& error) {
        cout << error.what();

        throw error;
    }
}
