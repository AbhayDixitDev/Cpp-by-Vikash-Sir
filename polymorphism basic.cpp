Polymorphism is a programming concept that allows objects of different classes to be treated as objects 
of a common superclass. It enables a single interface to represent different underlying forms (data types). 
In the provided code, polymorphism is demonstrated through the use of virtual functions, allowing the msg() 
method to be overridden in derived classes (SBI and PNB). When the msg() function is called on a base 
class pointer (RBI *obj), the appropriate derived class method is executed based on the actual object type 
that obj points to, showcasing dynamic polymorphism.

#include <iostream>
using namespace std;

class RBI{
	public:
		virtual void msg(){
			cout<<"RBI CLASS\n";
		}
};

class SBI: public RBI{
	public:
		virtual void msg(){
			cout<<"SBI CLASS\n";
		}
};

class PNB: public RBI{
	public:
		virtual void msg(){
			cout<<"PNB CLASS\n";
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
