#include <iostream>

using namespace std;
int main(){
    int base, height;
    float area;
    cout<<"height = ";
    cin>>height;
    cout<<"base = ";
    cin>>base;

    area = (float)height * (float)base / 2;
    cout<<"area is = "<<area;

    return 0;
}
