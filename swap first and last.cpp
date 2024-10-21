//w.a.p to swap first and last value of an array?
#include <iostream>
using namespace std;

int main(){
	int arr[]={1,5,7,8,9,4,5,6,2};
	int s=sizeof(arr)/sizeof(arr[0]);
	

		int temp=arr[0];
	    arr[0]=arr[s-1];
	    arr[s-1]=temp;

	for(int i=0;i<s;i++){
		cout<<arr[i];
	}
}
