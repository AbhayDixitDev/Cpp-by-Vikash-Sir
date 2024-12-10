//multiple inheritance

//in multiple inheritance we can inherit more than one class at a time 
// Diamond problem in a multiple inheritance there may be a diamond problem if both the inherit classes having the same signature 
//of function.


#include <iostream>
using namespace std;

class AXIS
{
	public: AXIS(){
		cout<<"AXIS MEMORY ALLOCATED\n";
	}
	void msg(){
		cout<<"AXIS\n";
	}
	~AXIS(){
		cout<<"AXIS MEMORY DEALLOCATED\n";
	}
};
class SBI
{
	public: SBI(){
		cout<<"SBI MEMORY ALLOCATED\n";
	}
	void msg(){
		cout<<"SBI client\n";
	}
	~SBI(){
		cout<<"SBI MEMORY DEALLOCATED\n";
	}
};

class customer:public SBI,public AXIS{
	public:
		customer(){
			cout<<"CUSTOMER MEMORY ALLOCATED \n";
		}
		void user(){
			cout<<"customer user\n";
		}
		~customer(){
			cout<<"CUSTOMER MEMORY DEALLOCATED \n";
		}
};

int main(){
	customer ob;
	ob.msg();
//	ob.user();
//	ob.server();
}