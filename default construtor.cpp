#include <iostream>
using namespace std;

class student{
	public:  //implicit calling / default constructor
		student(){
			cout<<"default constructor";
		}
};

int main(){
	student obj;
}