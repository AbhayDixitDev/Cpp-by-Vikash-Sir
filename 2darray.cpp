#include <iostream>
using namespace std;

int main(){
	int arr[2][3]={};
	cout<<"enter 6 value for array:\n";
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			cout<<"enter value:";
			cin>>arr[i][j];
		}
	}
	cout<<"Stored data:\n";
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			cout<<arr[i][j]<<"\t";
		}
		cout<<"\n";
	}
}