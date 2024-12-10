//heirarchical inheritance : in heirarchical inheritance there is only one parent / root class and multiple children/node classes
// and each class inherits the property of root/parent class. 

//  |->u1  
//a |->u2
//  |->u3
  
//  server client architecture

#include <iostream>
using namespace std;

class root{
	public:
		root(){
			cout<<"constructor root class\n";
		}
		void show(){
			cout<<"welcome root\n";
		}
};

class uni1:public root{
	public:
		uni1(){
			cout<<"constructor uni1 class\n";
		}
		void msg(){
			cout<<"welcome uni1\n";
		}
};


class uni2:public root{
	public:
		uni2(){
			cout<<"constructor uni2 class\n";
		}
		void msg(){
			cout<<"welcome uni2\n";
		}
};

class uni3:public root{
	public:
		uni3(){
			cout<<"constructor uni3 class\n";
		}
		void msg(){
			cout<<"welcome uni3\n";
		}
};
int main(){
	
	uni1 ob1;
	uni2 ob2;
	uni3 ob3;
	ob1.show();
	ob1.msg();
	ob2.show();
	ob2.msg();
	ob3.show();
	ob3.msg();
	
}