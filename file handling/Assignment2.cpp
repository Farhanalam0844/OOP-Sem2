#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
using namespace std;
//STRUCTURE DECLARATION
struct Members {
	string name;
	int ID;
	int age;
	int semester;
	double cgpa;
	char grade;
};
int main() {
//STRUCTURE VARIABLE DECLARATION DYNAMICALLY
	int num;
	int SIZE = 0;
	Members* arr;
	cout << "Enter the number of students you want to enter data of : ";
	cin >> SIZE;
	num = SIZE + 5;
	arr = new Members[num] ;
// Members input 
	cout << "\t\t\t*****INPUT*****\n\n";
	int i;
	int no_of_records=6;
	char answer;
	for (i = 0; i < SIZE; i++) {
//NAME INPUT	
	cin.ignore();
		cout << "Enter name of student " << i + 1 << " : ";
		getline(cin, arr[i].name);
//ID INPUT
		cout << "Enter Serial no of student " << i + 1 << " : ";
		cin >> arr[i].ID;
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
	
//FILE NAME 
	cin.ignore();
	fstream data;
	char name[30];
	cout<<"Enter the name of file : ";
	cin.getline(name,30);
	data.open(name,ios::in |ios::out );
	data.close();
		do{
		system("cls");
//MENU INPUT
	cout << "\t\t\t*****MENU***** \n\n";
	char input;
	cout << "To create a file - Enter C/c \nTo add a new Record - Enter A \nTo Find/Search a Record - Enter F \nTo modify a Record - Enter M \nTo delete a Record - Enter D/d \nTo Sort the Records - Enter S \nTo write Records - Enter W/w\nTo Read the data in file - Enter R/r \nTo exit the program - Enter E   \nPress the button you want to do the operation of : ";
	cin >> input;
//MENU VALIDATION
	while (input != 'C' && input != 'c' &&input != 'A' && input != 'a' && input != 'F' && input != 'f' && input != 'M' && input != 'm' && input != 'D' && input != 'd' && input != 'S' && input != 's' && input != 'E' && input != 'e'&& input != 'W' && input != 'w'&& input != 'R' && input != 'r') {
		cout << "Input is not valid make sure to press character from below \n";
		cout << "To add a new Record - Enter A \nTo Find/Search a Record - Enter F \nTo modify a Record - Enter M \nTo delete a Record - Enter D(upper case) \nTo Sort the Records - Enter S \nTo display a Record - Enter d(Lower case) \nTo exit the program - Enter E   \nPress the button you want to do the operation of : ";
		cin >> input;
		}

	switch (input)
	{
//CREATING FILE
	case 'C':
	case 'c':
		{
	//		fstream data;
		char name[30];
		cout<<"Enter the name of file : ";
		cin.getline(name,30);
			cin.ignore();
		data.open(name,ios::out );
		data.close();
		break;
		}
	case 'A':
	case 'a':
//ADD RECORD
	{
		int add_ID;
		cout << "\t\t\t*****ADD RECORD***** \n\n";
	cout<<"Enter the index you want to add data in : ";
	cin>>add_ID;
	add_ID=add_ID-1;
		cout << "\t\t\t*****INPUT*****\n\n";
		for(int x=SIZE;x>add_ID;x--){
			arr[x]=arr[x-1];
		}
		cout << "Enter name of student " << add_ID + 1 << " : ";
		getline(cin, arr[add_ID].name);
		cout << "Enter Serial no of student " << add_ID + 1 << " : ";
		cin >> arr[add_ID].ID;
		cout << "Enter age of student " << add_ID + 1 << " : ";
		cin >> arr[add_ID].age;
		while (arr[add_ID].age < 0) {
			cout << "Age cannot be negative\nEnter again : ";
			cin >> arr[add_ID].age;
		}
		cout << "Enter semester of student " << add_ID + 1 << " : ";
		cin >> arr[add_ID].semester;
		while (arr[add_ID].semester<1||arr[add_ID].semester>8)
		{
			cout << "Enter valid semester\nEnter again : ";
			cin >> arr[add_ID].semester;
		}
		cout << "Enter cgpa of student " << add_ID + 1 << " : ";
		cin >> arr[add_ID].cgpa;
		while (arr[add_ID].cgpa < 0.0 || arr[add_ID].cgpa>4.0)
		{
			cout << "Enter valid cgpa\nEnter again : ";
			cin >> arr[add_ID].cgpa;
		}
		cout << "Enter grade of student " << add_ID + 1 << " : ";
		cin >> arr[add_ID].grade;
		SIZE++;
		data.open(name,ios::out);
		for(i=0;i<SIZE;i++){
		data<<"Name of student : "<<i+1<<" is : "<<arr[i].name<<endl;
		data<<"ID of student   : "<<i+1<<" is : "<<arr[i].ID<<endl;
		data<<"Age of student  : "<<i+1<<" is : "<<arr[i].age<<endl;
		data<<"Sem  of student : "<<i+1<<" is : "<<arr[i].semester<<endl;
		data<<"CGPA of student : "<<i+1<<" is : "<<arr[i].cgpa<<endl;
		data<<"Grad of student : "<<i+1<<" is : "<<arr[i].grade<<endl;
		}
		data.close();
		break;
	}
	
//SEARCH RECORD
	case 'F':
	case 'f':
	{
		int searchID,i,j=0;
		string s;
		bool b=false;
		cout << "\t\t\t*****SEARCHING_IN_FILE***** \n\n";
		cout<<"Enter the ID of the student you want to search data of : ";
		cin>>searchID;
		for(i=0;i<SIZE;i++){
			if(searchID==arr[i].ID){
				j=i;
				b=true;
			}
		}
		if(i==SIZE&&b==false){
			cout<<"ID couldn't be found : \n";
		}
		else
		{
			j=((j+1)*no_of_records)-no_of_records;
			data.open(name,ios::in);
			i=0;
			while(!data.eof()){
				getline(data,s);
				
				if(i==j){	
				for(int k=0;k<no_of_records;k++)
				{
					cout<<s<<endl;
					getline(data,s);
				}
				}
				i++;
			}
			data.close();
		}
		break;
	}
	case 'M':
	case 'm':
//MODIFY RECORD
	{
			int searchID,i,j=0;
		char s[50];
		bool b=false;
		cout << "\t\t\t*****SEARCHING_IN_FILE***** \n\n";
		cout<<"Enter the ID of the student you want to search data of : ";
		cin>>searchID;
		for(i=0;i<SIZE;i++){
			if(searchID==arr[i].ID){
						cin.ignore();
		cout << "Enter name of student " << i + 1 << " : ";
		getline(cin,arr[i].name);
		cout << "Enter Serial no of student " << i + 1 << " : ";
		cin>>arr[i].ID;
		cout << "Enter age of student " << i + 1 << " : ";
		cin>>arr[i].age;
		cout << "Enter semester of student " << i + 1 << " : ";
		cin>>arr[i].semester;
		cout << "Enter cgpa of student " << i + 1 << " : ";
		cin>>arr[i].cgpa;
		cout << "Enter grade of student " << i + 1 << " : ";
		cin>>arr[i].grade;
				b=true;
			}
		}
		if(i==SIZE&&b==false){
			cout<<"ID couldn't be found : \n";
		}
		else
		{
		data.open(name,ios::out);
	if(data){
	for(i=0;i<SIZE;i++){
		data<<"Name of student : "<<i+1<<" is : "<<arr[i].name<<endl;
		data<<"ID of student   : "<<i+1<<" is : "<<arr[i].ID<<endl;
		data<<"Age of student  : "<<i+1<<" is : "<<arr[i].age<<endl;
		data<<"Sem  of student : "<<i+1<<" is : "<<arr[i].semester<<endl;
		data<<"CGPA of student : "<<i+1<<" is : "<<arr[i].cgpa<<endl;
		data<<"Grad of student : "<<i+1<<" is : "<<arr[i].grade<<endl;
	
	}
		cout<<" Data has been changed successfuly in file\n";
	}
	data.close();			
			}
			data.close();
		
					break;
	}
	case 'D':
	case 'd':
//DELETE RECORD
	{
		int de_ID;
		cout << "\t\t\t*****DELETE***** \n\n";
		cout<<"Enter the index you want to delete data of : ";
		cin>>de_ID;
		while(de_ID<1||de_ID>SIZE){
			cout<<"Enter a valid index\nEnter again : ";
			cin>>de_ID;
		}
			data.open(name,ios::out);	
	for(i=0;i<SIZE;i++){
		if(i==(de_ID-1)){
			continue;
		}
		data<<"Name of student : "<<i+1<<" is : "<<arr[i].name<<endl;
		data<<"ID of student   : "<<i+1<<" is : "<<arr[i].ID<<endl;
		data<<"Age of student  : "<<i+1<<" is : "<<arr[i].age<<endl;
		data<<"Sem  of student : "<<i+1<<" is : "<<arr[i].semester<<endl;
		data<<"CGPA of student : "<<i+1<<" is : "<<arr[i].cgpa<<endl;
		data<<"Grad of student : "<<i+1<<" is : "<<arr[i].grade<<endl;
	
	}
		cout<<"Record has been deleted successfuly in file\n";
			data.close();
		break;
}
	case 'S':
	case 's':
//SORTING RECORD
	{
		cout << "\t\t\t*****SORT-BY-ID***** \n\n";
		int i,j;
		Members temp;
		for(i=0;i<SIZE-1;i++){
			for(j=1;j<SIZE;j++){
				if(arr[i].ID>arr[j].ID){
					temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
				}
			}
		}
		data.open(name,ios::out);
			for(i=0;i<SIZE;i++){
		data<<"Name of student : "<<i+1<<" is : "<<arr[i].name<<endl;
		data<<"ID of student   : "<<i+1<<" is : "<<arr[i].ID<<endl;
		data<<"Age of student  : "<<i+1<<" is : "<<arr[i].age<<endl;
		data<<"Sem  of student : "<<i+1<<" is : "<<arr[i].semester<<endl;
		data<<"CGPA of student : "<<i+1<<" is : "<<arr[i].cgpa<<endl;
		data<<"Grad of student : "<<i+1<<" is : "<<arr[i].grade<<endl;
	
	}	
		
		data.close();
		break;
	}
//WRITE_DATA IN FILE

	case 'W':
	case 'w':
	{
		cout << "\t\t\t*****WRITE_IN_FILE***** \n\n";
	data.open(name,ios::out);
	if(data){
	cout<<"File has been created successfuly\n";	
	for(i=0;i<SIZE;i++){
		data<<"Name of student : "<<i+1<<" is : "<<arr[i].name<<endl;
		data<<"ID of student   : "<<i+1<<" is : "<<arr[i].ID<<endl;
		data<<"Age of student  : "<<i+1<<" is : "<<arr[i].age<<endl;
		data<<"Sem  of student : "<<i+1<<" is : "<<arr[i].semester<<endl;
		data<<"CGPA of student : "<<i+1<<" is : "<<arr[i].cgpa<<endl;
		data<<"Grad of student : "<<i+1<<" is : "<<arr[i].grade<<endl;
	
	}
		cout<<" Data has been written successfuly in file\n";
	}
	data.close();
		break;
	}
	case 'R':
	case 'r':
		{
//READ_DATA FROM FILE
	string s;
	data.open(name,ios::in);
	if(data){
	cout<<"File has been opened successfuly\n";	
	while(!data.eof()){
		getline(data,s);
		cout<<fixed<<setw(8)<<s<<endl;
	}
	data.close();
	}
	break;
		}
	case 'E':
	case 'e':
//EXIT
	{
		cout << "\t\t\t*****EXIT***** \n\n";
		exit(0);
	}

	default:
		cout << "Input was invalid\n";
		break;
	}
//ANSWER FOR CONDITION OF LOOP
	cout << "Do you want to perform another operation press Y/y to perform an operation---\nOr press N/n to quit \nEnter your choice : ";
	cin >> answer;
	while (answer!='Y'&&answer!='y'&&answer!='n'&&answer!='N')
	{
		cout << "Enter a valid choice\nEnter again : ";
		cin >> answer;
	}
	}while (answer == 'Y' || answer == 'y');

}
