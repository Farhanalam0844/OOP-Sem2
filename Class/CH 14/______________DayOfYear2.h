#ifndef DayOfYear2
#include<string>
using namespace std;
class DayOfYear{
	private:
		int date;
		int days_of_month;
		string eng_date;
		string months[12];
	public:
		DayOfYear(int date);
		DayOfYear(int date,string month);
		void print(string date,int dat);
		int getdate()const;
		string geteng_date()const;
		DayOfYear operator++();
		DayOfYear operator++(int );
		DayOfYear operator--();
		DayOfYear operator--(int );
};
#endif
