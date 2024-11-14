#include <iostream>
using namespace std;

int powr(int base, int power){
	
	if(base==0){
		return 0;
	}
	if(power==0){
		return 1;
	}
	return base*powr(base,power-1);
	
}


int main(){
	int base,power;
	cout<<"enter number and its power for calculation:";
	cin>>base>>power;	
	cout<<base << "^" << power << " is " << powr(base,power);
	
}