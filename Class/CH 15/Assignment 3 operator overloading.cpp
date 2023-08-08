#include<iostream>
#include<string>
using namespace std;

class Height{
	private:
		int feets;
		int inches;
	public:
		Height();
		Height(int feets,int inches);
		int get_feets();
		int get_inches();
		void set_inches();
		void set_inche(int inches);
		void set_feet(int feets);
		void display();
//OPERATOR OVERLOADING FUNCTIONS DECLARATIONS
  //UNARY
	//PREFIX INCREMENT ++
		void operator++();
	//POSTFIX INCREMENT ++
		void operator++(int);
	//PREFIX DECREMENT --
		void operator--();
	//POSTFIX INCREMENT -- 
		void operator--(int);
	//NEGATION -
		Height operator-();
  //BINARY
	//ASSIGNMENT =
		Height operator=(Height &right);
	//ADDITION +
		Height operator+(Height &right);
	//SUBSTRACTION -
		Height operator-(Height &right);
	//MULTIPLICATION *
		Height operator*(Height &right);
	//DIVISION /
		Height operator/(Height &right);
  //RELATIONAL OPERATORS
	//LESS THAN <
		bool operator<(Height &right);
	//LESS THAN OR EQUAL TO <=
		bool operator<=(Height &right);
	//GREATER THAN >
		bool operator>(Height &right);
	//GREATER THAN OR EQUAL TO >=
		bool operator>=(Height &right);
	//EQUAL TO ==
		bool operator==(Height &right);
	//PLUS EQUAL TO +=
		Height operator+=(Height &right);
	//MINUS EQUAL TO +=
		Height operator-=(Height &right);
	//MULTIPLY EQUAL TO +=
		Height operator*=(Height &right);
	//DIVIDE EQUAL TO /=
		Height operator/=(Height &right);
};

