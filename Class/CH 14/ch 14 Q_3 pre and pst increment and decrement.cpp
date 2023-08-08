#include<iostream>
#include<string>
#include<bits/stdc++.h>
#include"DayOfYear2.h"
using namespace std;

int main(){
	int day,num,date,SIZE;
	string month;
	cout<<"Enter a day of year     : ";
	cin>>day;
	cout<<"Enter the month of year : ";
	cin>>month;
	 transform(month.begin(), month.end(), month.begin(), ::tolower);
	DayOfYear d(day,month);
//BEFORE PRE INCREMENT
	d.print(month,day);
//AFTER PRE INCREMENT
	DayOfYear e=++d;
//	d.print(month,day);
cout<<e.getdate()<<e.geteng_date();
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

}
DayOfYear::DayOfYear(int dat,string month){
	if(month=="january"){
		this->days_of_month=31;
		if(dat<0||dat>days_of_month){
			cout<<"invalid date\n";
			exit(0);
		}
		date=dat;
		eng_date=month;
	}
	else if(month=="february"){
		days_of_month=28;
		if(dat<0||dat>days_of_month){
			cout<<"invalid date\n";
			exit(0);
		}
		date=dat;
		eng_date=month;
	}
	else if(month=="march"){
		days_of_month=31;
		if(dat<0||dat>days_of_month){
			cout<<"invalid date\n";
			exit(0);
		}
		date=dat;
		eng_date=month;
	}
	else if(month=="april"){
		days_of_month=30;
		if(dat<0||dat>days_of_month){
			cout<<"invalid date\n";
			exit(0);
		}
		date=dat;
		eng_date=month;
	}
	else if(month=="may"){
		days_of_month=31;
		if(dat<0||dat>days_of_month){
			cout<<"invalid date\n";
			exit(0);
		}
		date=dat;
		eng_date=month;
	}
	else if(month=="june")
		{
			days_of_month=30;
		if(dat<0||dat>	days_of_month){
			cout<<"invalid date\n";
			exit(0);
		}
		date=dat;
		eng_date=month;
	}
	else if(month=="july"){
			days_of_month=31;
		if(dat<0||dat>days_of_month){
			cout<<"invalid date\n";
			exit(0);
		}
		date=dat;
		eng_date=month;
	}
	else if(month=="august"){
			days_of_month=31;
		if(dat<0||dat>days_of_month){
			cout<<"invalid date\n";
			exit(0);
		}
		date=dat;
		eng_date=month;
	}
	else if(month=="september"){
			days_of_month=30;
		if(dat<0||dat>days_of_month){
			cout<<"invalid date\n";
			exit(0);
		}
		date=dat;
		eng_date=month;
	}
	else if(month=="october"){
			days_of_month=31;
		if(dat<0||dat>days_of_month){
			cout<<"invalid date\n";
			exit(0);
		}
		date=dat;
		eng_date=month;
	}
	else if(month=="november"){
		days_of_month=30;
		if(dat<0||dat>days_of_month){
			cout<<"invalid date\n";
			exit(0);
		}
		date=dat;
		eng_date=month;
	}
	else if(month=="december"){
		days_of_month=31;
		if(dat<0||dat>days_of_month){
			cout<<"invalid date\n";
			exit(0);
		}
		date=dat;
		eng_date=month;
	}
	else {
			cout<<"invalid date\n";
			exit(0);
		}
	months[0]="january";
	months[1]="febraury";
	months[2]="march";
	months[3]="april";
	months[4]="may";
	months[5]="june";
	months[6]="july";
	months[7]="august";
	months[8]="september";
	months[9]="october";
	months[10]="november";
	months[11]="december";
	
	

}
void DayOfYear::print(string dat,int num){
//	eng_date=dat;
	cout<<"Date is : "<<this->date<<" and month is : "<<eng_date<<endl;
}
DayOfYear DayOfYear::operator++(){
	if(days_of_month==date){
		int i;
		for(i=0;i<12;i++){
			if(eng_date==months[i]&&eng_date!=months[11]){
				eng_date=months[i+1];
				date=1;
				return *this;
			}
			else if(eng_date==months[11]){
				eng_date=months[0];
				date=1;
				return *this;
			}
		}
		
	}
}
int DayOfYear::getdate()const{
		return date;
	}
string DayOfYear::geteng_date()const{
		return eng_date;
		}
