#ifndef TEMPERATUR_H
#def TEMPERATURE_H

class Temperature{
	private:
		int temp;
	public:
		Temperature(int t){
			temp=t;
		}
		int getTemp();
		bool isEthylFreezing(int t) const;
		bool isEthylBoiling(int t) const;
		bool isOxygenFreezing(int t) const;
		bool isOxygenBoiling(int t) const;
		bool isWaterFreezing(int t) const;
		bool isWaterBoiling(int t) const;
	
};
#endif
