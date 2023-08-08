#ifndef TEMPERATUR_H
#define TEMPERATURE_H

class Temperature{
	private:
		int temp;
	public:
		Temperature(int t);
		int getTemp() const;
		bool isEthylFreezing(int t) const;
		bool isEthylBoiling(int t) const;
		bool isOxygenFreezing(int t) const;
		bool isOxygenBoiling(int t) const;
		bool isWaterFreezing(int t) const;
		bool isWaterBoiling(int t) const;
	
};

Temperature::Temperature(int t){
	temp=t;
}
int Temperature::getTemp() const{
	return temp;
}
bool Temperature::isEthylBoiling(int t) const{
	if(t>=172){
		return true;
	}
	else return false;
}
bool Temperature::isEthylFreezing(int t) const{
	if(t<=-173){
		return true;
	}
	else return false;
}
bool Temperature::isOxygenBoiling(int t) const{
	if(t>=-306){
		return true;
	}
	else return false;
}
bool Temperature::isOxygenFreezing(int t) const{
	if(t<=-362){
		return true;
	}
	else return false;
}
bool Temperature::isWaterBoiling(int t) const{
	if(t>=212){
		return true;
	}
	else return false;
}
bool Temperature::isWaterFreezing(int t) const{
	if(t<=32){
		return true;
	}
	else return false;
}
#endif
