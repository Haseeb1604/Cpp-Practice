#include <iostream>
#include <windows.h>
# include <conio.h>
using namespace std;
class Car
{
  private:
    int year;
    string make;
    int speed;

  public:
    Car(int);
    int setSpeed();
    void accelerate();
    void brake();
    void validatespeed();
    void Display();
};
void Car::Display()
{
	cout<<speed;
}
int Car::setSpeed()
{
    return speed;
}
Car::Car(int year)
{
	this -> year = year;
	cout<<"Car Company : \n";
	cin>>make;
	speed = 0; 
}
void Car::accelerate()
{
    speed +=5;
}
void Car::brake()
{
    speed -=5;
    validatespeed();
}
void Car::validatespeed()
{
	if(speed<5)
	speed = 0;
	else
	speed;
}
int main ()
{
    int year;
    cout << "Enter the model year of the car.\n";
    cin >> year ;
    Car c(year);
    for(int i=0 ; i<5 ; i++)
    {
    	c.accelerate();
    	cout<<"Accelerating the Car\nThe Current Speed of The Car is : "; 
		c.Display();
		cout<<endl;
	}
	for(int i=0 ; i<5 ; i++)
    {
    	c.brake();
    	cout<<"Decelerating the Car\nThe Current Speed of The Car is : ";
		c.Display();
		cout<<endl;
	}
}
