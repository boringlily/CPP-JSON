#include <iostream>
#include "JSON.hpp"




int main()
{
    std::string my_json_string{"{ \"unsigned_var\": 8, \"signed_var\": -15, \"object\":{\"var1\"} }"};

    CPP_JSON::Reader my_file();
    printf("%s", my_json_string);

    return 0;
}