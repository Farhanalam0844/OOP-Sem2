
/*
The copy constructor is a constructor which creates an object by initializing it 
with an object of the same class, which has been created previously. The copy 
constructor is used to -
-Initialize one object from another of the same type.
-Copy an object to pass it as an argument to a function.
-Copy an object to return it from a function.
If a copy constructor is not defined in a class, the compiler itself defines one.
If the class has pointer variables and has some dynamic memory allocations, then 
it must have a copy constructor. The most common form of copy constructor 
is shown here -

classname (const classname &obj) {
   // body of constructor
}
Here, obj is a reference to an object that is being used to initialize another object.
*/
#include<iostream>
using namespace std;

class Point
{
private:
	int x, y;
public:
	Point(int x1, int y1) 
	{ 	x = x1; 
		y = y1; 
	}

	// Copy constructor
	Point(const Point &p1) 
	{	x = p1.x; 
		y = p1.y; 
	}

	int getX()		 { return x; }
	int getY()		 { return y; }
};

int main()
{
	Point p1(10, 15); // Normal constructor is called here
	Point p2 = p1; // Copy constructor is called here

	// Let us access values assigned by constructors
	cout << "p1.x = " << p1.getX() << ", p1.y = " << p1.getY();
	cout << "\np2.x = " << p2.getX() << ", p2.y = " << p2.getY();

	return 0;
}

