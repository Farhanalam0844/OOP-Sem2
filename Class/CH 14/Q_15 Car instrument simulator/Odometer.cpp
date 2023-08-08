#include"Odometer.h"

Odometer::Odometer(){
	mileage=0;
}
Odometer::Odometer(int m){
	mileage=m;
}
void Odometer::set_mileage(int m){
	mileage=m;
}
int Odometer::get_mileage(){
	return mileage;
}
void Odometer::inc_mileage(){
	if(mileage>999999){
		mileage=0;
	}
	else{
		mileage++;
	}
}
void Odometer::dec_mileage(FuelGauge& f){
	if(mileage>=24&&mileage%24==0){
	//	mileage-=24;
		f.burn_fuel();
	}
}
