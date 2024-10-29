#include <iostream>
using namespace std;
float supply(float demand){
	float rate=106.7;
	return rate*demand;
}

int main(){
	float demand;
	cout<<"Enter required amount of patrol in littre:";
	cin>>demand;
	cout<<"dealer your bill is: "<<supply(demand)<<endl;
	float cdemand;
	cout<<"Enter required amount of patrol in littre:";
	cin>>cdemand;
	cout<<"User your bill is: "<<supply(cdemand)+(cdemand*5)<<endl;
	
}
