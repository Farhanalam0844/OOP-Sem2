#include<iostream>
#include<string>
#include<fstream>
using namespace std;
struct student{
	int ID=0;
	int age=0;
	char grade=NULL;
};
int main(){
	int SIZE,i;
	fstream data1,data2;
	cout<<"How many of the students you want to store data of : ";
	cin>>SIZE;
	student *s=NULL;
	s=new student[SIZE];
	for(i=0;i<SIZE;i++){
		cout<<"Enter ID of student : "<<i+1<<" : ";
		cin>>s[i].ID;
		cout<<"Enter age of student : "<<i+1<<" : ";
		cin>>s[i].age;
		cout<<"Enter grade of student : "<<i+1<<" : ";
		cin>>s[i].grade;
	}
	data1.open("data1.txt",ios::out);
	for(i=0;i<SIZE;i++){
		data1<<"ID of student : "<<i+1<<" is : "<<s[i].ID<<endl;
		data1<<"Age of student : "<<i+1<<" is : "<<s[i].age<<endl;
		data1<<"Grade of student : "<<i+1<<" is : "<<s[i].grade<<endl;
	}
	
	
	data1.close();
	data2.open("data2.txt",ios::out);
	data1.open("data1.txt",ios::in);
	string y;
	getline(data1,y);
	while(!data1.eof()){
		data2<<y<<endl;
		getline(data1,y);
	}
	data2.close();
	data1.close();
	
	
}
