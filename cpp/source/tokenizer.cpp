#include "tokenizer.h"
#include "tokenizer_constants.h"

namespace Tokenizer {

    bool buffer_is_space_tab(string buffer, size_t tab_size) {
        if (buffer == "\t")
            return true;
        for (const char c : buffer) {
            if (c != ' ')
                return false;
        }
        if (buffer.size() == tab_size)
            return true;
        return false;
    }

    bool buffer_is_whitespace(string buffer) {
        if (buffer.size() == 0)
            return false;
        for (const char c : buffer) {
            if (!(c == ' ' || c == '\t'))
                return false;
        }
        return true;
    }

    bool is_digit(char digit) {
        return (
            digit == '0' || digit == '1' || digit == '2' || digit == '3' || digit == '4'
            || digit == '5' || digit == '6' || digit == '7' || digit == '8' || digit == '9'
        );
    }

    vector<string> parse(string input_string, size_t tab_size) {
        string token_buffer;
        vector<string> result;
        char last = '\0';
        bool commented = false;
        for (const char c : input_string) {
            if (c == '\n') {
                commented = false;
            }
            if (commented)
                continue;
            if (c == '#') {
                commented = true;
                continue;
            }
            if (
                is_digit(last)
                && c == '.'
            ) {
                token_buffer.push_back('.');
            } else if (BUFFER_LOOK_AHEAD.find(token_buffer) != BUFFER_LOOK_AHEAD.end()) {
                // Found token
                if (!BUFFER_LOOK_AHEAD.at(token_buffer).contains(c)) {
                    result.push_back(token_buffer);
                    token_buffer = "";
                    token_buffer.push_back(c);
                } else {
                    token_buffer.push_back(c);
                }
            } else if (buffer_is_whitespace(token_buffer)) {
                if (buffer_is_space_tab(token_buffer, tab_size)) {
                    result.push_back("\t");
                    token_buffer = "";
                }
                if (c == ' ')
                    token_buffer.push_back(c);
                else if (c == '\t') {
                    result.push_back("\t");
                    token_buffer = "";
                } else {
                    token_buffer = "";
                    token_buffer.push_back(c);
                }
            }
            else if (LABEL_SET.contains(c)) {
                token_buffer.push_back(c);
            }
            else {
                result.push_back(token_buffer);
                token_buffer = "";
                token_buffer.push_back(c);
            }
            last = c;
        }
        if (token_buffer != "")
            result.push_back(token_buffer);

        return result;
    }
};