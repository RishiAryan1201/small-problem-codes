#include <iostream>
using namespace std;
int main(){
    int n,i;
    int arr1[10];
    cin>>n;
    for(i=0;n>0;i++){
        arr1[i]=n%2;
        n=n/2;   
    }
    for(i=i-1; i>=0; i--){
        cout<<arr1[i]<<" ";
    } 
    return 0;
}