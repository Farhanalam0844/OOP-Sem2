#include<iostream>
#include<string>
using namespace std;

class Employee{
	protected:
		string name;
		int number;
		string hiring_date;
	public:
		Employee();
		Employee(string name,int number,string date);
		void set_name(string name);
		void set_number(int number);
		void set_hiring_date(string date);
		string get_name()const;
		int    get_number()const;
		string get_hiring_date()const;
};
class ProductionWorker : public Employee{
	protected:
		int shift;
		double hourly_payrate;
	public:
		ProductionWorker();
		ProductionWorker(int shift,double pay);
		ProductionWorker(string name,int number,string date,int shift,double pay);
};

int main(){
//USING BASE CLASS AND DERIVED CLASS CONSTRUCTORS
string name,date;
int number,shift;
double pay;
	cout<<"Enter name of Employee : ";
	getline(cin,name);

	cout<<"Enter number of Employee : ";
	cin>>number;
		cin.ignore();
	cout<<"Enter joining date : ";
	getline(cin,date);
	cout<<"Enter shift : ";
	cin>>shift;
	try{
	
	cout<<"Enter Hourly pay : ";
	cin>>pay;
	if(pay<0)
	throw pay;
	ProductionWorker p(name,number,date,shift,pay);
		cout<<p.get_name()<<"\t"<<p.get_number()<<"\t"<<p.get_hiring_date()<<endl;
	}
	catch(double n){
		cout<<"pay can't be negative : "<<n<<endl;
	}
}
Employee::Employee(string name,int number,string date){
	this->name=name;
	this->number=number;
	this->hiring_date=date;
}
ProductionWorker::ProductionWorker(string name,int number,string date,int shift,double pay) : Employee(name,number,date){
		this->shift=shift;
		this->hourly_payrate=pay;
		
}
Employee::Employee(){
	cout<<"Entering Employee class : ";
	this->name=' ';
	this->number=0;
	this->hiring_date=' ';
}
void Employee::set_name(string name){
	this->name=name;
}		
void Employee::set_number(int number){
	this->number=number;
}
void Employee::set_hiring_date(string date){
	this->hiring_date=date;
}
string Employee::get_name()const{
	return this->name;
}
int   Employee::get_number()const{
	return this->number;
		}
string Employee::get_hiring_date()const{
	return this->hiring_date;
}
