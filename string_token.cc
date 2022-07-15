/******************************************************************************
Helper function for string tokenization using a set of delimeters.
*******************************************************************************/

#include <string.h>
#include <vector>
#include <string>

// Receives a string and a list of delimeter and returns vector of delimited 
// string. 
std::vector<std::string> GetTokens(std::string str, std::string delimiters) {
    std::vector<std::string> tokens;
    char *token = strtok((char*)str.data(), (char*)delimiters.data());
 
    while (token != NULL)
    {
        tokens.push_back(token);
        token = strtok(NULL, (char*)delimiters.data());
    }
 
    return tokens;
}


/******************************************************************************
Exmple usage: 
*******************************************************************************/

#include <iostream>

int main()
{
    auto result = GetTokens("Hello World! - Welcome", " -");
    
    for ( auto s : result ) {
        std::cout << s << std::endl;
    } 
    
    return 0;
}
