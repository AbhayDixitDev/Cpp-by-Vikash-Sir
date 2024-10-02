//Q.1 W.A..P to display only unique value in an array?
//Q.2 W.A..P.   to  only  display the prime values in an array?
//Q.3 W.A.P.  to finding single  missing number in a consecutive value in an array?
//Q.4 W.A.P. to display the sum of alternate values of an array?
//Q.5 W.A.P.  to find square root of valid number in an array?
//Q.6 W.A.P.  to display array in ascending orders?
//Q.7 W.A.P. to display array in descending order?
//Q.8 W.A.P. to shift all zero at the end but relative order should be maintained?
//Ex: arr={2,4,0,9,0,7}
//Output:{2,4,9,7,0,0}


#include <iostream>
using namespace std;
int main(){
	int arr[]={2,4,0,9,0,7};
	int len=sizeof(arr)/sizeof(arr[0]);
	int count=0;
	for(int i=0;i<len;i++){
		if(arr[i]>0){
			cout<<arr[i]<<" ";
			count++;
		}		
	}
	for(int i=count;i<len;i++){
		cout<<"0 ";
	}
	
	
}