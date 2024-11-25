#include <iostream>
using namespace std;


class task{
	public:
		void fact(int);
		void cube(int);
};

void task::fact(int n){
	int fact=1;
	for(int i=n;i>0;i--){
		fact=fact*i;
	}
	
	cout<<"factorial of number is:"<<fact<<endl;
	
}

void task::cube(int n){
	int cube=1;
	for(int i=3;i>0;i--){
		cube=cube*n;
	}
	
	cout<<"cube of number is:"<<cube<<endl;
	
}




int main(){
	int n;
	cout<<"enter a number to find its fact and cube:";
	cin>>n;
	task t1;
	t1.fact(n);
	t1.cube(n);
}