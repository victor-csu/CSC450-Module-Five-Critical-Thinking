/*
 * User Input Read/Write Program
 * File.h
 * reads and writes values to a file
 * Created by Victor Enogwe on 20/05/2024.
 */

#ifndef FILE_H
#define FILE_H

#include <string>
#include <filesystem>

using std::string;
using std::filesystem::path;
using std::filesystem::canonical;
using std::filesystem::current_path;
using std::ios;

const path DEFAULT_DIRECTORY = current_path();
const path FILE_NAME("CSC450_CT5_mod5.txt");
const path REVERSE_FILE_NAME("CSC450-mod5-reverse.txt");
const path FILE_PATH = DEFAULT_DIRECTORY / FILE_NAME;
const path REVERSE_FILE_PATH = DEFAULT_DIRECTORY / REVERSE_FILE_NAME;
const path FILE_ABSOLUTE_PATH(canonical(FILE_PATH));
const path REVERSE_FILE_ABSOLUTE_PATH(canonical(REVERSE_FILE_PATH));

string read_file(const path& file_path = FILE_ABSOLUTE_PATH);
void write_file(const string& value, const path& file_path = FILE_ABSOLUTE_PATH, unsigned int mode = ios::app);

#endif //FILE_H
