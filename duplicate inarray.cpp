//w.a.p. to display only duplicate value in an array?

#include <iostream>
using namespace std;

int main(){
	int arr[]={1,5,4,5,8,6,4,7,8,6};
	int s=sizeof(arr)/sizeof(arr[0]);
	
	for(int i=0;i<s;i++){
		for(int j=0;j<i;j++){
			if(arr[i]==arr[j]){
				cout<<arr[i]<<" ";
				break;
			}
		}
	}
}
