#include <iostream>
#include "JSON.h"

int main()
{
    FILE * JSON_FILE; 
    char * file_buffer = static_cast<char *>(calloc(1024, 1));
    JSON_FILE = fopen("/Users/lily/Documents/GitHub/CPP-JSON/main/example.json", "r");
    if(! JSON_FILE)
    {
        printf("FUCK");
        return -1;
    }
    
    fread(file_buffer, 1024*4, 1, JSON_FILE);
    std::string my_json_string{file_buffer};

    CPP_JSON::Reader my_file(my_json_string);
    // printf("%s", my_json_string.c_str());
    free(file_buffer);

    return 0;
}