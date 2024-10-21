//w.a.p to find Armstrong number in an array.

#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int arr[]={1,5,250,450,153,370,371,541};
	int s=sizeof(arr)/sizeof(arr[0]);
	
	for(int i=0;i<s;i++){
		int count=1;
		int temp=arr[i];
		while(temp>10){
			temp=temp/10;
			count++;
		}
//		cout<<count<<" ";
		temp=arr[i];
		
		int sum=0;
		while(temp>=1)
		{
			int temp1=temp%10;
			sum=sum+pow(temp1,count);
			temp=temp/10;			
		}
		if(sum==arr[i]){
			cout<<arr[i]<<" is a armstrong number"<<endl;
		}
		else{
			cout<<arr[i]<<" is not a armstrong number"<<endl;
		}
		
	}
}

