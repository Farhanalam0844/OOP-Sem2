#include <iostream>

using namespace std;

class Square
{
	friend class Rectangle;      // declaring Rectangle as friend class
	int side;
	public:
		Square ( int s )
		{
			side = s;
		}
};

class Rectangle
{
	int length;
	int breadth;
	public:
	int getArea()
	{
		return length * breadth;
	}
	void shape( Square a )
	{
		length = a.side;
		breadth = a.side;
	}
};

int main()
{
	Square square(5);
	Rectangle rectangle;
	rectangle.shape(square);
	cout << "area="<<rectangle.getArea() << endl;
	return 0;
}
