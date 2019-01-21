#include<stdio.h>

void main(){

struct employee{
char name[20];
int empid;
char DOJ[10];
}m[3];

m[0]={"Gaurav",001,"01-01-2015"};
m[1]={"Saksham",002,"02-03-2015"};
m[2]={"Chirag",003,"04-05-2015"};

int g,p;
char date[2],month[2];
for(g=0;g<=2;g++){

for(p=0;p<=1;p++){m[g].DOJ[p]=date[p];}
for(p=3;p<=4;p++){m[g].DOJ[p]=month[p-3];}

}

for(g=0;g<=2;g++){
if()

}

}
