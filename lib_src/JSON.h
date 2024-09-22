#pragma once
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
        Reader(std::string json_str);

        ReaderStatus FindNode();
        ReaderStatus FindVariable();
    private:
    
    };
};