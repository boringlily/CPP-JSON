#include "JSON.h"
#include <iostream>
#include <string>

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

        enum ParserState
        {

        };

        std::string token{};
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

        for (auto c : json_str)
        {
            switch (c)
            {

                break;
            case object_open:
                end_token(token, depth);
                std::cout << "{" << std::endl;
                depth++;
                break;
            case object_close:
                end_token(token, depth);
                std::cout << "}" << std::endl;
                depth--;
                break;
            case array_open:
                end_token(token, depth);
                std::cout << "[" << std::endl;
                depth++;
                break;
            case array_close:
                end_token(token, depth);
                std::cout << "]" << std::endl;
                depth--;
                break;
            case assignment:
                end_token(token, depth);
                break;
            case string_token:
                if (string_open)
                {
                }
                break;
            case next:
                end_token(token, depth);
                break;
            case ' ':

                break;
            default:
                token.append(&c);
                //   std::cout << "fuck\t"<< c << std::endl;
            };
        };

        std::cout << "END END" << std::endl;
    };
};
