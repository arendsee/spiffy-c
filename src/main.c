#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "calculate.h"
#include "util.h"

int main(int argc, char * argv[]){

    if(argc == 4){
        if(strcmp(argv[1], "add") == 0){
            printf("%f\n", add(atof(argv[2]), atof(argv[3])));        
        }
        else if(strcmp(argv[1], "multiply") == 0){
            printf("%f\n", multiply(atof(argv[2]), atof(argv[3])));        
        }
        else {
            err("No valid subcommand given, options = {add, multiply}\n");
        }
    } else {
        err("USAGE: <subcommand> <val1> <val2>\n");
    }
    
    return EXIT_SUCCESS;
}
