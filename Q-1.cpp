#include<iostream>
#include<string>
using namespace std;
class Date{
	private:
	int month;
	int date;
	int year;
	public:
	int get_mn(int mon);
	int get_dt(int dat);
	int get_yr(int Year);
	void format1();
	void format2();
	void format3();
		
};
	string s;
int main(){
	Date obj;
	int dat,mon,Year;
//	obj.format1();
	cout<<"Enter the date : ";
	cin>>dat;
	while(dat<1||dat>30){
		cout<<"Enter a valid date\nEnter again : ";
		cin>>dat;
	}
	cout<<"Enter the Month : ";
	cin>>mon;
	while(mon<1||mon>12){
		cout<<"Enter a valid month\nEnter again : ";
		cin>>mon;
	}
	cout<<"Enter the year : ";
	cin>>Year;
	obj.get_dt(dat);
	obj.get_mn(mon);
	obj.get_yr(Year);
	obj.format1();
	obj.format2();
	obj.format3();
}
int Date::get_dt(int dat){
	date=dat;
}
int Date::get_mn(int mon){
	month=mon;
}
int Date::get_yr(int Year){
	year=Year;
}

void Date:: format1(){

	cout<<month<<"/"<<date<<"/"<<year<<endl;
}
void Date:: format2(){
	switch(month)
	{
	
		case 1 :{
			s="January";
			break;
		}
		
		case 2:{
			s="February";
			break;
		}
		
		case 3:{
			s="March";
			break;
		}
		
		case 4:{
			s="April";
			break;
		}
		
		case 5:{
			s="May";
			break;
		}
		
		case 6:{
			s="June";
			break;
		}
		
		case 7:{
			s="July";
			break;
		}
		
		case 8:{
			s="August";
			break;
		}
		
		case 9:{
			s="September";
			break;
		}
		
		case 10:{
			s="October";
			break;
		}
		
		case 11:{
			s="November";
			break;
		}
		
		default:{
			s="December";
			break;
		}
}
	
	cout<<s<<"/"<<date<<"/"<<year<<endl;
}
void Date:: format3(){
	cout<<date<<"/"<<s<<"/"<<year<<endl;
}
