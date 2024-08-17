#include <iostream>
using namespace std;
class Raja;
class Farhan{
    int money = 20000;
    friend void ashish(Farhan,Raja);
};
class Raja{
    int money = 10000;
    friend void ashish(Farhan, Raja);
};
void ashish(Farhan r1,Raja r2){
    cout<<"Money borrow "<<r1.money+r2.money;
}
int main(){
    Farhan obj1; Raja obj2;
    ashish(obj1,obj2);
    return 0;
}