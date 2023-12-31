// C++ program to compare two Strings
// using Operator Overloading

#include <cstring>
#include <iostream>
#include <string.h>

using namespace std;

// Class to implement operator overloading function for concatenating the strings
class CompareString {

public:
	// Classes object of string
	char str[25];

	// Parameterized Constructor
	CompareString(char str1[])
	{
		// Initialize the string to class object
		strcpy(this->str, str1);
	}

	
	int operator==(CompareString s2)
	{
		if (strcmp(str, s2.str) == 0)
			return 1;
		else
			return 0;
	}

	
	int operator<=(CompareString s3)
	{
		if (strlen(str) <= strlen(s3.str))
			return 1;
		else
			return 0;
	}

	int operator>=(CompareString s3)
	{
		if (strlen(str) >= strlen(s3.str))
			return 1;
		else
			return 0;
	}
};

void compare(CompareString s1, CompareString s2)
{

	if (s1 == s2)
		cout << s1.str << " is equal to " << s2.str << endl;
	else {
		cout << s1.str << " is not equal to " << s2.str << endl;
	if (s1 >= s2)
		cout << s1.str << " is greater than " << s2.str << endl;
	else
		cout << s2.str << " is greater than " << s1.str << endl;
	}
}

// Testcase1
void testcase1()
{
	// Declaring two strings
	char str1[] = "ahmad";
	char str2[] = "hassan";

	// Declaring and initializing the class
	// with above two strings
	CompareString s1(str1);
	CompareString s2(str2);

	cout << "Comparing \"" << s1.str << "\" and \""
		<< s2.str << "\"" << endl;

	compare(s1, s2);
}

// Testcase2
void testcase2()
{
	// Declaring two strings
	char str1[] = "Islamabad";
	char str2[] = "Islamabad";

	// Declaring and initializing the class
	// with above two strings
	CompareString s1(str1);
	CompareString s2(str2);

	cout << "\n\nComparing \"" << s1.str << "\" and \""
		<< s2.str << "\"" << endl;

	compare(s1, s2);
}

// Driver code
int main()
{
	testcase1();
	testcase2();

	return 0;
}

