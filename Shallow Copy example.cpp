// Shallow Copy: shallow copy by default class having a shallow copy structure we need not it created
//it share the address of exist object to a new one

//syntax

#include <iostream>
using namespace std;

class name{
	int  a;
	public:
		name(int num){
			a=num;
		}
		
		void show(){
			cout<<a <<"\n";
		}
};

int main(){
	name obj1(50);
    name obj2(obj1);  //shallow copy is a example of object as a parameter
    obj1.show();
	obj2.show();
	}