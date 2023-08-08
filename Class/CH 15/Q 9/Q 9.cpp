#include<iostream>
#include<fstream>
using namespace std;
class FileFilter{
	public:
	FileFilter(){
	}	
 	virtual char transform(char ch)=0;
	virtual void do_filter(ofstream& out,ifstream &in){
	 }
	 ~FileFilter(){
	}
};

class Copy: public FileFilter{
	public:
		Copy(){
		}
		~Copy(){
		}
		virtual char transform(char ch){
		}
		virtual void do_filter(ofstream& out,ifstream& in);
};

class Encryption : public FileFilter{
	int key;
	public:

	Encryption(int key);
	virtual char transform(char ch){
	}	
	 void do_filter(ofstream& out,ifstream &in);
	~Encryption();

};

class ToUpper: public FileFilter{
	public:
		ToUpper(){
		}
		~ToUpper(){
		}
		virtual char transform(char ch) ;
		 void do_filter(ofstream& out,ifstream& in);
};


int main(){
		ofstream out("data2.txt",ios::out);
	ifstream in("data1.txt",ios::in);
	out.close();
	in.close();
	FileFilter* e=new Encryption(5);
	FileFilter* c=new Copy;
	FileFilter* t=new ToUpper;

	e->do_filter(out,in);
	c->do_filter(out,in);
	t->do_filter(out,in);
}
Encryption::Encryption(int n){
	key=n;
}
void Encryption::do_filter(ofstream& out,ifstream &in){
	char ch;
	int n;
	out.open("data2.txt",ios::out);
	in.open("data1.txt",ios::in);
	if(out.bad()){
		cout<<"Not openend enc";
	}
	while(in.get(ch)){
		n=ch;
		out<<n<<this->key;
	}
	in.close();
	out.close();
	
}
char ToUpper::transform(char ch){
	if(ch>='a'&&ch<='z'){
		ch=ch-32;
		
	}
	else if(ch>='A'&&ch<='Z'){
	 ch+=32;}
	 return ch;
}
void ToUpper::do_filter(ofstream& out,ifstream &in){
	char ch,c;
	int n;
	out.open("data13.txt",ios::out);
	in.open("data1.txt",ios::in);
		if(out.bad()){
		cout<<"Not openend enc";
	}
	while(!in.eof()){
		in.get(ch);
		c=transform(ch);
		out<<c;
	}	
	in.close();
	out.close();
}
void Copy::do_filter(ofstream& out,ifstream &in){
	char ch,c;
	int n;
	out.open("data4.txt",ios::out);
		if(out.bad()){
		cout<<"Not openend enc";
	}
	in.open("data1.txt",ios::in);
	while(!in.eof()){
		in.get(ch);
		out<<ch;
	}	
	in.close();
	out.close();
}
//data1Filter::~data1Filter(){
//	
//	}
//	Encryption::~Encryption(){
//	}
//	ToUpper::~ToUpper(){
//		}
//		Copy::~Copy(){
//		}
