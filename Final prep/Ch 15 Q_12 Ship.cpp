#include<iostream>
#include<string>
using namespace std;
class Ship{
	protected:
		string name;
		string year;
	public:
		Ship();
		Ship(string,string);
		virtual void print();
};
class CruiseShip:public Ship{
	protected:
		int passengers;
	public:
		CruiseShip();
		CruiseShip(string,string,int);
		virtual void print();
};
class CargoShip: public Ship{
	protected:
		int capacity;
	public:
		CargoShip();
		CargoShip(string,string,int);
		virtual void print();
};
int main(){
	Ship* ptr[3];
	string name,year;
	int capacity,passengers;
	cout<<"Enter name of Ship : ";
	cin>>name;
	cout<<"Enter the year it was built in : ";
	cin.ignore();
	getline(cin,year);
	cout<<"Enter passengers capacity : ";
	cin>>passengers;
	cout<<"Enter capacity : ";
	cin>>capacity;
	ptr[0]=new Ship(name,year);
	ptr[1]=new CruiseShip(name,year,passengers);
	ptr[2]=new CargoShip(name,year,capacity);	
	int i;
	for(i=0;i<3;i++){
		ptr[i]->print();
	}
}
Ship::Ship(){
	this->name=' ';
	this->year=' ';
}
Ship::Ship(string name,string year){
	this->name=name;
	this->year=year;
}
void Ship::print(){
	cout<<"Ship name is : "<<name<<"\nYear it was built is : "<<year<<endl;
}
CruiseShip::CruiseShip(){
	this->name=' ';
	this->passengers=0;
	this->year=' ';
}
CruiseShip::CruiseShip(string name,string year,int n): Ship(name,year)
{
	this->passengers=n;
}
void CruiseShip::print(){
cout<<"Name of Ship is : "<<this->name<<"\nIts passengers number are : "<<this->passengers<<endl;	
}
CargoShip::CargoShip(){
	this->name=' ';
	this->year=' ';
	this->capacity=0;
}
CargoShip::CargoShip(string nam,string yr,int n):Ship(nam,yr){
	this->capacity=n;
}
void CargoShip::print(){
	cout<<"Name of Ship is : "<<this->name<<"\ncapacity is : "<<this->capacity<<"\n";
}

