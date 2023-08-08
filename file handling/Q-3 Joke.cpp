#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void jokeFunc(fstream &);
void punchlineFunc(fstream &);
int main(){
	fstream joke("joke.txt",ios::out);
	fstream punchline("punchline.txt",ios::out);

	joke<<"How many programmers does it take to change a bulb ?? !!";
	punchline<<"tedrfgtyuiyty7rtfytrdxfdfgdxcfcf\ntrytd\n87trtres\nNo one because it is a hardware problem";
	joke.close();
	punchline.close();
	jokeFunc(joke);
	punchlineFunc(punchline);
}
void jokeFunc(fstream &joke){
	joke.open("joke.txt",ios::in);
	string s;
	getline(joke,s);
	cout<<s<<endl;
	joke.close();
}
void punchlineFunc(fstream &punchline){
	punchline.open("punchline.txt",ios::in);
	string s;
	while(!punchline.eof()){
		getline(punchline,s);	
	}
	cout<<s<<endl;
	punchline.close();
}
