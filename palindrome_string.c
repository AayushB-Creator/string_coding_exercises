//wap to find whether the given string is a palindrome or not
#include <stdio.h>
int main(){
    char str[100];
    int i=0, j, length=0;
    printf("Enter the string : ");
    scanf("%s",str);

    while(str[i]!='\0'){
        length++;
        i++;
    }

    i=0;
    j=length-1;
    int isPalindrome=1 ;//take it as  yes by default
    while(i<=length/2){
        if(str[i]==str[j]){
            i++;
            j--;
        }else{
            isPalindrome=0;
            break;
        }
    }
    if(isPalindrome) printf("%s is a PALINDROME!",str);
    else printf("%s is NOT a palindrome!",str);
    return 0;
}