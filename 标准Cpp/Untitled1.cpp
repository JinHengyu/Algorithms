#include <iostream>
using namespace std;
class Base
{
public:
Base(int a):idata(a) {}
void print(){cout<<idata<<' ';}
private:
int idata;
};
class Derived: public Base
{
public:
Derived(int a, double b):Base(a)  ,ddata(b) { }
void print(){Base::print(); cout<<ddata<<' ';}
private:
double ddata;
};
int main(){
Derived d1(1, 2.3), d2(2, 4.6);
d1.print();
d2.print();
return 0;
}
