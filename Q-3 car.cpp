#include<iostream>
#include<string>
using namespace std;

class Car{
	private:
		int year_model;
		string make;
		int speed;
	public:
		Car(int y,string s){
			year_model=y;
			make=s;
			speed=0;
		}
		int get_yearModel() const;
		string get_make();
		int get_speed() const;
		int accelerator();
		int brake();	
};
int main(){
	int year;
	string Make;
	cout<<"Enter the model year of car :";
	cin>>year;
	cout<<"Enter the make of car : ";
	cin>>Make;
Car car1(year,Make); 
	int yr=car1.get_yearModel();
	string mke=car1.get_make();
	int spd=car1.get_speed();
	int i,ans;
	cout<<"Calling accelerator function : \n";
	for(i=0;i<5;i++){
		car1.accelerator();
		ans=car1.get_speed();
		cout<<"Now speed is : "<<ans<<endl;
		
	}
		cout<<"Calling brake function : \n";
		for(i=0;i<5;i++){
		car1.brake();
		ans=car1.get_speed();
		cout<<"Now speed is : "<<ans<<endl;
		
	}

	
}
int Car::get_yearModel() const{
	return year_model;
}
int Car::get_speed() const{
	return speed;
}
string Car::get_make(){
	return make;
}
int Car::accelerator(){
	speed=speed+5;
}
int Car::brake(){
	speed=speed-5;
}
