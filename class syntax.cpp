#include <iostream>
using namespace std;

class ATM{
	long long int rs = 54814245854;
	public : void show(){
		cout<<"Your Balance is :"<< rs;
	}
};

int main(){
	ATM sbi;
	sbi.show();
}