int main(){
	int feets,inches,choice;
	char ans,un_op,bin_op;
	cout<<"Enter your height feet and inches :\nEnter feets : ";
	cin>>feets;
	cout<<"Now, Enter inches : ";
	cin>>inches;
	Height h1(feets,inches);
	h1.set_inches();
	do{
		cout<<" Choose desired option\nFor Unary Operators : press 1\nFor Binary Operators : press 2\nPress : ";
		cin>>choice;
		while(choice!=1&&choice!=2){
			cout<<"Enter the valid choice :\nEnter again : ";
			cin>>choice;
		}
		if(choice==1){
			do{
				system("cls");
			char ans;
			cout<<"*****UNARY OPERATORS*****\n";
			cout<<"Now choose the unary operator from below :\n"
			<<"For pre-increment   : press I(Capital/Uppercase)\n"
			<<"For post-increment  : press i(Lowercase)\n"
			<<"For pre-deccrement  : press D(Capital/Uppercase)\n"
			<<"For post-deccrement : press d(Lowercase)\n"
			<<"For negation        : press N\n"
			<<"For Display         : press Z\nEnter your choice : ";
			cin>>un_op;
			while(un_op!='I'&&un_op!='i'&&un_op!='Z'&&un_op!='z'&&un_op!='D'&&un_op!='d'&&un_op!='N'&&un_op!='n'){
			cout<<"Enter a valid choice : ";
			cin>>un_op;
			}
		//	Height h;
	switch(un_op){
		case 'I' :{
			++h1;
			cout<<"Feets are : "<<h1.get_feets()<<"\nInches are : "<<h1.get_inches()<<endl;
			break;
			}
		case 'i' :{
			
			h1++;
			cout<<"Feets are : "<<h1.get_feets()<<"\nInches are : "<<h1.get_inches()<<endl;
			break;
			}
		case 'D':{
			--h1;
			cout<<"Feets are : "<<h1.get_feets()<<"\nInches are : "<<h1.get_inches()<<endl;
			break;
			}
		case 'd':{
			h1--;
			cout<<"Feets are : "<<h1.get_feets()<<"\nInches are : "<<h1.get_inches()<<endl;
			break;
			}
		case 'N':
		case 'n':
		{
		Height x=-h1;
			cout<<"Feets are : "<<x.get_feets()<<"\nInches are : "<<x.get_inches()<<endl;
				break;
			}
		case 'Z':
		case 'z':
		{
			h1.display();
			}	
		default:exit(0);
			}	
		cout<<"Do you want to do some Unary operations again\nFor yes : press Y\nFor no : press N ";
		cin>>ans;
		while(ans!='Y'&&ans!='y'&&ans!='N'&&ans!='n'){
			cout<<"Enter a valid choice\nEnter again : ";
			cin>>ans;
		}
//		if(ans=='N'||ans=='n') exit(0);
		}while(ans=='Y'||ans=='y');
	}
	else if(choice==2){
		do{
			cout<<"For binary two objects are necessar\nEnter Height of second object\n"
				<<"Enter feets  : ";
				cin>>feets;
			cout<<"Enter inches : ";
			cin>>inches;
			Height h2(feets,inches);
			h2.set_inches();
				system("cls");
			char ans;
			cout<<"*****BINARY OPERATORS*****\n";
			cout<<"Now choose the unary operator from below :\n"
			<<"For Addition +       : press A\n"
			<<"For Substraction -   : press S\n"
			<<"For Multiplication * : press M\n"
			<<"For Division /       : press D\n"
			<<"For less than <      : press L(Uppercase)\n"
			<<"For less than, equal to <= : press l(lowercase)\n"
			<<"For greater than >   : press G(Uppercase)\n"
			<<"For greater than, equal to >= : press g\n"
			<<"For equal to   == : press E\n"
			<<"For Assignment  = : press X\n"
			<<"For Assignment -= : press Q\n"
			<<"For Assignment += : press P\n"
			<<"For Assignment *= : press R\n"
			<<"For Assignment /= : press T\n"
			<<"For Display       : press Z\nEnter your choice : ";
			cin>>bin_op;
			while(bin_op!='A'&&bin_op!='a'&&bin_op!='Z'&&bin_op!='z'&&bin_op!='Q'&&bin_op!='q'&&bin_op!='T'&&bin_op!='t'&&bin_op!='R'&&bin_op!='r'&&bin_op!='P'&&bin_op!='p'&&bin_op!='X'&&bin_op!='x'&&bin_op!='E'&&bin_op!='e'&&bin_op!='S'&&bin_op!='s'&&bin_op!='M'&&bin_op!='m'&&bin_op!='D'&&bin_op!='d'&&bin_op!='L'&&bin_op!='l'&&bin_op!='G'&&bin_op!='g'){
			cout<<"Enter a valid choice : ";
			cin>>bin_op;
			}
		//	Height h3;
	switch(bin_op){
		case 'X':
		case 'x':{
			h1=h2;
			cout<<"Height for first \n"<<"Feets : "<<h1.get_feets()<<"\nInches : "<<h1.get_inches()<<endl;
			cout<<"Height for Second\n"<<"Feets : "<<h2.get_feets()<<"\nInches : "<<h2.get_inches()<<endl;
			break;
			}
		case 'A' :
		case 'a' :{
		Height x=h1+h2;
			cout<<"Feets are : "<<x.get_feets()<<"\nInches are : "<<x.get_inches()<<endl;
			break;
		}
		case 'S' :
		case 's':
		{
		Height x=h1-h2;
			cout<<"Feets are : "<<x.get_feets()<<"\nInches are : "<<x.get_inches()<<endl;
			break;
		}
		case 'M':
		case 'm':{
		Height x=h1*h2;
			cout<<"Feets are : "<<x.get_feets()<<"\nInches are : "<<x.get_inches()<<endl;
			break;
		}
		case 'D':
		case 'd':{
			if(h2.get_feets()==0||h2.get_inches()==0){
				cout<<"Feets or inches of second object can't be negative : \nEnter again : ";
				cout<<"Enter feets : ";
				cin>>feets;
				while(feets<=0){
					cout<<"Enter valid feets : \nEnter again : ";
					cin>>feets;
				}
				cout<<"Enter inches : ";
				cin>>inches;
				while(inches<=0){
					cout<<"Enter valid inches : \nEnter again : ";
					cin>>inches;
				}
				h2.set_inche(inches);
				h2.set_feet(feets);
			}
		Height x=h1/h2;
			cout<<"Feets are : "<<x.get_feets()<<"\nInches are : "<<x.get_inches()<<endl;
			break;
		}
		case 'L':
		{
		bool b=h1<h2;
		if(b==true){
			cout<<"Height of first object is less than second \n";
		}
		else{
			cout<<"Height of first object is less than second \n";
		}		
		break;
			}
		case 'l':
		{
		bool b=h1<=h2;
		if(b==true){
			cout<<"Height of first object is less than or equal to second \n";
		}
		else{
			cout<<"Height of first object is not less than or equal to second \n";
		}		
		break;
			}
		case 'G':
		{
		bool b=h1>h2;
		if(b==true){
			cout<<"Height of first object is greater than second \n";
		}
		else{
			cout<<"Height of first object is not greater than second \n";
		}		
		break;
			}
		case 'g':
		{
		bool b=h1>=h2;
		if(b==true){
			cout<<"Height of first object is greater than or equal to second \n";
		}
		else{
			cout<<"Height of first object is not greater than or equal to second \n";
		}		
		break;
			}
		case 'E':
		case 'e':
		{
		bool b=h1==h2;
		if(b==true){
			cout<<"Height of first object is equal to second \n";
		}
		else{
			cout<<"Height of first object is not equal to second \n";
		}		
		break;
			}
		case 'P':
		case 'p':{
			Height x=h1+=h2;
			cout<<"Feets are : "<<x.get_feets()<<"\nInches are : "<<x.get_inches()<<endl;
			break;
			}
		case 'Q':
		case 'q':{
			Height x=h1-=h2;
			cout<<"Feets are : "<<x.get_feets()<<"\nInches are : "<<x.get_inches()<<endl;	
			break;
		}
		case 'R':
		case 'r':{
			Height x=h1*=h2;
			cout<<"Feets are : "<<x.get_feets()<<"\nInches are : "<<x.get_inches()<<endl;
			break;	
		}
		case 'T':
		case 't':{
			if(h2.get_feets()==0||h2.get_inches()==0){
				cout<<"Feets or inches of second object can't be negative : \nEnter again : ";
				cout<<"Enter feets : ";
				cin>>feets;
				while(feets<=0){
					cout<<"Enter valid feets : \nEnter again : ";
					cin>>feets;
				}
				cout<<"Enter inches : ";
				cin>>inches;
				while(inches<=0){
					cout<<"Enter valid inches : \nEnter again : ";
					cin>>inches;
				}
				h2.set_inche(inches);
				h2.set_feet(feets);
			}
			
		Height x=h1/=h2;
		cout<<"Feets are : "<<x.get_feets()<<"\nInches are : "<<x.get_inches()<<endl;
			break;	
		}
		case 'Z':
		case 'z':
			{
				cout<<"Object : 1 Height\n";
				h1.display();
				cout<<"Object : 2 Height\n";
				h2.display();
			}
	}
		cout<<"Do you want to do some binary operations again\nFor yes : press Y\nFor no : press N ";
		cin>>ans;
		while(ans!='Y'&&ans!='y'&&ans!='N'&&ans!='n'){
			cout<<"Enter a valid choice\nEnter again : ";
			cin>>ans;
		}
		if(ans=='N'||ans=='n') exit(0);
		}while(ans=='Y'||ans=='y');
	}
		cout<<"Do you want to do some operations again\nFor yes : press Y\nFor no : press N ";
		cin>>ans;
		while(ans!='Y'&&ans!='y'&&ans!='N'&&ans!='n'){
			cout<<"Enter a valid choice\nEnter again : ";
			cin>>ans;
		}
		}while(ans=='Y'||ans=='y');		
}

