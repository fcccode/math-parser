// by Dmitry Soshnikov <dmitry.soshnikov@gmail.com>
// updated for C++11 by Alec Chan <me@alecchan.io>
// MIT Style License.
#include <iostream>
#include <vector>
#include <string>

/**
 * Lexer class for simple math expressions.
 * Recognizes only integer numbers and symbols
 * (operators and grouping).
 */
class Lexer {

private:
    std::string m_source;
    int   m_sourceLength;
    int   m_cursor;
    char  m_currentChar;

    void  readNextChar();
    void  skipWhiteSpaces();
    std::string readNumber();
    std::string readSymbol();

public:
    Lexer(std::string source);

    bool isEOF();
    std::string readNextToken();
    static std::vector<std::string> tokenize(std::string);
};