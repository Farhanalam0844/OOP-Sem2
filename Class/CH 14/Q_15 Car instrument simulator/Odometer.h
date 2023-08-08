#ifndef ODOMETER_H
#define ODOMETER_H
#include"FuelGauge.h"
class Odometer{
	private:
		int mileage;
	public:
		Odometer();
		Odometer(int m);
		void set_mileage(int m);
		int get_mileage();
		void inc_mileage();
		void dec_mileage(FuelGauge& f);
};
#endif
