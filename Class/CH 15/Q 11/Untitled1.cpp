#include<iostream>
#include<string>
using namespace std;
class GradedActivity;
class PassFail;
class Essay;
class FinalExam;
class CourseGrades{
	private:
		GradedActivity* grades[4];
		GradedActivity* gradess[4];
	public:
		void set_lab(GradedActivity& s);
		void set_passfail(PassFail &s);
		void set_Essay(Essay &s); 
		void set_finalexam(FinalExam &s);
		void print();
};
class GradedActivity {
	protected:
		int lab_score;
	public:
		GradedActivity();
		void set_lab_score(int n);
		int get_lab_score()const;
		virtual int get_passfail()const{
		}
		virtual int get_essay()const{
		}
		virtual int get_final_score()const{
		}
		
		
};
class PassFail : public GradedActivity {
	private:
		int passfail_score;
	public:
		PassFail();
		void set_passfail(int n);
		int get_passfail()const;
		
};
class Essay : public GradedActivity {
	private:
		int essay_score;
	public:
		Essay();
		void set_essay(int n);
		int get_essay()const;
		
};
class FinalExam : public GradedActivity {
	protected:
	int final_score;
	public:
		void set_final_score(int n);
		int get_final_score()const;
};


int main(){
	int n;
	GradedActivity g;
	cout<<"Enter value of lab score : ";
	cin>>n;
	g.set_lab_score(n);
	PassFail p;
	cout<<"Pass/Fail exam score : ";
	cin>>n;
	p.set_passfail(n);
	Essay e;
	cout<<"Enter Essay score : ";
	cin>>n;
	e.set_essay(n);
	FinalExam f;
	cout<<"Enter the final exam score : ";
	cin>>n;
	f.set_final_score(n);
	
	
	
	
	
	CourseGrades c;
	c.set_Essay(e);
	c.set_passfail(p);
	c.set_lab(g);
	c.set_finalexam(f);
	c.print();
}
void CourseGrades::set_lab(GradedActivity &g){
//	*grades[0]=g;
//	gradess[0]=grades[0];
gradess[0]=&g;
}
void CourseGrades::set_passfail(PassFail &p){
	//*grades[1]=p;
	//gradess[1]=grades[1];
	gradess[1]=&p;
}
void CourseGrades::set_Essay(Essay &e){
//	*grades[2]=e;
//	gradess[2]=grades[2];
gradess[2]=&e;
}
void CourseGrades::set_finalexam(FinalExam &f){
//	*grades[3]=f;
//	gradess[3]=grades[3];
gradess[3]=&f;
	}
void CourseGrades::print(){
	int n;
	n=gradess[0]->get_lab_score();
	cout<<"Lab score is : "<<n<<endl;
	if(n>=50){
		cout<<"Pass in lab\n";
	}
	else cout<<"Failed lab\n";
	n=gradess[1]->get_passfail();
	cout<<"Pass/Fail exam score are : "<<n<<endl;
	if(n>=50){
		cout<<"Pass in pass/fail exam : \n";
	}
	else cout<<"Failed Pass/Fail exam\n";
	n=gradess[2]->get_essay();
	cout<<"Essay score is : "<<gradess[2]->get_essay()<<endl;
	if(n>=50){
		cout<<"Pass in Essay exam : \n";
	}
	else cout<<"Failed Exam\n";
	n=gradess[3]->get_final_score();
	cout<<"Final exam score are : "<<n<<endl;
	if(n>=50){
		cout<<"Pass in Final exam : \n";
	}	
	else cout<<"Failed Final\n";
	
}
GradedActivity::GradedActivity(){
	lab_score=0;
}
void GradedActivity::set_lab_score(int n){
	this->lab_score=n;
}
int GradedActivity::get_lab_score()const{
	return lab_score;
}
PassFail::PassFail(){
			this->passfail_score=0;
		}
void PassFail::set_passfail(int n){
	this->passfail_score=n;
}
int PassFail::get_passfail()const{
	return passfail_score;
}
Essay::Essay(){
			this->essay_score=0;
		}
void Essay::set_essay(int n){
	this->essay_score=n;
}
int Essay::get_essay()const{
	return this->essay_score;
}
void FinalExam::set_final_score(int n){
	this->final_score=n;
}
int FinalExam::get_final_score()const{
	return this->final_score;
}
