#include <iostream>
using namespace std;

int fact(int number){
	if(number==1){
		return 1;
	}
	if(number<0){
		cout<<"you have entered negative number:";
		return 1;
	}
	number*fact(number-1);
	
}

int main(){
	int number=0;
	cout << "enter a number for table print : " ;
	cin >> number;	
	cout<<fact(number);
}