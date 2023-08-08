#include<iostream>
#include<fstream>
#include<string>
using namespace std;

struct student{
	string name;
	int ID;
	char grade;
};
int main(){
	int SIZE,i;
	cout<<"Enter the no of students you want to add data of : ";
	cin>>SIZE;
	student *s;
	s=new student[SIZE];
	for(i=0;i<SIZE;i++){
		cin.ignore();
		cout<<"Enter the name of student  : "<<i+1<<" : ";
		getline(cin,s[i].name);
		cout<<"Enter the ID of student    : "<<i+1<<" : ";
		cin>>s[i].ID;
		cout<<"Enter the grade of student : "<<i+1<<" : ";
		cin>>s[i].grade;
		
	}
	cin.ignore();
	string name;
	cout<<"Enter the name of student you want to search data of : ";
	getline(cin,name);
	for(i=0;i<SIZE;i++){
		if(name==s[i].name){
			cout<<"Name of student is  : "<<s[i].name<<endl;
			cout<<"ID of student is    : "<<s[i].ID<<endl;
			cout<<"Grade of student is : "<<s[i].grade<<endl;		
		}
	}
//	
string name2;
	cout<<"Enter the name of student you want to delete data of : ";
	getline(cin,name2);
	int j;
	for(i=0;i<SIZE;i++){
		if(name2==s[i].name){
		s[i].name=s[i+1].name;
		s[i].ID=s[i+1].ID;
		s[i].grade=s[i+1].grade;
		}
	}
	SIZE--;
	for(i=0;i<SIZE;i++){
			cout<<"Name of student is  : "<<s[i].name<<endl;
			cout<<"ID of student is    : "<<s[i].ID<<endl;
			cout<<"Grade of student is : "<<s[i].grade<<endl;
	}
}
