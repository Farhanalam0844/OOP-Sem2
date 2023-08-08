#ifndef PERSONDATA_H
#define PERSONDATA_H
#include<string>
using namespace std;
class PersonData{
	protected:
	string lastName;
	string firstName;
	string address;
	string city;
	string state;
	int zip;
 	long phone;
 	public:
 		PersonData();
 		PersonData(string f_name,string l_name,string address,string city,string state,int zip,long num);
 		string get_lastName()const;
		string get_firstName()const;
		string get_address()const;
		string get_city()const;
		string get_state()const;
		int get_zip()const;
 		long get_phone()const;
		void set_lastName(string name);
		void set_firstName(string name);
		void set_address(string address);
		void set_city(string city);
		void set_state(string city);
		int set_zip(int zip);
 		void set_phone(long phone);
 		
};
#endif
