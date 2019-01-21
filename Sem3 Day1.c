#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main(){

FILE *fptr,*fptr1;

char lname[20],name[20],cnf[4][20];
long long enroll;
int i=1,w;

fptr = fopen("file.txt","a");
fptr1 = fopen("file.txt","r");

printf("Choose from the Following Functions...\n\t1. Input in Record\n\t2. Show All Records\n\t3. Sort\n\t4. Search\n\t5. Delete\n\t6. List Of Subjects\n\t7. List Of Faculty\n");
scanf("%d",w);
switch(w){
            case 1:
                Input(fptr,lname,name,cnf,s,enroll,i);
                system("pause");
                break;
            case 2:
                Show(fptr1);
                system("pause");
                break;
            case 3:
                Sort(fptr1,i);
                system("pause");
                break;
            case 4:
                Search(fptr1,i);
                system("pause");
                break;
            case 5:
                Delete(fptr);
                system("pause");
                break;
            case 6:
                Retrieve_List_Of_Subjects(fptr1,i);
                system("pause");
                break;
            case 7:
                Retrieve_Names_Of_Faculty(fptr1,i);
                system("pause");
                break;
            }
}

void Input(FILE *fptr, char lname[20],name[20],cnf[4][20], long long enroll, int i=1)
{
printf("Last Name? ");
scanf("%s",lname);
fprintf(fptr,"Last Name: %s\t",lname);

printf("Name? ");
scanf("%s",name);
fprintf(fptr,"Name: %s\t",name);

printf("Enroll? ");
scanf("%lld",&enroll);
fprintf(fptr,"Enroll: %lld\t",enroll);

fprintf(fptr,"Course & Faculty:");
while(i<=4){
    printf("Course & Faculty %d?",i);
    scanf("%s",cnf[i-1]);
    fprintf(fptr," %s",cnf[i-1]);
    if(i!=4){
        fprintf(fptr,",");
                  }
    else{
        fprintf(fptr,".\t");
                  }
    i++;
    }

fclose(fptr);
}

void Sort(FILE *fptr1)
{
int w;
char a;
printf("Which Sort? 1.Bubble 2.Insertion 3.Selection\n");
scanf("%d",w);
switch(w){
            case 1:
                fscanf("Last Name: %s\t");
                printf("Sort By? 1.Last Name 2.First Name 3.Course&Faculty 4.Enroll");
                scanf("%c",a);
                system("pause");
                break;
            case 2:

                system("pause");
                break;
            case 3:

                system("pause");
                break;
        }

fclose(fptr);
}