int Height::get_feets(){
	return feets;
		}
int Height::get_inches(){
	return inches;
}
void Height::set_inche(int inches){
	this->inches=inches;
}
void Height::set_feet(int feets){
			this->feets=feets;
		}
void Height::display(){
	this->set_inches();
	cout<<"Feets are : "<<feets<<endl<<"Inches are : "<<inches<<endl;
}
Height::Height(){
	feets=0;
	inches=0;
}

Height::Height(int feets,int inches){
		this->feets=feets;
		this->inches=inches;
}
void Height::set_inches(){
	if(inches>12){
		feets+=inches/12.0;
		inches=inches%12;
	}
	else if(inches<0){
		--feets;
		inches=12+inches;
	}
	else if(inches==12){
		inches=0;
		++feets;
	}
	if(feets<0){
			cout<<"Height can't be negative : \n";
			exit(0);
	}
}
void Height::operator++(){
	++inches;
	set_inches();
}
void Height::operator++(int ){
	inches++;
	set_inches();
}
void Height::operator--(){
	--inches;
	set_inches();
}
void Height::operator--(int){
	inches--;
	set_inches();
}
Height Height::operator-(){
	Height temp(feets,inches);
	temp.feets=-feets;
	temp.inches=-inches;
	return temp;
}
Height Height::operator+(Height &right){
	Height temp;
	temp.feets=this->feets+right.feets;
	temp.inches=this->inches+right.inches;
	temp.set_inches();
	return temp;
}
Height Height::operator=(Height &right){
	right.feets=this->feets;
	right.inches=this->inches;
}
Height Height::operator*(Height &right){
	Height temp(feets,inches);
	temp.feets=feets*right.feets;
	temp.inches=inches*right.inches;
	temp.set_inches();
	return temp;
}
Height Height::operator/(Height &right){
	Height temp(feets,inches);
	temp.feets=feets/right.feets;
	double sum=0.0;
	double rem=feets%right.feets;
	if(rem>0.0){
		sum=rem*12.0;
	}
	inches+=sum;
	temp.inches=(inches/right.inches);
	temp.set_inches();
	return temp;	
}
Height Height::operator-(Height &right){
	Height temp(feets,inches);
	temp.feets=feets-right.feets;
	temp.inches=inches-right.inches;
	temp.set_inches();
	return temp;
		}

