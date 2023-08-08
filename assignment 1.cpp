#include<iostream>
#include<string>
using namespace std;

struct Members {
	string name;
	int ID=0;
	int age=0;
	int semester=0;
	double cgpa=0;
	char grade=NULL;

};
int addNewRecord(Members[], int,int);
int findRecord(Members[], int,int);
int modifyRecord(Members[], int,int);
void deleteRecord(Members[], string,int);
void SortRecord(Members[],int);
void displayRecord(Members[],int);
int main() {
	int num;
	int SIZE = 0;
	Members* arr;
	cout << "Enter the number of students you want to enter data of : ";
	cin >> SIZE;
	num = SIZE + 5;
	arr = new Members[num] ;


	
	//STRUCTURE VARIABLE DECLARATION
	// Members input 
	cout << "\t\t\t*****INPUT*****\n\n";
	int i,ans;
	for (i = 0; i < SIZE; i++) {
		//NAME INPUT	
		cout << "Enter name of student " << i + 1 << " : ";
		cin.ignore();
		getline(cin, arr[i].name);
		//ID INPUT
		cout << "Enter Serial no of student " << i + 1 << " : ";
		cin >> arr[i].ID;
		int j;
		bool b = false;
		for( j = 0; j < i; j++) {
			if (arr[i].ID == arr[j].ID)
			{
				b = true;
			}
		}
		while (b == true) {
			cout << "Enter a valid and unique ID\nEnter again : ";
			cin >> arr[i].ID;
			for (j = 0; j < i; j++) {
					if (arr[i].ID == arr[j].ID)
					{
						b = true;
					}
				}
		}
		//AGE INPUT	
		cout << "Enter age of student " << i + 1 << " : ";
		cin >> arr[i].age;
		while (arr[i].age < 0) {
			cout << "Age cannot be negative\nEnter again : ";
			cin >> arr[i].age;
		}
		//SEMESTER INPUT
		cout << "Enter semester of student " << i + 1 << " : ";
		cin >> arr[i].semester;
		while (arr[i].semester<1||arr[i].semester>8)
		{
			cout << "Enter valid semester\nEnter again : ";
			cin >> arr[i].semester;
		}
		//CGPA INPUT
		cout << "Enter cgpa of student " << i + 1 << " : ";
		cin >> arr[i].cgpa;
		while (arr[i].cgpa < 0.0 || arr[i].cgpa>4.0)
		{
			cout << "Enter valid cgpa\nEnter again : ";
			cin >> arr[i].cgpa;
		}
		//GRADE INPUT
		cout << "Enter grade of student " << i + 1 << " : ";
		cin >> arr[i].grade;
	}
	do{
	//MENU INPUT
	cout << "\t\t\t*****MENU***** \n\n";
	char input;
	cout << "To add a new Record - Enter A \nTo Find/Search a Record - Enter F \nTo modify a Record - Enter M \nTo delete a Record - Enter D(upper case) \nTo Sort the Records - Enter S \nTo display a Record - Enter d(Lower case) \nTo exit the program - Enter E   \nPress the button you want to do the operation of : ";
	cin >> input;
	//MENU VALIDATION
	while (input != 'A' && input != 'a' && input != 'F' && input != 'f' && input != 'M' && input != 'm' && input != 'D' && input != 'd' && input != 'S' && input != 's' && input != 'E' && input != 'e') {
		cout << "Input is not valid make sure to press character from below \n";
		cout << "To add a new Record - Enter A \nTo Find/Search a Record - Enter F \nTo modify a Record - Enter M \nTo delete a Record - Enter D(upper case) \nTo Sort the Records - Enter S \nTo display a Record - Enter d(Lower case) \nTo exit the program - Enter E   \nPress the button you want to do the operation of : ";
		cin >> input;
		}

	switch (input)
	{
	case 'A':
	case 'a':
	{
		cout << "\t\t\t*****ADD RECORD***** \n\n";
		int index;
		cout << "At which index you want to add new record : ";
		cin >> index;
		int n = addNewRecord(arr, index,SIZE);
		cin.ignore();
		cout << "Now enter data \nEnter name of student " << n << " : ";
		getline(cin, arr[n-1].name);
		cout << "Enter age of student " << n << " : ";
		cin >> arr[n - 1].age;
		cout << "Enter Serial no of student " << n << " : ";
		cin >> arr[n - 1].ID;
		cout << "Enter semester of student " << n << " : ";
		cin >> arr[n - 1].semester;
		cout << "Enter cgpa of student " << n << " : ";
		cin >> arr[n - 1].cgpa;
		cout << "Enter grade of student " << n << " : ";
		cin >> arr[n - 1].grade;
		cin.ignore();
		int i;
		for (i = 0; i < num; i++)
		{

			cout << "Name of student " << i + 1 << " is : " << arr[i].name << endl;
			cout << "Serial no of student " << i + 1 << " is : " << arr[i].ID << endl;
			cout << "Age of student " << i + 1 << " is : " << arr[i].age << endl;
			cout << "Semester of student " << i + 1 << " is : " << arr[i].semester << endl;
			cout << "Cgpa of student " << i + 1 << " is : " << arr[i].cgpa << endl;
			cout << "Grade of student " << i + 1 << " is : " << arr[i].grade << endl;
		}
		break;
	}
	case 'F':
	case 'f':
	{
		cout << "\t\t\t*****SEARCH***** \n\n";
		int IDsearch;
		cout << "Enter the Serial no you want to search for : ";
		cin >> IDsearch;
		int x = findRecord(arr, IDsearch,SIZE);
		if (x == -1)
		{
			cout << "Student with the Serial no : " << IDsearch << " does not exist\n";

		}
		else {

			cout << "Name of student" << x + 1 << " is : " << arr[x].name << endl;
			cout << "Serial no of student  " << x + 1 << " is : " << arr[x].ID << endl;
			cout << "Age of student  " << x + 1 << " is : " << arr[x].age << endl;
			cout << "Semester of student " << x + 1 << " is : " << arr[x].semester << endl;
			cout << "Cgpa of student  " << x + 1 << " is : " << arr[x].cgpa << endl;
			cout << "Grade of student  " << x + 1 << " is : " << arr[x].grade << endl;
		}
		break;
	}
	case 'M':
	case 'm':
	{
		cout << "\t\t\t*****MODIFY***** \n\n";
		int IDmodify;
		cout << "Enter the Serial no you want to modify for : ";
		cin >> IDmodify;
		int x = modifyRecord(arr, IDmodify,SIZE);
		if (x == -1) {
			cout << "Could not find the record \n";
		}
		else {
			cin.ignore();
			cout << "Change name of student  " << x + 1 << " : ";
			getline(cin, arr[x].name);
			cout << "Change serial no of student " << x + 1 << " : ";
			cin >> arr[x].ID;
			cout << "Change age of student " << x + 1 << " : ";
			cin >> arr[x].age;
			cout << "Change semester of student " << x + 1 << " : ";
			cin >> arr[x].semester;
			cout << "Change cgpa of student " << x + 1 << " : ";
			cin >> arr[x].cgpa;
			cout << "Change grade of student " << x + 1 << " : ";
			cin >> arr[x].grade;
			displayRecord(arr,SIZE);
		}
		break;
	}
	case 'D':
	{
		cout << "\t\t\t*****DELETE***** \n\n";
		string IDdelete;
		
		cout << "Enter the name of the student you want to delete the data of : ";
		cin.ignore();
		getline(cin, IDdelete);
		deleteRecord(arr, IDdelete,SIZE);
			displayRecord(arr,SIZE);
		break;
	}
	case 'S':
	case 's':
	{
		cout << "\t\t\t*****SORT-BY-NAME***** \n\n";
		SortRecord(arr,SIZE);
		displayRecord(arr,SIZE);
		break;
	}
	case 'd':
	{
		cout << "\t\t\t*****OUTPUT***** \n\n";
		displayRecord(arr,SIZE);
		break;
	}
	case 'E':
	case 'e':
	{
		cout << "\t\t\t*****EXIT***** \n\n";
		exit(0);
	}

	default:
		cout << "Input was invalid\n";
		break;
	}
	cout << "Do you want to perform another operation press Y/y to perform an operation---\nOr press N/n to quit \nEnter your choice : ";
	cin >> ans;
	while (ans!='Y'&&ans!='y'&&ans!='n'&&ans!='N')
	{
		cout << "Enter a valid choice\nEnter again : ";
		cin >> ans;
	}
	}while (ans == 'Y' || ans == 'y');

}
int addNewRecord(Members s[], int n,int SIZE)
{
	int j;
	for (j = SIZE; j > n; j--) {
		s[j] = s[j - 1];
	}
	return (n);

}
int modifyRecord(Members s[], int n, int SIZE) {
	int i;
	for (i = 0; i < SIZE; i++) {
		if (s[i].ID == n) {
			return i;

		}
	}
	if (i == SIZE)
	{
		return -1;
	}
	else return i;
}
void deleteRecord(Members s[], string n, int SIZE) {
	int i,j=0;
	bool b=false;
	for ( i = 0; i < SIZE; i++)
	{
		if (s[i].name == n) {
			j = i;
			b = true;
		}

	}
	if (i==SIZE&&b==false)
	{
		cout << "Could not find the student : ";
		exit(0);
	}
		for (i = j; i < SIZE - 1; i++) {
			s[i] = s[i + 1];
		}
		SIZE--;
}

