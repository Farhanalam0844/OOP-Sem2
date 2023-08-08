#include<iostream>
#include<string>
#include "Month.h"
#include "Month.cpp"
using namespace std;

int main(){
/*	Month m;
	string mnth;
	int number;
	cout<<"Enter the month in lowercase : ";
	cin>>mnth;
	Month n(mnth);
//	cout<<g.get_month_number()<<endl;
	
//	string month;

*/
	int number;
	string month;
	cout<<"Enter month : ";
	cin>>month;
	Month g(month);
	cout<<g.get_month_number()<<endl;
	cout<<g.get_month()<<endl;
//	cout<<"Enter month number : ";
//	cin>>number;
	//g.Month(number);
	cout<<"After incrementing : \n";
	g++;
	cout<<g.get_month_number()<<endl;
	cout<<g.get_month()<<endl;
		Month h;
		cout<<"Input operator overloading : \n";
		cin>>h;
		cout<<"Output operator overloading : \n";
		cout<<h;

	//cout<<.get_month_number()<<endl;
	//cout<<g.get_month()<<endl;
	
}

