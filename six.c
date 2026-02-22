/*
wap to count the no. of digits, uppercase chars, lowercase chars, and special chars in a given string
*/
#include <stdio.h>
int main(){
    char str[] = "Zz9@aA0$kL#5mN&1xY*";
    int digit_count=0, upper_count=0, lower_count=0, special_count=0;

    char * pstr = str;
    while(*pstr!='\0'){
        if(*pstr>='a' && *pstr<='z') lower_count++;
        else if(*pstr>='A' && *pstr<='Z') upper_count++;
        else if(*pstr>='0' && *pstr<='9') digit_count++;
        else special_count++;

        pstr++;
    }

    printf("\nDigit count is %d",digit_count);
    printf("\nUppercase count is %d",upper_count);
    printf("\nLowercase count is %d",lower_count);
    printf("\nSpecial Character count is %d",special_count);
    return 0;
}