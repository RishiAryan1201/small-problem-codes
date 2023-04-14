#include <iostream>
using namespace std;
int main(){
    int N;
    cout<<"prime numbers between 1 to ";
    cin>>N;
    for(int n=2;n<N;n++){
        for(int i=2; i<=n; i++){
            if(i==n){
                cout<<n<<" ";
            }            
            if((n%i)==0){
                break;
            }
            else
            continue;
        }
    }
    return 0;
}