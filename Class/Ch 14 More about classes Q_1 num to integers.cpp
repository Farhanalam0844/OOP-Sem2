#include<iostream>
#include<string>
using namespace std;

class Numbers{
	private:
		int number;
	public:
		Numbers(int num);
		void print(string s);
		
};
int main(){
	int num;
	cout<<"Enter the number between 0 and 9999 : ";
	cin>>num;
	while(num<0||num>9999){
		cout<<"Enter a valid number :\nEnter again : ";
		cin>>num;
	}
	Numbers n(num);

	string twenty ="twenty";
	string thirty ="thirty";
	string forty ="forty";
	string fifty ="fifty";
	string sixty ="sixty";
	string seventy ="seventy";
	string eighty ="eighty";
	string ninty ="ninty";
	string hundred ="hundred";
	string thousand ="thousand";
	
	string eng;
	int rem;
	rem=num/1000;
	num=num%1000;
	
	if(rem==9)
	eng="Nine ";
	if(rem==8)
	eng="Eight ";
	if(rem==7)
	eng="Seven ";
	if(rem==6)
	eng="Six ";
	if(rem==5)
	eng="Five ";
	if(rem==4)
	eng="Four ";
	if(rem==3)
	eng="Three ";
	if(rem==2)
	eng="Two ";
	if(rem==1)
	eng="one ";
	

	eng=eng+"thousand ";
	

	rem=num/100;
	num=num%100;
	if(rem==9)
	eng+="Nine ";
	if(rem==8)
	eng+="Eight ";
	if(rem==7)
	eng+="Seven ";
	if(rem==6)
	eng+="Six ";
	if(rem==5)
	eng+="Five ";
	if(rem==4)
	eng+="Four ";
	if(rem==3)
	eng+="Three ";
	if(rem==2)
	eng+="Two ";
	if(rem==1)
	eng+="one ";
	eng=eng+"hundred ";

	rem=num/10;
	num=num%10;
	if(rem==9)
	eng=eng+"Ninty ";
	if(rem==8)
	eng=eng+"Eighty ";
	if(rem==7)
	eng=eng+"Seventy ";
	if(rem==6)
	eng=eng+"Sixty ";
	if(rem==5)
	eng=eng+"Fivety ";
	if(rem==4)
	eng=eng+"Fourty ";
	if(rem==3)
	eng=eng+"Thirty ";
	if(rem==2)
	eng=eng+"Twenty ";
	
	if(num==19)
	eng=eng+"Nineteen ";
	if(num==18)
	eng=eng+"Eighteen ";
	if(num==17)
	eng=eng+"Seventeen ";
	if(num==16)
	eng=eng+"Sixteen ";
	if(num==15)
	eng=eng+"Fivteen ";
	if(num==14)
	eng=eng+"Fourteen ";
	if(num==13)
	eng=eng+"Thirteen ";
	if(num==12)
	eng=eng+"Twelve ";
	if(num==11)
	eng=eng+"eleven ";
	if(num==9)
	eng=eng+"Nine ";
	if(num==8)
	eng=eng+"Eight ";
	if(num==7)
	eng=eng+"Seven ";
	if(num==6)
	eng=eng+"Six ";
	if(num==5)
	eng=eng+"Five ";
	if(num==4)
	eng=eng+"Four ";
	if(num==3)
	eng=eng+"Three ";
	if(num==2)
	eng=eng+"Two ";
	if(num==1)
	eng=eng+"one ";

	n.print(eng);
}	
Numbers::Numbers(int n){
	this->number=n;
}
void Numbers::print(string s){
	cout<<s;
}
