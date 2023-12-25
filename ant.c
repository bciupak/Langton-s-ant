#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <string.h>
#include "characters.h"
#include "ant.h"

// W - west
// E - east
// N - north
// S - south



wchar_t dictAnt (char* direction, char* color){
    
    if (strcmp(direction, "w") == 0){
        if (strcmp(color, "black") == 0)
            return ARROW_WEST_BLACK[0];
        else if (strcmp(color, "white") == 0)
            return ARROW_WEST_WHITE[0];
    } else if (strcmp(direction, "e") == 0){
        if (strcmp(color, "black") == 0)
            return ARROW_EAST_BLACK[0];
        else if (strcmp(color, "white") == 0)
            return ARROW_EAST_WHITE[0];
    } else if (strcmp(direction, "n") == 0){
        if (strcmp(color, "black") == 0)
            return ARROW_NORTH_BLACK[0];
        else if (strcmp(color, "white") == 0)
            return ARROW_NORTH_WHITE[0];
    } else if (strcmp(direction, "s") == 0){
        if (strcmp(color, "black") == 0)
            return ARROW_SOUTH_BLACK[0];
        else if (strcmp(color, "white") == 0)
            return ARROW_SOUTH_WHITE[0];
    }
   
}


// struct ant{
//     int x;
//     int y;  
//     wchar_t dirColAnt;


// } typedef Ant;

// void master(wchar_t** board){







// }
