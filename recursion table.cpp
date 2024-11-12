#include <iostream>
using namespace std;

void table( int number, int start=1){
	if( start > 10 ){
		return;
	}	
	cout << number * start++ << endl ;
	table( number , start );	
}

int main(){
	int number=0;
	cout << "enter a number for table print : " ;
	cin >> number;	
	table( number );
}