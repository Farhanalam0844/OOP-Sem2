#include"FuelGauge.h"
FuelGauge::FuelGauge(){
	fuel=0;
}
FuelGauge::FuelGauge(int f){
	fuel=f;
}
void FuelGauge::set_fuel(int f){
	fuel=f;
}
int FuelGauge::get_fuel(){
	return fuel;
}
void FuelGauge::put_fuel(){
	if(fuel<14){
		++fuel;
	}
}
void FuelGauge::burn_fuel(){
	if(fuel>0){
		--fuel;
	}
}
