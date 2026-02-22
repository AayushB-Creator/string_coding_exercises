/*
wap to count the total no. of occurrences of a given char in the string
*/
#include <stdio.h>

int findOccOf(char occOf, char * str){
    int occ=0;
    while(*str!='\0'){
        if(*str==occOf) occ++;

        str++;
    }
    return occ;
}

int main(){
    char str[] = "Aayush Bharti Jha is my name!";
    char occOf = 'a';
    printf("The total occurrences of %c in the string is : %d",occOf,findOccOf(occOf,str));
    return 0;
}