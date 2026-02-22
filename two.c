/*
wap in C to concatenate first n characters of a string with another string
*/
#include <stdio.h>

void coNcat(char * str1, char * str2, int n){
    while(*str1!='\0'){
        str1++;
    }// to reach at end of str1

    while(*str2!='\0' && n>0){ //if n is more than no. of chars present in str2 , then only available chars will be added and loop will not go beyond that!
        *str1 = *str2;
        str1++;
        str2++;
        n--;
    }
    *str1='.';//to add my signature style!
    str1++;
    *str1='\0';
}

int main(){
    char str1[]="Hello this is...";
    char str2[]="Aayush Bharti";
    int n=8;
    coNcat(str1,str2,n); //concatenates str2 to str1 i.e., str1 content followed by str2 content
    printf("String1 after concatenation is : %s",str1);
    return 0;
}