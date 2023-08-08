#include <iostream>
#include <stdio.h>
#include <cctype>
#include <cstring>
#include <cstdlib>
#include<ios>	// for <streamsize>
#include<limits>// for numeric_limits
using namespace std;

struct Person
{
    char name[50];
    int age;
    float salary;
};

int main()
{
   Person p1[2];
  
 
	  for(int i=0;i<2;i++)
	  	{
		 	cout << "Enter Full name: ";
		    cin.getline(p1[i].name,50);
		    //cin.ignore(numeric_limits<streamsize>::max(),'\n');
		    cout << "Enter age: ";
		    cin >> p1[i].age;
		    cin.ignore(numeric_limits<streamsize>::max(),'\n');
		    cout << "Enter salary: ";
		    cin >> p1[i].salary;
		 	cin.ignore(numeric_limits<streamsize>::max(),'\n');
		}
 /*
    cout << "Enter Full name: ";
    gets(p1.name);
    cout << "Enter age: ";
    gets(ag);
    p1.age=atoi(ag);
    //cin >> p1.age;
    cout << "Enter salary: ";
    gets(sal);
    p1.age=atof(sal);*/
    //cin >> p1.salary;
    

    // Function call with structure variable as an argument
    
 for(int i=0;i<2;i++)
  {
    cout << "\nDisplaying Information." << endl;
    cout << "Name: " << p1[i].name << endl;
    cout <<"Age: " << p1[i].age << endl;
    cout << "Salary: " << p1[i].salary;
  }
    return 0;
}


