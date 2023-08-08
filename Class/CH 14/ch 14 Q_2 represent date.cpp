#include<iostream>
#include<string>
#include"DayOfYear.h"
using namespace std;

int main(){
	int day,num,date,SIZE;
	cout<<"Enter a day of year : ";
	cin>>day;
	while(day<1||day>365){
		cout<<"Enter a valid day :\nEnter again : ";
		cin>>day;
	}
	DayOfYear d(day);
	string mnth;
//	DayOfYear::eng_date="d";
	num=365-day;
	if(num>=0&&num<31){
		num=31-num;
		
		mnth="December ";
		SIZE=31;
	}
	else if(num>=31&&num<61){
		num=61-num;
		mnth="November ";
		SIZE=30;
	}
	else if(num>=61&&num<92){
		num=92-num;
		mnth="October ";
		SIZE=31;
	}
	else if(num>=92&&num<122){
		num=122-num;
		mnth="September ";
		SIZE=30;
	}
	else if(num>=122&&num<153){
		num=153-num;
		mnth="August ";
		SIZE=31;
	}
	else if(num>=153&&num<184){
		num=184-num;
		mnth="July ";
		SIZE=31;
	}
	else if(num>=184&&num<214){
		num=214-num;
		mnth="June ";
		SIZE=30;
	}
	else if(num>=214&&num<245){
		num=245-num;
		mnth="May ";
		SIZE=31;
	}
	else if(num>=245&&num<275){
		num=275-num;
		mnth="April ";
		SIZE=30;
	}
	else if(num>=275&&num<306){
		num=306-num;
		mnth="March ";
		SIZE=31;
	}
	else if(num>=306&&num<334){
		num=334-num;
		mnth="February ";
		SIZE=28;
	}
	else {
		num=365-num;
		mnth="January ";
		SIZE=31;
	}
	//mnth+=itoa(num,str,10);
	d.print(mnth,num);
}
DayOfYear::DayOfYear(int dat){
	this->date=dat;
}
void DayOfYear::print(string dat,int num){
	this->date=num;
	eng_date=dat;
	cout<<"Date is : "<<this->date<<" and month is : "<<eng_date<<endl;
}
