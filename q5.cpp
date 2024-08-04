/*define a class bank to represent bank account with 
	a. data members = depositer_name, account_number, account_type(as static)
			account_balance
	b. member functions = withdrawAmount(),depositAmount()
	c. Friend function = displayDetails () to display the details.
*/

#include<iostream>
using namespace std;
class Bank{
    private:
    string depositer_name;
    static string account_type;
    double account_balance;
    friend void displaydetails(Bank b);

    public:
    Bank(string name, double balance){
        depositer_name = name;
        account_balance = balance;
    }

    void withdrawAmount(double amount){
    if(amount>0 && amount <= account_balance){
        account_balance-=amount;
        cout<<"withdraw successful remaining balance="<< account_balance<<"\n"<<endl;
    }
    else{
        cout<<"insufficient balance\n"<<endl;
    }
}

void deposit(double amount){
    if( amount>0){
        account_balance +=amount;
        cout<<"Deposited Rs "<< amount << " Successfully\n"<<endl;
    }
    else{
        cout<<"Please enter valid amount to deposit\n"<<endl;
    }
}
};
string Bank::account_type = "Savings"; 

void displaydetails(Bank b){
    cout<<"Depositer name ="<<b.depositer_name<<endl;
    cout<<"Account type ="<<Bank::account_type << endl;
    cout<<"Account balance = "<<b.account_balance<<"\n"<<endl;
}
int main(){
    Bank b(" Rakshyak", 900000);
    displaydetails(b);
    b.deposit(75000);
    b.withdrawAmount(15000);
    return 0;
}
