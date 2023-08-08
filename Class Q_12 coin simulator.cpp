#include<iostream>
#include<string>
#include<cstdlib>
#include<time.h>
using namespace std;
class Coin{
	private:
		string sideUp;
	public:
		Coin();
	 	void toss();
	 	string getsideUp();
};
int main(){
	int heads,tails=0;
	Coin c;
	string n=c.getsideUp();
	cout<<n<<endl;
	for(int i=0;i<20;i++){
		c.toss();
		n=c.getsideUp();
		if(n=="Heads"){
			heads++;
		}
			if(n=="Tails"){
			tails++;
		}
		cout<<"For iteration : "<<i+1<<" toss is : "<<n<<endl;
	}
		cout<<"No of Heads are : "<<heads<<endl;
		cout<<"No of Tails are : "<<tails<<endl;
	
}
Coin::Coin(){
	// min + (rand() % (int)(max - min + 1))
//	srand(time(0));
	int num=1+(rand()%(2-1+1));
	if(num==1){
		sideUp="Heads";
	}
	else if(num==2){
		sideUp="Tails";
	}
}
void Coin::toss(){
	int num=1+(rand()%(2-1+1));
	if(num==1){
		sideUp="Heads";
	}
	else if(num==2){
		sideUp="Tails";
}
}
string Coin::getsideUp(){
	return sideUp;
}
