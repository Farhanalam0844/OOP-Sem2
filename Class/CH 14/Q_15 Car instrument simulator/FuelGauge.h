#ifndef FUELGAUGE_H
#define FUELGAUGE_H
class FuelGauge{
	private:
	int fuel;
	public:
		FuelGauge();
		FuelGauge(int f);
		void set_fuel(int f);
		int get_fuel();
		void put_fuel();
		void burn_fuel();
	
};
#endif
