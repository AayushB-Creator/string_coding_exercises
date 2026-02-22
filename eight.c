/*
wap that accepts a text 
count and display the number of times the word 'the' appears in the text
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char text[] = "the there them other The, the! THE? breathe-the_the the2 the.";

    char word[] = "the";
    int count =0;

    for(int i=0;i<=strlen(text)-3;i++){
        if(tolower(text[i])=='t' && tolower(text[i+1])=='h' && tolower(text[i+2])=='e'){
            if((i==0 || !isalpha(text[i-1])) && !(isalpha(text[i+3]))){
                count++;
            }
        }
    }
    printf("the occurence is %d",count);

    return 0;
}