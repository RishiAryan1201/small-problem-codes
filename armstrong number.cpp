#include <iostream>
#include <maths.h>
using namespace std;
int main(){
    int n, sum=0, lastn;
    cin >> n;
    while(n>0){
        lastn=n%10;
        sum=sum + pow(lastn,3);
        n=n/10;
    }
    if( sum==n){
        cout<<"Armstrong number";
    }
    else{
        cout<<"not a Armstrong number";
    }
    return 0;
}