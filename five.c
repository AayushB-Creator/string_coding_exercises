/*
wap that replaces a given character with another character in a string
*/
#include <stdio.h>

void charReplace(char * str, char toreplace, char replacewith){
    while(*str != '\0'){
        if(*str == toreplace){
            *str = replacewith;
        }
        str++;
    }

}

int main(){
    char str[] = "HI, aaYUSH BHaRTI JHa HERE!";
    charReplace(str,'a','A');
    printf("The string after correction is : %s",str);
    return 0;
}