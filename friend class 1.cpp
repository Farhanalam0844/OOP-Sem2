// Example:

#include<iostream>
using namespace std;

class A
{
	int x;
		public:
			
	A()
	{
		x=10;
	}
	friend class B; //friend class
};

class B
{
	public:
		void display(A &t)
		{
			cout<<endl<<"The value of x="<<t.x;
		}
};

main()
{
	A a;
	B b;
	b.display(a);
	return 0;
}

