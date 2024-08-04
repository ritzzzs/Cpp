/*
    write simple program to print "Hello world" in c++
*/
#include<iostream>
using namespace std;
class Hello{
public:
 void hello(){
    cout<<"Hello world!"<<endl;
 }
};
int main(){
    Hello h;
    h.hello();
    return 0;
}
