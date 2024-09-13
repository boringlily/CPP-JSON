#pragma once
#include <string>
#include <vector>
#include "better_types.h"


enum class TokenType
{
    num_array,
    string_array,
    obect_array,
    mixed_array,
    object,
};

class Token
{
public:

 Token();

 std::string name;
 std::string variable_str;
 
 u32 depth{0};
}; 

class JsonNode
{

std::vector<JsonVar>

};

class JsonVar
{

};