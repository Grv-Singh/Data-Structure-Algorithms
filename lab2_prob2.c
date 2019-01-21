#include<stdio.h>
#include<stdlib.h>
void main(){

char character;
int population;
char town[30], county[30], country[30];
float lati,longi;

printf("Town name:\t");
scanf("%s",town);
printf("%s",town);
printf("Popultaion:\t");
scanf("%d",&population);
printf("%d",population);
printf("Country:\t");
scanf("%s",country);
printf("%s",country);
printf("Location Latitude:\t");
scanf("%f",&lati);
printf("%f",lati);
printf("Longitude:\t");
scanf("%f",&longi);
printf("%f",longi);
printf("Char = "+sizeof(char)+" byte "+"Int = "+sizeof(int)+" bytes "+"Float = "+sizeof(float)+" bytes");
}
