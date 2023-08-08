#include<iostream>
using namespace std;
struct person
{
	char name[20];
	int age;
	double height;
	double foodexp;
	double medicalexp;
	
};
void input(person [],int);
void output(person [],int);
int main()
{
	const int SIZE=5;
	person record[SIZE];
	double monthexp;
	input(record,SIZE);
	output(record,SIZE);
	
}
void input(person rec[],int s)
{
	cout<<".....INPUT FUNCTION.....";
	for(int i=0;i<s;i++)
	{
		cout<<"\nEnter the name : ";
		cin.getline(rec->name,20);
		cout<<"\nEnter the age : ";
		cin>>rec->age;
		cout<<"\nEnter the height : ";
		cin>>rec->height;
		cout<<"\nEnter the  food expence : ";
		cin>>rec->foodexp;
		cout<<"\nEnter the medical expence : ";
		cin>>rec->medicalexp;
			cin.ignore();
	}
}
void output(person rec[],int s)
{
	cout<<".....OUTPUT FUNCTION.....";
	for(int i=0;i<s;i++)
	{
	
		cout<<"\n Name : "<<rec->name;
			cout<<"\n Age : "<<rec->age;
				cout<<"\n Heighr : "<<rec->height;
					cout<<"\n food Expence : "<<rec->foodexp;
						cout<<"\n Medical Expence : "<<rec->medicalexp;
	}
}
