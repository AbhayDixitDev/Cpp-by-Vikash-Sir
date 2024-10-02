// Q.8 W.A.P. to shift all zero at the end but relative order should be maintained?
// Ex: arr={2,4,0,9,0,7}
// Output:{2,4,9,7,0,0}

#include<iostream>
using namespace std;

int main(){
    int arr[]={2,4,0,9,0,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            for(int j=i+1;j<n;j++){
                if(arr[j]!=0){
                    swap(arr[i],arr[j]);
                    break;
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
