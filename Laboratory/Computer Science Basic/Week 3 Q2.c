#include<stdio.h>
#include<string.h>

void main(){

char string1[]="naman",string2[]="naman";

if(strcmp(string1,strrev(string2))==0){
    printf("It's a Palindrome");
    }else{
        printf("It's not a Palindrome");
        }

}
