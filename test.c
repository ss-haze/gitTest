#include <stdio.h>
#include <stdlib.h>


int StrToInt(char strPtr[]){
int total=0;
for (int i=0; strPtr[i]!='\0'; i++){
total = total *10 + (strPtr[i]-'0');
}
return total;
}


int main (void) {
printf("Hello, World!\n");
char str[]="3124689";
printf("String is: %s\n", str);
int strToInt = atoi(str);
printf("Integer is: %d\n", strToInt);
printf("Integer from fn is: %d\n", StrToInt(str) );
return 0;
}
