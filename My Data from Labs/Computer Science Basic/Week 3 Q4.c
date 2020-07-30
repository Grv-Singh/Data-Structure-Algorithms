#include<stdio.h>
#include<string.h>
void main(){char *names[]={"Anand","Naureen","Banjot","Wahid","Sheena"};int i,j;char temp,*p,*q;for(i=0;i<2;i++){p=&names[i];q=&names[(4-i)];temp = *p;*p = *q;*q = temp;}for(j=0;j<5;j++){printf("%s ",names[j]);}}
