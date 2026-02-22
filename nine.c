/*
wap to count the total no. of occurrences of a word in the text
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char text[] = "the there them other The, the! THE? breathe-the_the the2 the.";

    char word[10];
    printf("Input the word to check for : ");
    scanf("%s",word);
    int count =0;
    
    for(int i=0;i<=strlen(text)-strlen(word);i++){
        int same=1;
        for(int k=0;k<strlen(word);k++){
            if(tolower(text[i+k])!=tolower(word[k])){
                same=0;
                break;
            }
        }
        if(same){
            if((i==0 || !isalpha(text[i-1])) && !(isalpha(text[i+strlen(word)]))){
                    count++;
            }
        }
        
    }
    printf("the occurence is %d",count);

    return 0;
}