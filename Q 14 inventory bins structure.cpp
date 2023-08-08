#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
//STRUCTURE DECLARATION
struct bin {
	string binDescript;
	int binparts=0;
};
//DISPLAYING BINS FUNCTIONS
void displayBin(bin[], int );
int main() {
	const int SIZE = 10;

	//STRUCTURE VARIABLE [ARRAY] DECLARATION
	bin binitems[SIZE];
	// VARIABLE[ARRAY] INITIALIZATION
	binitems[0].binDescript = "Valve";
	binitems[0].binparts = 15;
	binitems[1].binDescript = "Bearing";
	binitems[1].binparts = 5;
	binitems[2].binDescript = "Bushing";
	binitems[2].binparts = 15;
	binitems[3].binDescript = "Coupling";
	binitems[3].binparts = 21;
	binitems[4].binDescript = "Flange";
	binitems[4].binparts = 7;
	binitems[5].binDescript = "Gear";
	binitems[5].binparts = 5;
	binitems[6].binDescript = "Gear housing";
	binitems[6].binparts = 5;
	binitems[7].binDescript = "Vaccum Gripper";
	binitems[7].binparts = 25;
	binitems[8].binDescript = "Cable";
	binitems[8].binparts = 18;
	binitems[9].binDescript = "Rod";
	binitems[9].binparts = 12;
	//DISPLAYING BINS FUNCTION
	displayBin(binitems, SIZE);
	int choice, index, parts;
	char ans;
	do {
		cout << "\t\t\t~~~~~MENU~~~~~\n";
		cout << "Enter 1 to add parts in bin parts \n";
		cout << "Enter 2 to delete parts in bin parts \n";
		cout << "Enter 3 to quit the program \n";
		cin >> choice;
		while (choice < 1 || choice>3) {
			cout << "Enter a valid choice\nEnter again : ";
			cin >> choice;
		}
		//ADDITION PARTS
		if (choice == 1) {
			cout << "Enter the bin no you want to add parts in : ";
			cin >> index;
			while (index < 1 || index>10) {
				cout << "Enter a valid index\nEnter again : ";
				cin >> index;
			}
			cout << "Now enter the no of parts you want to add (limit =30) : ";
			cin >> parts;
			while (parts < 0 || parts>30) {
				cout << "Parts are not within limit\nEnter again : ";
				cin >> parts;
			}
			if (parts + binitems[index - 1].binparts > 30) {
				cout << "Parts exceeds limit\nCan't be added ";
			}
			else {
				binitems[index - 1].binparts = binitems[index - 1].binparts + parts;
			}
			//DISPLAY FUNCTION CALL
			displayBin(binitems, SIZE);
		}
		//DELETION PARTS 
		else if (choice == 2) {
			cout << "Enter the bin no you want to add parts in : ";
			cin >> index;
			while (index < 1 || index>10) {
				cout << "Enter a valid index\nEnter again : ";
				cin >> index;
			}
			cout << "Now enter the no of parts you want to delete (parts no can't be negative) : ";
			cin >> parts;
			while (parts < 0 || parts>30) {
				cout << "Parts are not within limit\nEnter again : ";
				cin >> parts;
			}
			if (binitems[index - 1].binparts - parts < 0) {
				cout << "Parts can't be negative/Can't be less than 0\nCan't be removed ";
			}
			else {
				binitems[index - 1].binparts = binitems[index - 1].binparts - parts;
			}
		}
		//QUITING PROGRAM
		else exit(0);
		cout << "Do you want to add or delete again : \nEnter Y/y to play again or N/n to quits programs : ";
		cin >> ans;
		while (!(ans == 'Y' || ans == 'y' || ans == 'N' || ans == 'n')) {
			cout << "Enter correct choice Y/y or N/n :\nEnter again : ";
			cin >> ans;
		}
		if (ans == 'N' || ans == 'n') {
			exit(0);
		}
	}
while (ans == 'Y' || ans == 'y');


}
void displayBin(bin b[], int n) {
	int i;
	cout << "\t\t\t~~~~~BIN OUTPUT~~~~~\n";
	cout <<fixed<<"bin Description"<<setw(10)<<fixed<<"binparts"<< endl;
	for (i = 0; i < n; i++) {
		cout <<fixed<< b[i].binDescript << setw(5) << fixed << b[i].binparts << endl;
	}
}