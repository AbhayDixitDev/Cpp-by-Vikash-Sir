//pure virtual function: pure virtula fucntion is intialized by zero(0) , a class which contains pure virtual function is called
//abstract class, and we have to override the pure virtual function in each child class otherwise it will not allow to allocate the
//memory object of a child class.

#include <iostream>
using namespace std;

class RBI{
	public: virtual void helpdesk()=0;
};

class SBI: public RBI{
	public: void helpdesk(){
		cout<<"SBI HelpDesk!\n";
	}
	void loan(){
		cout<<"Interest rate 9%\n";
	}
};

class Axis: public RBI{
	public: void helpdesk(){
		cout<<"AXIS HelpDesk!\n";
	}
	void loan(){
		cout<<"Interest rate 12%\n";
	}
};

int main(){
	RBI *r;
	SBI s;
	s.loan();
	r=&s;
	r->helpdesk();
}