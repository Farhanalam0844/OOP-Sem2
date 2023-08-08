#include<iostream>
#include<string>
using namespace std;
struct member {
	string name;
	int ID=0;
	int* tests;
	double avg=0;
	char grade='0';
};
int main() {
	int stds,tsts;
	cout << "How many students there will be : ";
	cin >> stds;	
	member *m=NULL;
	m = new member[stds];
	//test = new int[];
	cout << "How many tests there will be : ";
	cin >> tsts;
	//	int *tests = NULL;
	
	int i,j,sum=0;
	cout << "\n\t\t\t//////INPUT\n\n";
	for (i = 0; i < stds; i++) {

		cout << "Enter the name of the student " << i + 1 << " : ";
		cin.ignore();
		getline(cin,m[i].name);
	//	cin.ignore();
		cout << "Enter the ID of the student " << i + 1 << " : ";
		cin >> m[i].ID;
		m[i].tests = new int[tsts];
		cout << "Enter the test marks of the student\n";
		for (j = 0; j < tsts; j++) {
			cout << "Enter the marks of tests : " << j + 1 << " of the student " << i+1 <<" : ";
			cin >> m[i].tests[j];
			while (m[i].tests[j]<0|| m[i].tests[j]>100)
			{
				cout << "Marks must be between 0 and 100 : ";
				cin >> m[i].tests[j];
			}
			sum = sum + m[i].tests[j];
		}
		m[i].avg = sum / tsts;
			if (m[i].avg > 90){
				m[i].grade = 'A';
			}
			else if (m[i].avg > 80){
				m[i].grade = 'B';
			}
			else if (m[i].avg > 70){
				m[i].grade = 'C';
			}
			else if (m[i].avg > 60){
				m[i].grade = 'D';
			}
			else{
				m[i].grade = 'F';
			}
		
	
	//	cin.ignore();
		sum = 0;
	}
	cout << "\n\t\t\t//////OUTPUT\n\n";
	for (i = 0; i < stds; i++) {
		cout << "Name of the student : " << i + 1 << " is : "<<m[i].name << endl;
		cout << "ID of the student : " << i + 1 << " is : "<<m[i].ID << endl;
		cout << "Average marks of the student : "<<i+1<<" are : "<<m[i].avg << endl;
		cout << "Grade of the student : " << i + 1 << " is : " << m[i].grade<<endl;
	}


}