#include<iostream>
#include<string>
using namespace std;
struct structure {
	string name;
	int age=0;
};
struct address {
	int houseNo;
	int streetNo;
};
int main() {

// DYNAMICALLY CREATING A VARIABLE
	int *var = NULL;
	var = new int;
	cout << "Enter the value in varaible : ";
	cin >> *var;
	cout << "The value is : " << *var << endl;
//DYNAMICALLY CREATING AN ARRAY
	int* arr;
	int SIZE,i;
	cout << "Enter the number of elements you want to add in array : ";
	cin >> SIZE;
	arr = new int[SIZE];
	for (i = 0; i < SIZE; i++) {
		cout << "Enter value in variable : " << i + 1 << " : ";
		cin >> arr[i];
	}
	for (i = 0; i < SIZE; i++) {
		cout << "Value in variable : " << i + 1 << " is : "<<arr[i] << endl;
	}
//DYNAMICALLY CREATING A STRUCTURE VARIABLE
	address* a = NULL;
	a = new address;
	cout << "Enter the house no : ";
	cin >> a->houseNo;
	cout << "Enter the street no : ";
	cin >> a->houseNo;
	cout << "House no is : "<<a->houseNo<<endl;
	cout << "Street no is : "<<a->houseNo << endl;







//DYNAMINCALLY CREATING A STRUCTURE Array
	int n;
	cout << "How many members you want in structure : ";
	cin >> n;
	structure* s = NULL;
	s = new structure[n];
	for (i = 0; i < n; i++) {
		cin.ignore();
		cout << "Enter name of member " << i + 1 << " : ";
		getline(cin,s[i].name);
		cout << "Enter age of member " << i + 1 << " : ";
		cin >> s[i].age;
	}for (i = 0; i < n; i++) {
		cout << "Name of member " << i + 1 << " is : "<<s[i].name<<endl;
		cout << "Age of member " << i + 1 << " is : "<<s[i].age << endl;
	}

}
