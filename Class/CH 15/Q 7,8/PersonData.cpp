#include<iostream>
#include"PersonData.h"
#include"PersonDataDef.cpp"
using namespace std;

class CustomerData:public PersonData{
	private:
		int customer_number;
		bool mailing_list;
	public:
		CustomerData();
		CustomerData(int num,bool b);
		void set_customer_number(int num);
		void set_mailing_list(bool l);
		int get_customer_list()const;
		bool get_mailing_list()const;
};
int main(){
	
}
CustomerData::CustomerData(){
	cout<<"Customer default constructor\n";
	this->customer_number=0;
	this->mailing_list=0;
}
CustomerData::CustomerData(int num,bool b){
	cout<<"Customer parametrized constructor\n";
	this->customer_number=num;
	this->mailing_list=b;
}
void CustomerData::set_customer_number(int num){
			this->customer_number=num;
		}
void CustomerData::set_mailing_list(bool l){
	this->mailing_list=l;			
		}
int CustomerData::get_customer_list()const{
		return this->customer_number;
		}
bool CustomerData::get_mailing_list()const{
		return this->mailing_list;
		}
