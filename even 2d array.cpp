#include <iostream>
using namespace std;

int main(){

int arr[3][3];
int sum=0;
cout<<"enter 9 value for array:\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"enter value:";
			cin>>arr[i][j];
			sum+=arr[i][j];
		}
	}
	
	cout<<"Sum of data:"<<sum;
}