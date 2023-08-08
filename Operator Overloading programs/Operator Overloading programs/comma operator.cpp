// C++ program to illustrate the
// overloading for comma operator

#include <iostream>
using namespace std;

// The class that defines the
// coordinates of a point in space
class Coords3D {

private:
	double x, y, z;

public:
	// Default Constructor
	Coords3D() { x = y = z = 0; }

	// Parameterized Constructor
	Coords3D(double x, double y,
			double z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}

	// Function for updating the value
	// ofx, y, and z
	void Get(double& x, double& y,
			double& z)
	{
		x = this->x;
		y = this->y;
		z = this->z;
	}

	// Function to overloaded the
	// operator, (comma)
	Coords3D operator, (Coords3D obj)
	{
		Coords3D tmp;

		// Update the value of temp
		tmp.x = obj.x;
		tmp.y = obj.y;
		tmp.z = obj.z;

		// Return the value of temp
		return tmp;
	}
};

// Driver Code
int main()
{
	double x, y, z;

	// Instances of class Coords3D
	Coords3D c1(1, 3, 5);
	Coords3D c2(2, 4, 6);
	Coords3D c3;

	// Invoke the operator function
	// c3.operator, (c2) into c3
	// is saved c2
	c3 = (c1, c2);

	// Get the value of x, y, z
	c3.Get(x, y, z);

	// Print x, y, and z
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "z = " << z << endl;

	// Create another instance
	Coords3D c4(10, 15, 20);

	// c3 <= c4
	c3 = (c2, c1, c4);

	// Checking
	// x = 10, y = 15, z = 20
	c3.Get(x, y, z);

	cout << endl;

	// Print x, y, and z
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "z = " << z << endl;

	return 0;
}

