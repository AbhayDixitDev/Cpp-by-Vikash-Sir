//Destructor : It is used to de-allocate the memory of  occupied object 
// jitne object utne destructor

//syntax

//~classname(){
//	statement/code;
//}

#include <iostream>
using namespace std;


class top{
  int x=10;
  public:
  top(){
  	cout<<x;
  }
  ~top(){
  	cout<<"\nmemory released!";
  }	
};

int main(){
	top t1;
}