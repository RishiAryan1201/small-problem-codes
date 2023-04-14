#include <iostream>

using namespace std;

int main(){
    int i;
    cout<<"give your number"<<endl;
    cin>>i;

    if( i == 0){
        cout<<"its even";
    }else if (i%2 == 0){
        cout<<"its even";
    }else{
        cout<<"its odd";
    }
    return 0;
}