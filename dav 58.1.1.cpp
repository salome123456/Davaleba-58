#include <iostream>
#include<string>
using namespace std;
class bus;
class car {
	friend int sxvaoba(car c, bus b);
private: int speed,weight;
public:
	car() {

	}
	car(int speed,int weight) {
		this->weight = weight;
		this->speed = speed;
	}
	void print() {
		cout << weight << " " << speed << endl;
	}
};
class bus {
	friend int sxvaoba(car c, bus b);
private: int speed,weight;
public:
	bus() {

	}
	bus(int speed, int weight) {
		this->weight = weight;
		this->speed = speed;
	}
	void print() {
		cout << weight << " " << speed << endl;
	}
};
int sxvaoba(car c, bus b) {
	c.speed-b.speed;
	if(c.speed-b.speed<0){
		return (c.speed-b.speed)*-1;
		
	}
	else {
	return c.speed - b.speed;
	}
	
}
int main()
{
	car c(60, 2000);//(100,2000)
	c.print();
	bus b(100, 1750);//(60,1750)
	
	b.print();
	cout<<sxvaoba(c, b)<<endl;

}
