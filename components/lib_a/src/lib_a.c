

#include "lib_a.h"
int get_res()
{
    #ifdef CJC01
    return 1;
    #endif
    #ifdef CJC02
    return 2;
    #elif ESP_PLATFORM
    return 3;
    #endif
    return 0;



}

