/*
 * User Input Read/Write Program
 * String.cpp
 * string formatter
 * Created by Victor Enogwe on 20/05/2024.
 */

#include <string>
#include <regex>

using std::string;
using std::reverse;
using std::regex;
using std::regex_replace;

/*
 * str_trim
 * trims the leading and trailing whitespaces in a string
 * avoids mutating original string
 *
 * @Param const string& {value} the original string
 *
 * @Return string the trimmed string
 */
string str_trim(const string& value) {
    string s;

    s.assign(value);

    return regex_replace(
            regex_replace(s, regex( "^\\s+$" ), ""),
            regex( "\\s+$" ),
            ""
    );
}

/*
 * str_reverse
 * reverses a string
 * avoids mutating original string
 *
 * @Param const string& {value} the original string
 *
 * @Return string the reversed string
 */
string str_reverse(const string& value) {
    string s;

    s.assign(value);

    reverse(s.begin(), s.end());

    return s;
}