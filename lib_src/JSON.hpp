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
        Reader(std::string str);
        Reader(u8* byte_buffer, u32 length);
        Reader(char* byte_buffer, u32 length);

        ReaderStatus FindNode();
        ReaderStatus FindVariable();
    private:
    
    std::string json_str{""};

    };
};
