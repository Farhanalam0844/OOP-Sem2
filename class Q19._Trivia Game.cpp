#include<iostream>
#include<string>
using namespace std;

class Question{
	private:
	string quest;
	string ans1;
	string ans2;
	string ans3;
	string ans4;
	int correct_ans;
	public:
		 
	Question(string quest,string ans1,string ans2,string ans3,string ans4,int correct_ans){
	this->quest=quest;
	this->ans1=ans1;
	this->ans2=ans2;
	this->ans3=ans3;
	this->ans4=ans4;
	this->correct_ans=correct_ans;
		}
		string getquest();
		string getans1();
		string getans2();
		string getans3();
		string getans4();
		int getcorrect_ans();
};
int main(){
	const int SIZE=10;
	Question q[]={
	Question("Question : 1","Answer : 1","Answer : 2","Answer : 3","Answer : 4",1),
	Question("Question : 2","Answer : 1","Answer : 2","Answer : 3","Answer : 4",1),
	Question("Question : 3","Answer : 1","Answer : 2","Answer : 3","Answer : 4",2),
	Question("Question : 4","Answer : 1","Answer : 2","Answer : 3","Answer : 4",2),
	Question("Question : 5","Answer : 1","Answer : 2","Answer : 3","Answer : 4",3),
	Question("Question : 6","Answer : 1","Answer : 2","Answer : 3","Answer : 4",3),
	Question("Question : 7","Answer : 1","Answer : 2","Answer : 3","Answer : 4",4),
	Question("Question : 7","Answer : 1","Answer : 2","Answer : 3","Answer : 4",4),
	Question("Question : 9","Answer : 1","Answer : 2","Answer : 3","Answer : 4",1),
	Question("Question : 10","Answer : 1","Answer : 2","Answer : 3","Answer : 4",2)
	};
//	q[0].correct_ans=0;
	string quest,ans1,ans2,ans3,ans4;
	int ans;
	int correct_ans,i,answer_1,answer_2,a;
	a=0;
	cout<<"For player 1 : \n";
	for(i=0;i<5;i++){
		quest= q[i].getquest();
		cout<<quest<<" : \n";
		cout<<"Possible answers are : \n";
		ans1= q[i].getans1();
		cout<<"1."<<ans1<<"\t";
		ans2=q[i].getans2();
		cout<<"2."<<ans2<<"\t";
		ans3=q[i].getans3();
		cout<<"3."<<ans3<<"\t";
		ans4=q[i].getans4();
		cout<<"4."<<ans4<<"\n";
		cout<<"Enter your answer : ";
		cin>>ans;
	int x=q[i].getcorrect_ans();
		if(ans==x){
			a++;
		}
		//correct_ans=q[i].getcorrect_ans();
	//	int putcorrect_ans(int n);
	}
	i--;
	answer_1=a;
		cout<<"For player 2 : \n";
	for(;i<SIZE;i++){
		quest= q[i].getquest();
		cout<<quest<<" : \n";
		cout<<"Possible answers are : \n";
		ans1= q[i].getans1();
		cout<<"1."<<ans1<<"\t";
		ans2=q[i].getans2();
		cout<<"2."<<ans2<<"\t";
		ans3=q[i].getans3();
		cout<<"3."<<ans3<<"\t";
		ans4=q[i].getans4();
		cout<<"4."<<ans4<<"\n";
		cout<<"Enter your answer : ";
		cin>>ans;
		int x=q[i].getcorrect_ans();
		if(ans==x){
			a++;
		}
		//correct_ans=q[i].getcorrect_ans();
	//	int putcorrect_ans(int n);
	}
	i--;
	answer_2=a-answer_1;
	cout<<"Correct answers of player #1 is : "<<answer_1<<"\n";
	cout<<"Correct answers of player #2 is : "<<answer_2<<"\n";
	if(answer_1>answer_2){
		cout<<"So, Player : 1 wins\n";
	}
	 else if(answer_1<answer_2){
		cout<<"So, Player : 2 wins\n";
	}
	else {
		cout<<"Both players have equal score : ";
	}
}
string Question::getquest(){
	return quest;
}
string Question::getans1(){
	return ans1;
}
string Question::getans2(){
	return ans2;
}
string Question::getans3(){
	return ans3;
}
string Question::getans4(){
	return ans4;			
	}
int Question::getcorrect_ans(){
	return correct_ans;	
}
