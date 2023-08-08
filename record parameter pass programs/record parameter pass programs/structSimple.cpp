#include <iostream>
#include <stdio.h>
#include <cctype>
#include <cstring>
using namespace std;

struct Person
{
    char name[50];
    int age;
    float salary;
};

int main()
{
   
  //Person p1={"ali ahmad", 23, 66000};
  //Person p2;
  //strcpy(p1.name,"hassan ali");
  //p2=p1;// we are assigning values of structure p1 to structure p2 
  
  //p2.age=p2.age+22*1;
  //p2.salary=p2.salary-1000/1;;*/
   Person p1, p2;
	//p1.name="ahmad ali";
//	strcpy(p1.name, "ahmad ali");
    //p1.age=15;
    //p1.salary=50000;
	
	cout << "Enter Full name: ";
    cin.get(p1.name, 50);
    //gets(p1.name);
    
    cout << "Enter age: ";
    cin >> p1.age;
    cout << "Enter salary: ";
    cin >> p1.salary;

    // Function call with structure variable as an argument
    cout << "\nDisplaying Information." << endl;
    cout << "Name: " << p1.name << endl;
    cout <<"Age: " << p1.age << endl;
    cout << "Salary: " << p1.salary;

    return 0;
}


