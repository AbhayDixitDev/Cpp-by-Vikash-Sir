// Constructor 
// Constructor allocates the memory of an object of a class by default constructor exist in each & every class 
//there are two types of constructor 
//1)default constructor // name same as class name and there will be no parameter within constructor
#include <iostream>
using namespace std;
class student{
	public:student(){
		cout<<"constructor";
	}
};
int main()
{
	student t;
	cout<<sizeof(t);
}





//2)Parameterized Constructor
//3)Copy Constructor: 1)shallow copy 2) deep copy


//Destructor
// it is used to deallocate the memory of an object of a class at run time after using it. 

 