#include <iostream>
using namespace std;

int main() {
    int arr[]={1,2,0,5,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
        if(arr[i]==0){
            arr[i]=-1;
        }
    }
    cout<<"max is "<<max<<endl;
    cout<<"min is "<<min<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
