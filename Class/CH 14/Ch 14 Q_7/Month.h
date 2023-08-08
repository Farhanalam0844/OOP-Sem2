#ifndef Month_h
#define Month_h
#include<string>
using namespace std;
class Month{
	private:
		string month;
		int month_number;
	public:
		Month();
		Month(string m);
		Month(int number);
		string get_month()const;
		int get_month_number()const;
		void operator++(int);
		void operator--(int);
	friend	ostream & operator<<(ostream &c,const Month &m);
	friend	istream & operator>>(istream &c,Month &m);

};
	
#endif
