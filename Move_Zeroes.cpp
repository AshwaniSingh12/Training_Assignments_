#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int j=0;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr[j++]=arr[i];
        }else{
            count++;
        }
    }
    for(int i=0;i<count;i++){
        arr[j++]=0;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}