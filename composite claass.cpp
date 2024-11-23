#include <iostream>
using namespace std;

class hacker{
	
		public:
		void hack(){
			cout<<"you got hacked";
		}
};

class user{
	hacker h1;
	public:
		void user1(){
			cout<<"you got bonus \n";
			h1.hack();
		}
		
};


int main(){
	user use;
	use.user1();
}