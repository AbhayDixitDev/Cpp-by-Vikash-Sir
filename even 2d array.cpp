#include <iostream>
using namespace std;

int main(){

int arr[3][3];

cout<<"enter 9 value for array:\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"enter value:";
			cin>>arr[i][j];
		}
	}
	cout<<"Stored data:\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
		if(arr[i][j]%2==0){
		  cout<<arr[i][j]<<"\t";
		}
		else{
			cout<<"o"<<"\t";
		}
		}
		cout<<"\n";
	}	
}