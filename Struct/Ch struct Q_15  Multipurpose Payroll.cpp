#include<iostream>
using namespace std;

struct Hourly_paid{
	double hours;
	double hourlyrate;
};
struct salaried{
	double salary;
	double bonus;
};
union member{
	Hourly_paid hp_member;
	salaried sa_member;
};
int main(){
	member m;
	int n;
	cout<<"Enter the worker type you want to calculate of : \nFor Hourly paid press : 1\nFor Salaried paid press : 2\nEnter your choice : ";
	cin>>n;
	if(n==1){
		cout<<"Enter no of hours : ";
		cin>>m.hp_member.hours;
		cout<<"Enter hourly rate : ";
		cin>>m.hp_member.hourlyrate;
		cout<<"Salary of Hourly paid worker is : "<<m.hp_member.hourlyrate*m.hp_member.hours<<endl;
	}
	if(n==2){
		cout<<"Enter salary of worker : ";
		cin>>m.sa_member.salary;
		cout<<"Enter bonus : ";
		cin>>m.sa_member.bonus;
		cout<<"Salary of Salary paid worker is : "<<m.sa_member.salary+m.sa_member.bonus<<endl;
	}
}
