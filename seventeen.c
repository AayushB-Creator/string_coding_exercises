/*
wap that checks whether two given strings "Good Morning" and "GOOD MORNING" are same or not
*/
#include <stdio.h>
#include <ctype.h>
int main(){
    char str1[]="Good Morning";
    char str2[]="GOOD MORNING";

    int i=0;
    int j=0;
    int same=1;
    while(str1[i]!='\0' || str2[j]!='\0'){
        if(tolower(str1[i])!=tolower(str2[j])){
            same=0;
            break;
        }
        i++;
        j++;
    }
    if(same) printf("They are same!");
    else printf("They are not same!");
    return 0;
}