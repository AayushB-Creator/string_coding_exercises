/*
wap in which a string is passed as an argument to a function
*/
#include <stdio.h>

void printStr(char * str){//or (char str[])
    printf("Printing...\n");
    while(*str!='\0'){
        printf("%c",*str);
        str++;
    }
}

int main(){
    char name[]="Hi, mY Name is Aaayush Bharti jha!";
    printStr(name);
    return 0;
}