//	SIZE = SIZE - 1;
void displayRecord(Members s[], int SIZE) {
	cout << "\t\t\t*****OUTPUT*****\n\n";
	int i;
	for (i = 0; i < SIZE; i++)
	{

		cout << "Name of student " << i + 1 << " is : " << s[i].name << endl;
		cout << "Serial no of student " << i + 1 << " is : " << s[i].ID << endl;
		cout << "Age of student " << i + 1 << " is : " << s[i].age << endl;
		cout << "Semester of student " << i + 1 << " is : " << s[i].semester << endl;
		cout << "Cgpa of student " << i + 1 << " is : " << s[i].cgpa << endl;
		cout << "Grade of student " << i + 1 << " is : " << s[i].grade << endl;
	}
}
int findRecord(Members s[], int n, int SIZE) {
	int i;
	for (i = 0; i < SIZE; i++)
	{
		if (s[i].ID == n) {
			return i;

		}

	}
	if (i == SIZE)
	{
		return -1;
		cout << "Serial no does not exist in record\n";
	}
	else return i;
}
void SortRecord(Members s[], int SIZE) {
	int i, j;
	Members temp;
	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE - 1; j++)
		{
			if (s[j].name > s[j + 1].name) {
				temp = s[j];
				s[j] = s[j + 1];
				s[j + 1] = temp;
			}
		}
	}
}
