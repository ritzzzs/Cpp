/*   create a class car with 
	a. data member = speed, cc, color
	b. member fuctions = start (), stop(),accerate()
*/

#include<iostream>
using namespace std;
class Car{
    public:
    float speed;
    int cc;
    string color;
    Car(float s, int c, string col){
        speed = s;
        cc = c;
        color = col;
    }
     void start(){
        cout<<color<< " color car is starting having cc "<<cc<<endl;
    }
    void accelerate(){
        speed+=20;
        cout<<"The car is accelerating with speed of "<<speed<<"m/s"<<endl;  
    }
    void stop(){
        cout<<"The car has stopped"<<endl;
    }
};

int main(){
    Car c(0,1500,"Black");
    c.start();
    c.accelerate();
    c.accelerate();
    c.stop();
    return 0;
}