bool Height::operator<(Height &right){
	if(feets<right.feets) return true;
	else if(feets==right.feets){
		if(inches<right.inches) return true;
		return false;
	}
	return false;
}
bool Height::operator<=(Height &right){
	if(feets<right.feets) return true;
	else if(feets==right.feets){
		if(inches<=right.inches) return true;
		return false;
	}
	return false;
}
bool Height::operator>(Height &right){
	if(feets>right.feets) return true;
	else if(feets==right.feets){
		if(inches>right.inches) return true;
		return false;
	}
	return false;
}
bool Height::operator>=(Height &right){
	if(feets>right.feets) return true;
	else if(feets==right.feets){
		if(inches>=right.inches) return true;
		return false;
	}
	return false;
}
bool Height::operator==(Height &right){
	if(feets==right.feets){
		if(inches==right.feets){
			return true;
		}
		else return false;
	}
	else return false;
}
Height Height::operator+=(Height &right){
	Height temp(feets,inches);
		temp.feets=feets+=right.feets;
		temp.inches=inches+=right.inches;
			temp.set_inches();
			return temp;
}
Height Height::operator-=(Height &right){
	Height temp(feets,inches);
		temp.feets=feets-=right.feets;
		temp.inches=inches-=right.inches;
			temp.set_inches();
			return temp;
}
Height Height::operator*=(Height &right){
	Height temp(feets,inches);
		temp.feets=feets*=right.feets;
		temp.inches=inches*=right.inches;
			temp.set_inches();
			return temp;	
}

Height Height::operator/=(Height &right){
	Height temp(feets,inches);
		temp.feets=feets/=right.feets;
		temp.inches=inches/=right.inches;
			temp.set_inches();
			return temp;
}
