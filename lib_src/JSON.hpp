#pragma once
#include <string>
#include "better_types.h"

namespace CPP_JSON 
{
    enum class ReaderStatus : u32
    {
        // Descriptive
        Found_Array,
        Found_Object,
        Found_String,
        Found_Number,
        // Error Types
        Not_Found,
        Syntax_Error,
        Invalid_File,
    };

    class Reader{
    public:
        Reader(std::string str)
        {
            Reader(str.c_str(), str.length());
        }
        
        Reader(const char* byte_buffer, u32 length)
        {
            enum JSONtokens{
                end = 0,
                object_open  = '{',
                object_close = '}',
                array_open  = '[',
                array_close = ']',
                assignment = ':',
                token_next = ',',
                token_start = '\"'
            };
            char prev = ' ', current = ' ', next = ' ';
            bool str_open{false};
            JSONtokens prev_token{end};
            uint32_t depth;
            for(u32 i; i < length; i++)
            {
                if( i )
            };
        };

        ReaderStatus FindNode();
        ReaderStatus FindVariable();
    private:
    
    };
};
