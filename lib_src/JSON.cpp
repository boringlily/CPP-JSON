#include "JSON.h"
#include <iostream>
#include <string>
#include <vector>

namespace CPP_JSON
{   Reader::Reader(std::string json_str)
    {
        enum JSONtokens
        {
            end = 0,
            object_open = '{',
            object_close = '}',
            array_open = '[',
            array_close = ']',
            assignment = ':',
            next = ',',
            string_token = '\"'
        };
        std::vector<char> token{};
        u32 depth{0};
        bool string_open{false};

        auto print_depth = [](u32 &depth)
        {
            std::string out;
            
            return out;
        };

        auto end_token = [print_depth](std::string &token, u32 &depth)
        {
            for (u32 i{depth}; i > 0; i--)
            {
                printf("\t");
            }   

            printf("%s\n", token.c_str());
            token.clear();
        };
        char c{};
        for (u32 i{0}; i < json_str.length(); i++)
        {
            c = json_str[i];
            constexpr bool is_esc_token = [](char &c)
            {
                return c == ',' || c== '{' || c == '[' || c== '}' || c == ']';
            };

            if(c < ' ' || c > '~')
            {
                continue;
            }
            
            switch (c)
            {
            case object_open:
                std::cout << "{" << std::endl;
                depth++;
                break;
            case object_close:
                std::cout << "}" << std::endl;
                depth--;
                break;
            case array_open:
                std::cout << "[" << std::endl;
                depth++;
                break;
            case array_close:
                std::cout << "]" << std::endl;
                depth--;
                break;
            case assignment:
               std::cout << std::endl << "__ASSIGN__" <<std::endl; 
                break;
            case string_token:
                if (string_open)
                {
                    string_open = false;
                }
                else
                {
                    string_open = true;
                }
                break;
            case next:
                std::cout<<std::endl;
                break;
            case ' ':
                if(!string_open)
                {
                    continue;
                }
            case '\n':

                break;
            default:
                token.push_back(c);
                std::cout << token.data() << std::endl;
            };
        };

        std::cout << "END END" << std::endl;
    };
};
