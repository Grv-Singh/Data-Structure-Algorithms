#include<stdio.h>
#include<string.h>

void main(){

//Game Starts Here!!
printf("Welcome to NimGame\n\n");

//Intialising useful Variables
int C=0,Sticks,u,TBlanks,Blanks,Counter,i,x,p,j,NoBlank,Start,End;

//Initialising and Declaring useful Variables
char Input[5],Array[15]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};

//This Piece of code(Z) Displays the Moves
Z:

//Declaring useful Variables
Sticks=3,Blanks=0,Counter=0,NoBlank=00;

//Start of Pattern
printf("\t + + + + + + + + +\n");

while(Sticks<=7){

    printf("\t + ");

    for(i=1;i<=Sticks;i++){
        if(Array[Counter]==1)
        {
            printf("| ");
        }else{
                printf("  ");
             }
    ++Counter;
                          }

    for(j=1;j<=(7-Sticks);j++){
        printf("  ");
                              }
    printf("+");

    printf("\n");

    Sticks+=2;
                }

printf("\t + + + + + + + + +\n");
//End of Pattern

//=========+=======+=======+=======+=======+=========+=============+===============++==============+============+=========+
printf("%d",C);
//Asking Apt. User for Input
if((C%2)!=0){
    printf("Player 1 Enter The Range to be Deleted <Start-End><Start=End, for Single Deletion> : ");
            }else{
        printf("Player 2 Enter The Range to be Deleted <Start-End><Start=End, for Single Deletion> : ");
                }

//Input from User

scanf("%s",&Input);

printf("\n");

//Extracting Start of Range
Start=(((Input[0]-48)*10)+(Input[1]-48));

//Extracting End of Range
End=(((Input[3]-48)*10)+(Input[4]-48));
//printf("%d%d",Start,End);
//Loop to count No. Of Blanks b/w User's Start and End Position(s)
for(x=Start;x<=End;x++)
{
    if(Array[(x-1)]==0){Blanks++;}

}//printf("%d",Blanks);

//Validating the Move
if(Blanks==0){
    NoBlank=11;
    }
    else{
    NoBlank=00;
    }

//Counting No. Of Blanks in Nimgame
for(u=0;u<15;u++)
{
    if(Array[u]==0){TBlanks++;}
}

//Checks for Valid Move i.e without Blanks
if(NoBlank==11){

    //Checks for Valid Move i.e Same Row is Valid else not
    if(((Start<=3)&&(End>=4))||((Start<=8)&&(End>=9)))
    {
    printf("Invalid Move!! Choose From Single Row...\n\n");
    goto Z;

    }else{


if(TBlanks<15){
        if((C%2)!=0){
            printf("\n\tPlayer 1's Move:%s\n",Input);

        //Makes Blanks in ARRAY as per Valid Input
        for(p=Start;p<=End;p++){
            Array[(p-1)]=0;
                               }

                         }else{
            printf("\n\tPlayer 2's Move:%s\n",Input);
                                //Makes Blanks in ARRAY as per Valid Input
        for(p=Start;p<=End;p++){
            Array[(p-1)]=0;
                               }
}
//Counter of Chance
        ++C;
        goto Z;

                 }else{
        if((C%2)!=0){
            printf("\n\tPlayer 2 Won!! :)\n");
                                      }else{
                                        printf("\n\tPlayer 1 Won!! :)\n");
                                           }
                        }

         }

               }else{
                        printf("Blanks Cannot be Deleted\n\n");
                        goto Z;
                    }

//End Of Game
}
