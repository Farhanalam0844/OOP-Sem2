#include<iostream>
#include<cctype>
#include<cstring>
#include<cstdlib>
#include<stdio.h>
#include<cstdio>
using namespace std;
struct student
{
	int age;
	char name[50];
	char grade;
};
int main()
{
	student s1, s2;
	
    // use cin.ignore() function after every input 
    // if you are using input as cin.getline()

	cout << "enter age of the first student" << endl;
	cin >> s1.age;	cout << endl;
	cin.ignore(50, '\n');
	cout << "enter name of student 1 " << endl;
	cin.getline(s1.name,50);
	cin.ignore(50, '\n');//clear buffer before taking new input
	//gets(s1.name);
	cout << "enter grade of the student " << endl;
	cin >> s1.grade;
	cin.ignore(50, '\n');	


	cout << " displaying the information" << endl;
	cout << "display age =" << s1.age << endl;
	cout << "display grade =" << s1.grade<<endl;
	cout << " Display name of the student 1 =" << s1.name << endl;

}
