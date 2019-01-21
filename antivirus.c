/*The program written below is an exclusive property of Hack Zone
You are not allowed to copy/reprint it in any social media like:-
books, internet, blogs, etc. without the permission of its author.
Author: Hack Zone Team
Release Date(dd/mm/yyy): 24/6/2013 */
#include <dirent.h>
#include <string.h>
#include <fstream.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream.h>
int scan_this(char *file_name)
{
char *pattern, *line_in_file;
char file_ch, ch;
int val, val2, flag;
ifstream fin3, fin4;
fin3.open(file_name); // incase the file is not accesible
if(!fin3) return 0;
else // file is accessible | 100% it is a file.
{
//Opening Virus Database File
fin4.open("db.txt"); // this is our character pattern file
for(;;)
{
fin4>>pattern;
if(!strcmp(pattern,"<-"))
{
fin4>>pattern;
if(!strcmpi(pattern,"End"))return -1;
else if(!strcmpi(pattern, "virus"))
{
if(flag) return 1;
else continue;
}
}
else if(!strcmpi(pattern,"LINE"))
{
fin4>>val; // got the line number
// skipping initial lines to reach the line number
for(int i=0;i<val-1;i++)
{
fin3.getline(line_in_file, 300);
}
fin4>>val; // got the character number
fin4>>file_ch; // got the character
//skipping initial character to reach the character
for(i=0;i<val-1;i++)
{
fin3.get(ch);
}
if(file_ch == ch) flag = 1; // matched.
else flag =0;
fin3.seekg(0); // set to start
}
}
}
}
void main()
{
char comm[300], dirpath[100], file_name[200];
char ask;
int response;
ifstream fin;
cout<<"Enter Directory you want to scan: ";
cin>>dirpath;
strcpy(comm, "dir ");
strcat(comm, "dirpath /b /s >tmp.$$$");
system(comm);
fin.open("tmp.$$$");
while(!fin.eof())
{
fin.getline(file_name, 200);
response = scan_this(file_name);
if(response == 1)
{
cout<<"<--!! Caution.! A Virus has been Detected..!";
cout<<"\n"<<file_name;
cout<<"\nPress Enter Key to Delete it.";
ask= getch();
if(ask == 13)
{
remove(file_name); // delete the virus
}
}
}
fin.close();
cout<<"Scan Complete.!! Thank You for using our anti virus";
getch();
}

