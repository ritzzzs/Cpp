/*
    create a class student with following 
 	a. data members = student_name, student_roll, student_age
	b. members functions = getName(), setName(), getAge(),setAge(),
				getRoll(),setroll, displaydetaols()
*/


#include<iostream>
using namespace std;
class Student{
    //data members
    public:
    string student_name;
    int student_roll;
    int student_age;

    //Member functions setName()-displaydetails()
    void setName(string n){
        student_name = n;
    }
    void setRoll(int roll){
        student_roll = roll;
    }
    void setAge(int age){
        student_age = age;
    }

    void displaydetails(){
        cout<<"Name = "<<student_name<<endl;
        cout<<"Roll no = "<<student_roll<<endl;
        cout<<"Age = "<<student_age<<endl;
    }
};
//main function
int main(){
    Student s;
    s.setName("Anahita Dhakal");
    s.setRoll(02);
    s.setAge(4);
    s.displaydetails(); 
}

