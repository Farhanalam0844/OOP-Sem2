#include<iostream>
using namespace std;
class FRIEND;
class Main{
	private:
		int private_int;
	protected:
		int protected_int;
	public:
		int public_int;
		Main(){
			this->private_int=10;
			this->protected_int=20;
			this->public_int=30;
		}
	friend void funct(Main &s);
	friend class FRIEND;
};
class FRIEND{
	private:
		int FRIEND_PRI_int;
	protected:
		int FRIEND_PRO_int;
	public:
		int FRIEND_PUB_int;
		FRIEND(){
			this->FRIEND_PRI_int=40;
			this->FRIEND_PRO_int=50;
			this->FRIEND_PUB_int=60;

		}
		void display(Main& c);
};
int main(){
		Main m;
	//	m.funct();
		funct(m);
		FRIEND f;
		f.display(m);
}
void funct(Main &s){
	cout<<"Private : "<<s.private_int<<"\tProtected : "<<s.protected_int<<"\tPublic : "<<s.public_int<<endl;
}
void FRIEND::display(Main& c){
	cout<<"FRIEND class Private : "<<this->FRIEND_PRI_int<<"\tProtected : "<<this->FRIEND_PRO_int<<"\tPublic : "<<this->FRIEND_PUB_int<<endl;
	cout<<"FRIEND FUNCTION Private : "<<c.private_int<<"\tProtected : "<<c.protected_int<<"\tPublic : "<<c.public_int<<endl;
	
}
