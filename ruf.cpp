#include<iostream>
#include<string>
using namespace std;
const int num = 6;
 int Size = 5;
struct Members {
	string name=0;
	int ID=0;
	int age=0;
	int semester=0;
	double cgpa=0.0;
	char grade=0;

};
int addNewRecord(Members[], int);
int findRecord(Members[], int);
int modifyRecord(Members[], int);
void deleteRecord(Members[], string);
void SortRecord(Members[]);
void displayRecord(Members[]);
int main() {
	//STRUCTURE VARIABLE DECLARATION
	Members stdn[num];
	// Members input 
	cout << "\t\t\t*****INPUT*****\n\n";
	int i;
	for (i = 0; i < Size; i++) {
		//NAME INPUT	
		cout << "Enter name of student " << i + 1 << " : ";

		getline(cin, stdn[i].name);
		//ID INPUT
		cout << "Enter Serial no of student " << i + 1 << " : ";
		cin >> stdn[i].ID;
		//AGE INPUT	
		cout << "Enter age of student " << i + 1 << " : ";
		cin >> stdn[i].age;
		//SEMESTER INPUT
		cout << "Enter semester of student " << i + 1 << " : ";
		cin >> stdn[i].semester;
		//CGPA INPUT
		cout << "Enter cgpa of student " << i + 1 << " : ";
		cin >> stdn[i].cgpa;
		//GRADE INPUT
		cout << "Enter grade of student " << i + 1 << " : ";
		cin >> stdn[i].grade;
		cin.ignore();
	}
	//MENU INPUT
	cout << "\t\t\t*****MENU***** \n\n";
	char input;
	cout << "To add a new Record - Enter A \nTo Find/Search a Record - Enter F \nTo modify a Record - Enter M \nTo delete a Record - Enter D(upper case) \nTo Sort the Records - Enter S \nTo display a Record - Enter d(Lower case) \nTo exit the program - Enter E   \nPress the button you want to do the operation of : ";
	cin >> input;
	//MENU VALIDATION
/*	while (input != 'A' && input != 'a' && input != 'F' && input != 'f' && input != 'M' && input != 'm' && input != 'D' && input != 'd' && input != 'S' && input != 's' && input != 'E' && input != 'e') {
		cout << "Input is not valid make sure to press character from below \n";
		cout << "To add a new Record - Enter A \nTo Find/Search a Record - Enter F \nTo modify a Record - Enter M \nTo delete a Record - Enter D(upper case) \nTo Sort the Records - Enter S \nTo display a Record - Enter d(Lower case) \nTo exit the program - Enter E   \nPress the button you want to do the operation of : ";
		cin >> input;
		}*/

	switch (input)
	{
	case 'A':
	case 'a':
	{
		cout << "\t\t\t*****ADD RECORD***** \n\n";
		int index;
		cout << "At which index you want to add new record : ";
		cin >> index;
		int n = addNewRecord(stdn, index);
		cin.ignore();
		cout << "Now enter data \nEnter name of student " << n << " : ";
		getline(cin, stdn[n-1].name);
		cout << "Enter age of student " << n << " : ";
		cin >> stdn[n - 1].age;
		cout << "Enter Serial no of student " << n << " : ";
		cin >> stdn[n - 1].ID;
		cout << "Enter semester of student " << n << " : ";
		cin >> stdn[n - 1].semester;
		cout << "Enter cgpa of student " << n << " : ";
		cin >> stdn[n - 1].cgpa;
		cout << "Enter grade of student " << n << " : ";
		cin >> stdn[n - 1].grade;
		cin.ignore();
		int i;
		for (i = 0; i < num; i++)
		{

			cout << "Name of student " << i + 1 << " is : " << stdn[i].name << endl;
			cout << "Serial no of student " << i + 1 << " is : " << stdn[i].ID << endl;
			cout << "Age of student " << i + 1 << " is : " << stdn[i].age << endl;
			cout << "Semester of student " << i + 1 << " is : " << stdn[i].semester << endl;
			cout << "Cgpa of student " << i + 1 << " is : " << stdn[i].cgpa << endl;
			cout << "Grade of student " << i + 1 << " is : " << stdn[i].grade << endl;
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
		int x = findRecord(stdn, IDsearch);
		if (x == -1)
		{
			cout << "Student with the Serial no : " << IDsearch << " does not exist\n";

		}
		else {

			cout << "Name of student" << x + 1 << " is : " << stdn[x].name << endl;
			cout << "Serial no of student  " << x + 1 << " is : " << stdn[x].ID << endl;
			cout << "Age of student  " << x + 1 << " is : " << stdn[x].age << endl;
			cout << "Semester of student " << x + 1 << " is : " << stdn[x].semester << endl;
			cout << "Cgpa of student  " << x + 1 << " is : " << stdn[x].cgpa << endl;
			cout << "Grade of student  " << x + 1 << " is : " << stdn[x].grade << endl;
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
		int x = modifyRecord(stdn, IDmodify);
		if (x == -1) {
			cout << "Could not find the record \n";
		}
		else {
			cin.ignore();
			cout << "Change name of student  " << x + 1 << " : ";
			getline(cin, stdn[x].name);
			cout << "Change serial no of student " << x + 1 << " : ";
			cin >> stdn[x].ID;
			cout << "Change age of student " << x + 1 << " : ";
			cin >> stdn[x].age;
			cout << "Change semester of student " << x + 1 << " : ";
			cin >> stdn[x].semester;
			cout << "Change cgpa of student " << x + 1 << " : ";
			cin >> stdn[x].cgpa;
			cout << "Change grade of student " << x + 1 << " : ";
			cin >> stdn[x].grade;
			displayRecord(stdn);
		}
		break;
	}
	case 'D':
	{
		cout << "\t\t\t*****DELETE***** \n\n";
		string IDdelete;
		cout << "Enter the name of the student you want to delete the data of : ";
		getline(cin, IDdelete);
		deleteRecord(stdn, IDdelete);
			displayRecord(stdn);
		break;
	}
	case 'S':
	case 's':
	{
		cout << "\t\t\t*****SORT-BY-NAME***** \n\n";
		SortRecord(stdn);
		displayRecord(stdn);
		break;
	}
	case 'd':
	{
		cout << "\t\t\t*****OUTPUT***** \n\n";
		displayRecord(stdn);
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

}
int addNewRecord(Members s[], int n)
{
	int j;
	for (j = Size; j > n; j--) {
		s[j] = s[j - 1];
	}
	return (n);

}
int modifyRecord(Members s[], int n) {
	int i;
	for (i = 0; i < Size; i++) {
		if (s[i].ID == n) {
			return i;

		}
	}
	if (i == Size)
	{
		return -1;
	}
	else return i;
}
void deleteRecord(Members s[], string n) {
	int i,j=0;
	bool b=false;
	for ( i = 0; i < Size; i++)
	{
		if (s[i].name == n) {
			j = i;
			b = true;
		}

	}
	if (i==Size&&b==false)
	{
		cout << "Could not find the student : ";
		exit(0);
	}
		for (i = j; i < Size - 1; i++) {
			s[i] = s[i + 1];
		}
}

//	Size = Size - 1;
void displayRecord(Members s[]) {
	cout << "\t\t\t*****OUTPUT*****\n\n";
	int i;
	for (i = 0; i < Size; i++)
	{

		cout << "Name of student " << i + 1 << " is : " << s[i].name << endl;
		cout << "Serial no of student " << i + 1 << " is : " << s[i].ID << endl;
		cout << "Age of student " << i + 1 << " is : " << s[i].age << endl;
		cout << "Semester of student " << i + 1 << " is : " << s[i].semester << endl;
		cout << "Cgpa of student " << i + 1 << " is : " << s[i].cgpa << endl;
		cout << "Grade of student " << i + 1 << " is : " << s[i].grade << endl;
	}
}
int findRecord(Members s[], int n) {
	int i;
	for (i = 0; i < Size; i++)
	{
		if (s[i].ID == n) {
			return i;

		}

	}
	if (i == Size)
	{
		return -1;
		cout << "Serial no does not exist in record\n";
	}
	else return i;
}
void SortRecord(Members s[]) {
	int i, j;
	Members temp;
	for (i = 0; i < Size; i++) {
		for (j = 0; j < Size - 1; j++)
		{
			if (s[j].name > s[j + 1].name) {
				temp = s[j];
				s[j] = s[j + 1];
				s[j + 1] = temp;
			}
		}
	}
}

