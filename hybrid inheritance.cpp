#include <iostream>
using namespace std;

class RBI{
	public:
		void f1(){
			cout<<"RBI\n";
		}
};

class SBI:public RBI{
	public:
		void f2(){
			cout<<"SBI\n";
		}
};

class AXIS:public RBI{
	public:
		void f3(){
			cout<<"AXIS\n";
		}
};

class Customer:public AXIS,public SBI{
	public:
		void f4(){
			cout<<"Customer\n";
		}
};

int main(){
	Customer c1;
//	c1.f1();
	c1.f2();
	c1.f3();
	c1.f4();
}