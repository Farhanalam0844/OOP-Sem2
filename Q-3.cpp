#include<iostream>
using namespace std;
//STRUCTURE DECLARATION
struct division {
	double First_Quarter_Sales;
	double Second_Quarter_Sales;
	double Third_Quarter_Sales;
	double Fourth_Quarter_Sales;
	double Total_Quarter_Sales;
	double Avg_Quarter_Sales;

};
int main() {
//VARIABLE WITH STRUCTURE TYPE DECLARATION
	division div[4];
//VARIABLE INPUT
	cout << "\t\t\t*****INPUT******* : \n";
	int i;
	for (i = 0; i < 4; i++) {
		if (i==0)
			cout<<"For East division";
		if (i==1)
			cout<<"For West division";
		if (i==2)
			cout<<"For North division";
		if (i==3)
			cout<<"For South division";
		cout << endl;
	cout << "Enter the First Quarter sales : ";
	cin >> div[i].First_Quarter_Sales;
//VALIDATION
	while (div[i].First_Quarter_Sales<0) {
		cout << "Amount cannot be negative \nEnter the First Quarter sales again : ";
		cin >> div[i].First_Quarter_Sales;
	}
	cout << "Enter the Second Quarter sales : ";
	cin >> div[i].Second_Quarter_Sales;
//VALIDATION
	while (div[i].Second_Quarter_Sales < 0) {
		cout << "Amount cannot be negative \nEnter the Second Quarter sales again : ";
		cin >> div[i].Second_Quarter_Sales;
	}
	cout << "Enter the Third Quarter sales : ";
	cin >> div[i].Third_Quarter_Sales;
//VALIDATION
	while (div[i].Third_Quarter_Sales < 0) {
		cout << "Amount cannot be negative \nEnter the Third Quarter sales again : ";
		cin >> div[i].Third_Quarter_Sales;
	}
	cout << "Enter the Fourth Quarter sales : ";
	cin >> div[i].Fourth_Quarter_Sales;
//VALIDATION
	while (div[i].Fourth_Quarter_Sales < 0) {
		cout << "Amount cannot be negative \nEnter the Fourth Quarter sales again : ";
		cin >> div[i].Fourth_Quarter_Sales;
	}
	div[i].Total_Quarter_Sales = div[i].First_Quarter_Sales + div[i].Second_Quarter_Sales + div[i].Third_Quarter_Sales + div[i].Fourth_Quarter_Sales;
	div[i].Avg_Quarter_Sales = div[i].Total_Quarter_Sales / 4.0;
	}
//DATA OUTPUT
	cout << "\t\t\t*****OUTPUT******* : \n";
	for (i = 0; i < 4; i++) {
		if (i == 0)
			cout << "\t\t\t******East division data****** : ";
		if (i == 1)
			cout << "\t\t\t******West division data******  : ";
		if (i == 2)
			cout << "\t\t\t******North division data****** : ";
		if (i == 3)
			cout << "\t\t\t******South division data****** : ";
		cout << endl;
		cout << "First Quarter sales is : "<<div[i].First_Quarter_Sales << endl;
		cout << "Second Quarter sales is : "<<div[i].Second_Quarter_Sales << endl;
		cout << "Third Quarter sales is : "<<div[i].Third_Quarter_Sales << endl;
		cout << "Fourth Quarter sales is : "<<div[i].Fourth_Quarter_Sales << endl;
		cout << "Total Quarter sales is : " << div[i].Total_Quarter_Sales << endl;
		cout << "Average Quarter sales is : " << div[i].Avg_Quarter_Sales << endl;
		cout << endl;
	}



}