#pragma once
#include <string>

enum class TokenType
{
    num_array,
    string_array,
    obect_array,
    mixed_array,
    object,
};

class TokenNode
{
public:

 TokenNode();
 
 std::string name;

}; 
