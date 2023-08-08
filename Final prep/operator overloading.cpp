#include<iostream>
#include<string>
#include<cstring>

using namespace std;

class ABC{
	private:
		char name[20];
		int age;
		string uni;
	public:
		ABC();
		ABC(char n[],int age,string uni);
		friend ostream &operator<<(ostream& c,const ABC& a);
		friend istream &operator>>(istream& i,ABC& a);
//		ABC* operator[](int n);
		~ABC();
};
int main(){
	char c[20]="Farhan";
	ABC b(c,18,"QAU");
	cout<<b;
	cin>>b;
	cout<<b;
	ABC a[5];
	int i;
	
//	int ind;
//	cout<<"Enter number of members : ";
//	cin>>ind;
////	ABC a[ind];
//	ABC a;
//	a.operator[](ind);
//	int i;
	for(i=0;i<5;i++){
		cin>>a[i];
		cout<<a[i];

	}
}
//ABC* ABC::operator[](int n){
//	ABC *b=new ABC[n];
//	return b;
//}
ABC::ABC(){
	name[20]=' ';
	this->age=0;
	this->uni=' ';
}
ABC::ABC(char n[],int age,string uni){
	strcpy(name,n);
	name[20]='\0';
//	name=n;
	this->age=age;
	this->uni=uni;
}
ostream &operator<<(ostream& c,const ABC& a){
	c<<a.name<<endl;
	c<<a.age<<endl;
	c<<a.uni<<endl;
	return c;
}
istream &operator>>(istream& i, ABC& a){
	cout<<"Name : ";
	i>>a.name;
	cout<<"Age : ";
	i>>a.age;
	cout<<"Uni : ";
		i.ignore();
	getline(i,a.uni);
}
ABC::~ABC(){
	cout<<"Calling destructor ";
}
