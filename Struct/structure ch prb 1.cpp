#include<iostream>
#include<string>
using namespace std;
struct MovieData{
	string title;
	string director;
	int yearReleased;
	double duration;
};
void displayData(MovieData);
int main(){
	MovieData movie1={ "3 Idiots","Rajkumar Hirani",2009,2.31};
	MovieData movie2={ "Dangal","Nitesh Tiwari",2016,2.41};
	cout<<"\t\tFirst movie data "<<endl;
	displayData(movie1);
	cout<<"\t\tSecond movie data "<<endl;
	displayData(movie2);
}
void displayData(MovieData m){
	cout<<"Name of movie is : "<<m.title<<endl;
	cout<<"Director of movie is : "<<m.director<<endl;
	cout<<"Releases year of movie is : "<<m.yearReleased<<endl;
	cout<<"Duration of movie is : "<<m.duration<<endl;
}
