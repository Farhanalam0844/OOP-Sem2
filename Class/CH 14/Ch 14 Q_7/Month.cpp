#include<iostream>
#include<string>
#include "Month.h"
#ifndef Month_cpp
#define Month_cpp

using namespace std;
Month::Month(){
	month="january";
	month_number=1;
}
Month::Month(string m){
		month=m;
	if(month=="january") month_number=1;
	else if(month=="febraury") month_number=2;
	else if(month=="march") month_number=3;
	else if(month=="april") month_number=4;
	else if(month=="may") month_number=5;
	else if(month=="june") month_number=6;
	else if(month=="july") month_number=7;
	else if(month=="august") month_number=8;
	else if(month=="september") month_number=9;
	else if(month=="october") month_number=10;
	else if(month=="november") month_number=11;
	else if(month=="december") month_number=12;			
		}
Month::Month(int number){
			month_number=number;
	if(this->month_number==1) this->month="january";
	else if(this->month_number==2) this->month="febraury"; 
	else if(this->month_number==3) this->month="march";
	else if(this->month_number==4) this->month="april" ;
	else if(this->month_number==5) this->month="may";
	else if( this->month_number==6) this->month="june";
	else if(this->month_number==7) this->month="july";
	else if(this->month_number==8) this->month="august";
	else if(this->month_number==9) this->month="september";
	else if(this->month_number==10) this->month="october";
	else if(this->month_number==11) this->month="november";
	else if( this->month_number==12)this->month="december";			
			
		}
string Month::get_month() const{
	return month;
}
int Month::get_month_number() const{
	return month_number;
}
void Month::operator++(int){
	if(month_number==12){
		month_number=1;
	}
	else
	{
		month_number++;}
	if(month_number==1) month="january";
	else if(month_number==2) month="febraury"; 
	else if(month_number==3) month="march";
	else if(month_number==4) month="april" ;
	else if(month_number==5) month="may";
	else if( month_number==6)month="june";
	else if(month_number==7) month="july";
	else if(month_number==8) month="august";
	else if(month_number==9) month="september";
	else if(month_number==10) month="october";
	else if(month_number==11) month="november";
	else if( month_number==12)month="december";			
			
		}
void Month::operator--(int){
if(this->month_number==1){
	this->month_number=12;
}	
else {
	this->month_number--;	}
		if(this->month_number==1)   this->month="january";
	else if(this->month_number==2)  this->month="febraury"; 
	else if(this->month_number==3)  this->month="march";
	else if(this->month_number==4)  this->month="april" ;
	else if(this->month_number==5)  this->month="may";
	else if( this->month_number==6) this->month="june";
	else if(this->month_number==7)  this->month="july";
	else if(this->month_number==8)  this->month="august";
	else if(this->month_number==9)  this->month="september";
	else if(this->month_number==10) this->month="october";
	else if(this->month_number==11) this->month="november";
	else if(this->month_number==12) this->month="december";			

}
		

ostream & operator<<(ostream &x,const Month &m){
	x<<"Month is 	   : "<<m.get_month()<<endl;
	x<<"Month number is : "<<m.get_month_number()<<endl;
	return x;
}
istream & operator>>(istream &x, Month &m){
			cout<<"Enter Month : ";
			x>>m.month;
			cout<<"Enter month number : ";
			x>>m.month_number;
	return x;			
		}
#endif
