/* 
+ Addition operator. When two NumDays objects are added together, the overloaded + operator should return the sum of the two objects’ hours members.
- Subtraction operator. When one NumDays object is subtracted from another,
the overloaded - operator should return the difference of the two objects’ hours
members.
++ Prefix and postfix increment operators. These operators should increment the
number of hours stored in the object. When incremented, the number of days
should be automatically recalculated.
-- Prefix and postfix decrement operators. These operators should decrement the
number of hours stored in the object. When decremented, the number of days
should be automatically recalculated.*/
#include<iostream>
#include<string>
using namespace std;

class Numdays{
	private:
	int hours;
	double days;
	public:
		Numdays(int hours);
	//	void set_hours(int hours);
		void set_days();
		int get_hours();
		double get_days();
		void operator++();
		void operator++(int);
		void operator--();
		void operator--(int);
};

int main(){
	int hours;
	cout<<"Enter number of hours : ";
	cin>>hours;
	Numdays d1(hours);
	d1.set_days();
	cout<<"Before any operation : "<<d1.get_hours()<<"\t"<<d1.get_days()<<endl;
	++d1;
	d1.set_days();
	cout<<"After pre operation : "<<d1.get_hours()<<"\t"<<d1.get_days()<<endl;
	d1++;
	d1.set_days();
	cout<<"After pst operation : "<<d1.get_hours()<<"\t"<<d1.get_days()<<endl;
	--d1;
	d1.set_days();
	cout<<"After pre dec operation : "<<d1.get_hours()<<"\t"<<d1.get_days()<<endl;
	d1--;	
	d1.set_days();
	cout<<"After pst dec operation : "<<d1.get_hours()<<"\t"<<d1.get_days()<<endl;
}
Numdays::Numdays(int hours){
	this->hours=hours;
}
void Numdays::set_days(){
	days=hours/8.0;
}
void Numdays::operator++(){
	++hours;
}
int Numdays::get_hours(){
	return hours;
}
double Numdays::get_days(){
	return days;
}
void Numdays::operator++(int){
	hours++;
}
void Numdays::operator--(){
	--hours;
}void Numdays::operator--(int){
	hours--;
}
