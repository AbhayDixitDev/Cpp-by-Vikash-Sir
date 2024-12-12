// polymorphism

#include <iostream>
using namespace std;

class RBI{
	public:
		virtual void msg(){
			cout<<"RBI CLASS";
		}
};

class SBI: public RBI{
	public:
		virtual void msg(){
			cout<<"SBI CLASS";
		}
};

class PNB: public RBI{
	public:
		virtual void msg(){
			cout<<"PNB CLASS";
		}
};
int main(){
	RBI *obj;
	SBI s;
	RBI r;
	PNB p;
	obj=&s;
	obj->msg();
	obj=&r;
	obj->msg();
	obj=&p;
	obj->msg();
}
