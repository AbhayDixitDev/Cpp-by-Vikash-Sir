#include <iostream>
using namespace std;

int sqr(int a){
	if(a>=0 || a<0)
	{
		return a*a;
	}
	else{
		cout<<"invalid input";
	}
}

int main(){
	int num;
	cout<<"enter a number"<<endl;
	cin>>num;
	cout<<"square root of "<<num<<" is "<<sqr(num);
}