#ifndef Month
using namespace std;
class Month{
	private:
		string month;
		int month_number;
	public:
		Month();
		Month(string m);
		Month(int number);
		void operator++();
		void operator--();
		void operator<<(Month& n);
		void operator>>(Month& n);
};
#endif
