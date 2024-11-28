#include <iostream>
using namespace std;
//parameterized constructor
class student{
	int code=1001;
	int pwd=2001;
	public:  //implicit calling / parameterized constructor
		student(){
			cout<<"default constructor\n";
		}
	 	student(int c,int p){
			if(code == c && pwd ==p){
				cout<<"welcome";
			}
			else{
				 cout<<"incorrect details";
			}
		}
};

int main(){
	int c;
	int p;
	cout<<"enter code and password";
	cin>>c;
	cin>>p;
	student k;    //constrcutor overloading
	student obj(c,p);  //constructrp overloading whom we call first will execute 
//	first in our case we have called default constuctor first then parameterized constructor
//	 that's why default's message shown in first then parameterized constructor
}