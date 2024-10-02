// Q.6 W.A.P.  to display array in ascending orders?

#include<iostream>
using namespace std;

int main(){
    int arr[]={2,4,1,9,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

