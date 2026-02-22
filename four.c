/*
wap that removes leading and trailing spaces from a string
*/
#include <stdio.h>
#include <string.h>
int main(){
    char str[]="     ... My Name    is Aayush      ";
    //trailing spaces removal is quite easy
    //cuz in that we just need to put a '\0' after the last valid character and the space will disappear


    //first, let us do leading spaces removal
    char * leadSpaceTrack = str;//tracks from where the first valid character of string is.
    while(*leadSpaceTrack==' '){
        leadSpaceTrack++;
    }//leadSpaceTrack is at the location of 'A'

    char copy_str[100];
    int i=0;
    while(*leadSpaceTrack!='\0'){
        copy_str[i] = *leadSpaceTrack;
        leadSpaceTrack++;
        i++;
    }//copy_str[] = "Aayush Bharti Jha    "
    copy_str[i]='\0' ;


    //now, for trailing spaces removal
    char * trailSpaceTrack = copy_str;
    //put it at last of copy_str
    while(*trailSpaceTrack != '\0'){
        trailSpaceTrack++;
    }
    if(copy_str[0]!='\0') trailSpaceTrack--;


    while(*trailSpaceTrack==' '){
        trailSpaceTrack--;
    }//now at the space just after Jha
    *(trailSpaceTrack+1)='\0';

    //updating the str original
    int j=0;
    i=0;
    while(copy_str[j]!='\0'){
        str[i]=copy_str[j];
        i++;
        j++;
    }
    str[i]='\0';

    if(printf("%s",str) == 0) printf("EMPTY!");

    return 0;
}