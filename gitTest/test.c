#include <stdio.h>
#include <stdlib.h>
#include "strToInt.h"


int main (void) {
printf("Hello, World!\n");
char str[]="3124689";
printf("String is: %s\n", str);
int strToInt = atoi(str);
printf("Integer is: %d\n", strToInt);
printf("Integer from fn is: %d\n", StrToInt(str) );
return 0;
}
