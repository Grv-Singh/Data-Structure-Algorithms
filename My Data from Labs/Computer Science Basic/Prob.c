#include<stdio.h>
#include<string.h>
#include<conio.h>

void main(){Q4();}

Q1(){
int f=0,b=0;
char name[] = "Gaurav";
while(name[f]!='\0'){b++; f++;}
//printf("%d",b);
f=0;
while(f<=b){printf("%c",name[b-f]);f++;}
}

Q2(){
char name[ ] = "Klinsman" ;
char *ptr ;
ptr = name ;
while(*ptr!='\0')
{
printf ("%c",*ptr) ;
ptr++;
}

}

Q3(){
char name[10];
gets(name);
puts("Hi!");
puts(name);
}

Q4(){
char name[25] ;
printf ( "Enter your full name " ) ;
scanf ( "%[^\n]s", name ) ;
printf("%s",name);
}
