/*
wap to convert the given string "hello world" -> "dlrow olleh"
*/
#include <stdio.h>
#include <string.h>
int main(){
    char str[]="hello world";
    int i=0;
    int j=strlen(str)-1;
    while(i<j){
        char temp = str[i];
        str[i]=str[j];
        str[j]=temp;

        i++;
        j--;
    }

    printf("%s",str);
    return 0;
}