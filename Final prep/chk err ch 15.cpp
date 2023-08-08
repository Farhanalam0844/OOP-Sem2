class Vehicle{
};
//class Car: public Vehicle
// {
// public:
// Car();
// ~Car();
// protected:
// int passengers;
// };

// class Truck: public  Vehicle
// {
// private:
// double cargoWeight;
// public:
// Truck();
// ~Truck();
// }; 

//class SnowMobile : Vehicle
// {
// protected:
// int horsePower;
// double weight;
// public:
// SnowMobile(int h, double w): Vehicle(h)
// { horsePower = h; }
// ~SnowMobile();
// }; 
//class Furniture{
//	public:
//	Furniture(int){
//	}
//};
//class Table : public Furniture
// {
// protected:
// int numSeats;
// public:
// Table(int n) : Furniture(numSeats)
// { numSeats = n; }
// ~Table();
// };
class Two{
	public:
	Two(int){
	}
}; class One{
	public:
	One(int){
		
	}
}; 
class Three : public Two , public One
 {
 protected:
 int x;
 public:
 Three(int a, int b, int c) : Two(b) : 	One(c)
 { x = a; }
 ~Three();
 }; 
