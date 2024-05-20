/*
 * User Input Read/Write Program
 * File.cpp
 * reads and writes values to a file
 * Created by Victor Enogwe on 20/05/2024.
 */

#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <filesystem>

using std::cout;
using std::runtime_error;
using std::string;
using std::filesystem::path;
using std::ifstream;
using std::ofstream;
using std::ostringstream;
using std::ios;

/*
 * read_file
 * reads a file from disk
 *
 * @Param const path& {file_path} optional the absolute path to the file
 *
 * @Return string the file content
 */
string read_file(const path& file_path) {
    try {
        /*
         * Reserve string space upfront
         * and read entire file.
         *
         * @Note An improvement may be to limit filesize to read
         * to get the file size the pointer on open can be set to the end of the file
         * "tellg" call can then be used to check - note that this maybe inacccurate.
         * https://stackoverflow.com/questions/22984956/tellg-function-give-wrong-size-of-file/22986486#22986486
         * suggests some remedies to using "tellg" for file size check.
         */

        cout << "Reading file(" << file_path << ") from disk\n";

        ifstream input_file(file_path);
        ostringstream buffer;

        buffer << input_file.rdbuf();

        const string value = buffer.str();

        input_file.close();

        return value;
    } catch (const runtime_error& error) {
        cout << "Error reading file(" << file_path << ") from disk\n";

        throw error;
    }
}

/*
 * write_file
 * appends string content to a file on disk
 *
 * @Param const string& {value} the data to write
 * @Param const path& {file_path} optional the absolute path to the file
 *
 * @Returns void
 */
void write_file(const string& value, const path& file_path, const unsigned int mode) {
    try {
        cout << "Writing value to file(" << file_path << ") on disk\n";

        // open file - create if not exists
        ofstream output_file;

        output_file.open(file_path, mode);

        output_file << value;

        output_file.close();
    } catch (const runtime_error& error) {
        cout << "Error writing to file(" << file_path << ") on disk\n";

        throw error;
    }
}
