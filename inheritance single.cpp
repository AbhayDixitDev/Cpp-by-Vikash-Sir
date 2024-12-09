//single inheritance:
//	in single inheritence there are two classes 
//	first class is called parent class
//	second class is called child class
//	firsr class which provides property of its to child class is called parent class
//	second class which inherits property of parent class is called child class
//	and we create the object of child class
//	and with the help of it we can access the data member and member function of both classes


//class ParentClass {
//	...  
//};
//
//class ChildClass: public parentClass{
//	
//};
//
//int main(){
//	childClass  obj;
//	obj
//}



#include <iostream>
using namespace std;

class RBI
{
	public: RBI(){
		cout<<"RBI MEMORY ALLOCATED\n";
	}
	void server(){
		cout<<"RBI\n";
	}
};
class SBI:public RBI
{
	public: SBI(){
		cout<<"SBI MEMORY ALLOCATED\n";
	}
	void client(){
		cout<<"SBI\n";
	}
};

int main(){
	SBI obj;
	obj.client();
	obj.server();
}