#include<iostream.h>
#include<fstream.h>
#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    char fname[30], str[100];
    fstream fp;
    int i=0;
    clrscr();
    cout<<"Enter the Name of File: ";
    gets(fname);
    fp.open(fname, fstream::out);
    if(!fp)
    {
	cout<<"\nError Occurred!";
    return 0;
    }
    cout<<"Enter the Data: ";
    gets(str);
    while(strlen(str)>0)
    {
	fp<<str;
	fp<<'\n';
	gets(str);
    }
    fp.close();
    fp.open(fname, fstream::in);
    if(!fp)
    {
	cout<<"\nError Occurred!";
	return 0;
    }
    cout<<"\nContent of "<<fname<<":-\n";
    fp.getline(str, 1000);
    while(strlen(str)>0)
   {
      
     cout<<++i<<".";
     cout << str << endl;
     fp.getline(str, 1000);
   
   }
    fp.close();
    getch();
    return 0;
}
