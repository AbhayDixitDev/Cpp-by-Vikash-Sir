#include <iostream>
using namespace std;
int sum;
void fact(int a){
   sum=1;
    while(a>0){
     sum=sum*a;
    	a--;	    	
	}
}
void display(){
	cout<<"factorial is "<<sum;
}	                 
	
int main(){	
	int num;
	cout<<"enter a number"<<endl;
	cin>>num;
	fact(num);
    display();
}
  
  
//  void fact(int &a){
//   int temp=a-1;
//    while(temp>0){
//    	
//    	a=a*temp;
//    	temp--;
//	}
//}
//	void display(int fact){
//	cout<<"factorial is "<<fact;
//}
//
//int main(){
//	int num;
//	cout<<"enter a number"<<endl;
//	cin>>num;
//	fact(num);
//	display(num);
//}