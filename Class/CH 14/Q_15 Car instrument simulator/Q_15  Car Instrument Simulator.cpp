#include<iostream>
#include<string>
//#include"FuelGauge.h"
#include"FuelGauge.cpp"
//#include"Odometer.h"
#include"Odometer.cpp"
using namespace std;

int main(){
	FuelGauge f;
	while(f.get_fuel()<14){
		f.put_fuel();
	}
	Odometer g;
	while(f.get_fuel()>0){
		g.inc_mileage();
		g.dec_mileage(f);
		cout<<"Mileage : "<<g.get_mileage()<<"\tFuel : "<<f.get_fuel()<<endl;
	}
}
	
