#ifndef PERSONDATADEF_CPP
#define PERSONDATADEF_CPP
#include"PersonData.h"
PersonData::PersonData(){
	//cout<<"Person data default constructor \n";
	this->firstName=' ';
	lastName=' ';
	address=' ';
	city=' ';
	state=' ';
	zip=0;
 	phone=0;
}
 PersonData::PersonData(string f_name,string l_name,string address,string city,string state,int zip,long num)
 {
 	//cout<<"Parametrized constructor \n";
 	this->firstName=f_name;
 	this->lastName=l_name;
 	this->address=address;
 	this->city=city;
 	this->state=state;
 	this->zip=zip;
 	this->phone=num;
 }
string PersonData::get_lastName()const{
return this->lastName;
}
string PersonData::get_firstName()const{
	return this->firstName;
}
string PersonData::get_address()const{
	return this->address;
}
string PersonData::get_city()const{
	return this->city;
}
string PersonData::get_state()const{
	return this->state;
}
int PersonData::get_zip()const{
	return this->zip;
}
long PersonData::get_phone()const
{
	return this->phone;
}
void PersonData::set_lastName(string name){
	this->lastName=name;
}
void PersonData::set_firstName(string name)
{
	this->firstName=name;
}
void PersonData::set_address(string address){
	this->address=address;
}
void PersonData::set_city(string city){
	this->city=city;
}
void PersonData::set_state(string city){
	this->state=state;
}
int PersonData::set_zip(int zip){
	this->zip=zip;
}
void PersonData::set_phone(long phone){
	this->phone=phone;
}
#endif
