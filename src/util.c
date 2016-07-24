#include "util.h"

void err(char * msg){
    fprintf(stderr, msg);
    exit(EXIT_FAILURE);
}
