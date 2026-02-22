/*
wap to find the last instance of occurrence of a sub-string within a string
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char text[] = "hello world world";
    char str[]  = "world";
    int max = strlen(text)-strlen(str)+1;
    int index= -1;
    int found =1;
    int i=0;
    while(i<max){
        for(int k=0;k<strlen(str);k++){
            if(text[i+k]!=str[k]){
                i++;
                found =0;
                break;
            }else{
                found =1;
            }
        }
        if(found != 0) {
            index=i;
            i++;
        }
    }
    

    printf("found at %d",index);
   
    return 0;
}