#include<iostream>	

#include<cstring>	// Provides strcpy(), etc.
#include<cctype>	// Provides toupper()
using namespace std;

const int size =3;	

struct student
{
	char name[27];			// Name of student
	int student_number;		// Student number of student
	float gpa;				// Grade point average of student
};


student stu[]={ {"hassan", 66,  3.9},
				{"ali"   , 40,  3.2}, 
				{"hammad", 30,  3.1}
			};

void sort_by_name(student [], int );


int main()
{
student s[size]; 

cout<< "======Origional Record Displayed ==================\n";
cout<< "Name\t student no\t GPA\n";
	cout<< "========================\n";
	for(int i=0; i<size; i++)
	{
		cout << stu[i].name; cout<<"\t\t";			// Prints student name
					
		cout<< stu[i].student_number;cout<<"\t";	// Prints student number
						
		cout << stu[i].gpa << endl;		// Prints GPA
	}
cout<< "===============================================\n";

	cout<< "====Calling Sort Function(by student Name)====\n";
	
	sort_by_name( stu,size );
	cout<<"\ndata after sorting \n";
	cout<<"=======================================\n";
		cout<< "Name\t student no\t GPA\n";
			cout<<"\n=======================================\n";
	for( int i=0; i<size; i++)
	{
		cout << stu[i].name; cout<<"\t\t";			// Prints student name
					
		cout<< stu[i].student_number;cout<<"\t";	// Prints student number
						
		cout << stu[i].gpa << endl;		// Prints GPA
	}
	
	return 0;
}


////////////////////////////////////////////
void sort_by_name(student s[], int n)
{
	student temp;	// Local variable used to swap records

	for(int j=0;j<n; j++)
	{
		for(int i=0; i<n-1; i++)
		{
			// If s[i].student_number is greater than s[i+1].student_number, swap the records
			if(strcmp(s[i].name,s[i+1].name)>0)
			{
				temp = s[i];
				s[i] = s[i+1];
				s[i+1] = temp;
			}
		}
	}
}
///////////////////////////////////////////////////////////

