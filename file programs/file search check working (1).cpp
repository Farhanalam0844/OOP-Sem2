
#include <iostream>
#include <conio.h>
#include<fstream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

 
struct student
{
   int rollno;
   char name[20];
   char branch[3];
   float marks;
   char grade;
};

 
 int main()
{
  system("cls");
   student st;
  ofstream fout("e:\\marks.dat", ios::app|ios::binary);// opens file in out mode
   
  	if (!fout)
  	{
  		cout<<"error in craeting file";
	}
      
         
		 cout<<"Read data from user using keyboard\n\n";
		 
		 cout<<"Enter Rollno: ";
         cin>>st.rollno;
         cout<<"Enter Name: ";
         cin>>st.name;
         cout<<"Enter Branch: ";
         cin>>st.branch;
         cout<<"Enter Marks: ";
         cin>>st.marks;

         if(st.marks>=75)
         {
            st.grade = 'A';
         }
         else if(st.marks>=60)
         {
            st.grade = 'B';
         }
         else if(st.marks>=50)
         {
            st.grade = 'C';
         }
         else if(st.marks>=40)
         {
            st.grade = 'D';
         }
         else
         {
            st.grade = 'F';
         }
      
	  
	  fout.write((char *)&st, sizeof(st));// data written to file
      cout<<"Record added to the file\n";
      
  
      fout.close();
   
       system("cls");
   
    //////////////Read from file/////////// 
   ifstream fin("e:\\marks.dat", ios::in|ios::binary);// opens file in out mode
   
   if (!fin)
   {
  		cout<<"error in craeting file";
	}
   
   
   
   cout<<"Rcord written on the file are\n\n";
   cout<<"Name \t\t RollNo \t Marks \t\t Grade\n";
   //while(!fin.eof())       // end-of-file used here
   
   
   
   while(fin.read((char *)&st, sizeof(st)))
   {
      //fin.read((char *)&st, sizeof(st));
      
		 cout<<st.name<<"\t\t "<<st.rollno<<" \t\t "<<st.marks<<"\t\t "<<st.grade;
		 cout<<endl;

         //putdata(stud);
       
    }
    
    fin.close();
    
   ////// Search /////////////
   ifstream in("e:\\marks.dat", ios::in|ios::binary);// search record from file
   
   if (!fin)
   {
  		cout<<"error in craeting file";
	}
   int rno;
	bool found;
   found = false;
   cout<<"Enter rollno you want to search for: ";
   cin>>rno;
	//cout<<"Name \t\t RollNo \t Marks \t\t Grade\n";
   while(in.read((char *)&st, sizeof(st)))       // end-of-file used here
   {
      //fin.read((char *)&stud, sizeof(stud));
      if(st.rollno == rno)
      {
         
		 cout<<"Record found at roll number "<<rno<<". Here is the record\n\n";
		 
		 cout<<"Name \t\t RollNo \t Marks \t\t Grade\n";
		cout<<st.name<<"\t\t "<<st.rollno<<" \t\t "<<st.marks<<"\t\t "<<st.grade;
		 cout<<endl;
         
         found = true;
        break;
      }
    }
  if(found==false)
   {
      cout<<"\nRecord not found at this roll number..!!\n";
      cout<<"Press any key to exit...\n";
      getch();
      //exit(2);
  }
   
   
   in.close();
   cout<<"\nPress any key to exit...\n";
   getch();
}
      

