#include <iostream>
using namespace std;
int main(){
    int n, lastn;
    int reversen = 0;
    cin>>n;
     while(n>0){
         int lastn = n%10;
         reversen= reversen*10+lastn;
         n = n/10; 
     }
     cout<<reversen;
    return 0;
}