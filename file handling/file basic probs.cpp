#include<iostream>
#include<fstream>
#include<string>
using namespace std;
struct student{
	string name;
	int ID;
	char grade;
};
void input(student[],int);
void output(student [],int );
void write(fstream &,string,int,student []);
int totalch(fstream&,string,int,student[]);
int main(){
	int SIZE;
	cout<<"How many of students you want to store data of : ";
	cin>>SIZE;
	student *str=NULL;
	str=new student[SIZE];
	input(str,SIZE);
	output(str,SIZE);
	string name;
	cin.ignore();
	cout<<"Enter the name of file : ";
	getline(cin,name);
	fstream data;
	//(name.c_str(),ios::out);
	write(data,name,SIZE,str);
	int totch=totalch(data,name,SIZE,str);
	cout<<totch<<endl;
}
void input(student s[],int n){
	int i;
	for(i=0;i<n;i++)
	{
			cin.ignore();
		cout<<"Enter the name of student : ";
		getline(cin,s[i].name);
		cout<<"Enter the ID of student : ";
		cin>>s[i].ID;
		cout<<"Enter the grade of student : ";
		cin>>s[i].grade;
	
	}

}
void output(student s[],int n){
	int i;
	for(i=0;i<n;i++)
	{
		cout<<"Name of student  : "<<i+1<<" is : "<<s[i].name<<endl;
		cout<<"ID of student    : "<<i+1<<" is : "<<s[i].ID<<endl;
		cout<<"Grade of student : "<<i+1<<" is : "<<s[i].grade<<endl;
	}

}
void write(fstream &data,string name,int n,student s[]){
	data.open(name.c_str(),ios::out);
	int i;
	//for(i=0;i<n;i++)
	//{
		data<</*"Name of student  : "<<i+1<<" is : "<<*/s[i].name<<endl;
	//	data<<"ID of student    : "<<i+1<<" is : "<<s[i].ID<<endl;
	//	data<<"Grade of student : "<<i+1<<" is : "<<s[i].grade<<endl;
	//}
	data.close();
}
int totalch(fstream& d,string name,int n,student s[]){
	d.open(name.c_str(),ios::in);
	char ch;
	int i=0;
	d.get(ch);
	while(!d.eof()){
		if(d.get(ch)){
			i++;
		}
	}
	return i;
}
