/*. create a class called employee with 
	a. data member = emp_id , emp_name, emp_salary
	b. member function = displaydetails()
 	note: 
		data members must be private 
		initialize data member using parameterized constructor 
*/

#include<iostream>
using namespace std;
class Employee{
    private:
    //data members
    int emp_id;
    string emp_name;
    float emp_salary;

    // Parameterized Constructor
    public:
    Employee(int id, string name, float salary){
        emp_id = id;
        emp_name = name;
        emp_salary = salary;
    }

    //Member function displaydetails
    void displaydetails(){
        cout<<"ID of employee:"<<emp_id<<endl;
		cout<<"Name of employee:"<<emp_name<<endl;
        cout<<"salary of employee:Rs "<<emp_salary<<endl;

    }

};

//main function
int main(){
    Employee e( 1, "Nirmi", 20000.00);
    e.displaydetails();
   return 0;
}

