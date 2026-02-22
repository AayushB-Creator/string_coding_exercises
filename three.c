/*
wap in C that compares first n characters of one string with first n chars of another string
*/
#include <stdio.h>

int main(){
    char str1[]="aayush bharti";
    char str2[]="aayush jha";
    int n = 6;
    int ncopy=n;
    int same = 1;//by default, let both are same(upto first n chars)
    int i=0,j=0;
    while(ncopy>0){
        if(str1[i]=='\0' || str2[j]=='\0'){
            same = 0;
            break;
        }
        else if(str1[i]!=str2[j]){
            same=0;
            break;
        }else{
            i++;
            j++;
        }
        ncopy--;
    }
    if(same) printf("They are same for first %d characters!\n",n);
    else printf("Not same for first %d characters!",n);
    return 0;
}