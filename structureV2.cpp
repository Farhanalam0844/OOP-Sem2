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
	char age1[5];


	cout << "enter age of the first student" << endl;
	gets(age1);
	s1.age=atoi(age1);// atoi function converts string in to integer
					  // atof function converts string in to float
	
	cout << "enter name of student 1 " << endl;
	gets(s1.name);
	cout << "enter grade of the student " << endl;
	cin >> s1.grade;
	


	cout << " displaying the information" << endl;
	cout << "display age= " << s1.age << endl;
	cout << "display grade=" << s1.grade<<endl;
	cout << " Display name of the student 1 =" << s1.name << endl;

}
