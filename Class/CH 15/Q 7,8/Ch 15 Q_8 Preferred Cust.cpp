#include<iostream>
#include"PersonData.h"
#include"PersonDataDef.cpp"
using namespace std;
	
class PreferredCustomer:public PersonData{
	protected:
		double purchasesAmount;
		double discountLevel;
	public:
		PreferredCustomer();
//		PreferredCustomer(double amount);
		PreferredCustomer(double amount,string fname,string lname,string add,string city,string state,int zip,long num);
		void display();
		void set_discount();
		double get_discount();
		
	};
int main(){
	string fname,lname,add,city,state;
	int zip;
	double amount;
	long number;
	cout<<"Enter first name of Prefered Customer : ";
	cin>>fname;
	cout<<"Enter last name of Prefered Customer  : ";
	cin>>lname;
	cin.ignore();
	cout<<"Enter address of Prefered Customer    : ";
	getline(cin,add);
	cout<<"Enter city of Prefered Customer       : ";
	cin>>city;
	cout<<"Enter state of Prefered Customer      : ";
	cin>>state;
	cout<<"Enter zip of Prefered Customer        : ";
	cin>>zip;
	cout<<"Enter phone no of Prefered Customer   : ";
	cin>>number;
	cout<<"Enter Purchased amount of Prefered Customer : ";
	cin>>amount;
	while(amount<0){
	cout<<"Enter Valud Purchased amount of Prefered Customer : ";
	cin>>amount;	
	}
		
PreferredCustomer p1(amount,fname,lname,add,city,state,zip,number);
	p1.display();

}
PreferredCustomer::PreferredCustomer(){
	this->discountLevel=0.0;
	this->purchasesAmount=0.0;
}
PreferredCustomer::PreferredCustomer(double amount,string fname,string lname,string add,string city,string state,int zip,long num){
	this->purchasesAmount=amount;
	this->firstName=fname;
	this->lastName=lname;
	this->address=add;
	this->city=city;
	this->state=state;
	this->zip=zip;
	this->phone=num;
	this->set_discount();
}
void PreferredCustomer::set_discount(){
	if(this->purchasesAmount>=2000){
		this->discountLevel=10;
	}
	else if(this->purchasesAmount>=1500){
		this->discountLevel=7;
	}
	else if(this->purchasesAmount>=1000){
		this->discountLevel=6;
	}
	else if(this->purchasesAmount>=500){
		this->discountLevel=5;
	}
	
}
void PreferredCustomer::display(){
	cout<<"First name is  : "<<this->firstName<<endl;
	cout<<"Second name is : "<<this->lastName<<endl;
	cout<<"Address is 	  : "<<this->address<<endl;
	cout<<"City is		  : "<<this->city<<endl;
	cout<<"State is       : "<<this->state<<endl;
	cout<<"Zip is         : "<<this->zip<<endl;
	cout<<"Phone no is    : "<<this->phone<<endl;
	cout<<"Purchas Amt is : "<<this->purchasesAmount<<endl;
	cout<<"Discount lvl is: "<<this->discountLevel<<"%"<<endl;
}
