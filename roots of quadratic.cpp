#include <iostream>
#include <cmath>

using namespace std;
int main(){

    int a, b, c, e;
    float D, x1, x2, d;
    cout<<"coff. of x^2 = "<<endl;
    cin>>a;
    cout<<"coff. of x = "<<endl;
    cin>>b;
    cout<<"constant = "<<endl;
    cin>>c;

    D = (b*b) - (4*a*c);

    if(D < 0){
        cout<<"roots are imaginary";
    }else{

        d = sqrt(D);
        e = 2*a;

        x1 = ((-1)*b + d ) / e;
        x2 = ((-1)*b - d ) / e;

        cout<<"1st root = "<<x1<<endl;
        cout<<"2nd root = "<<x2<<endl;
         if(!D){
             cout<<"roots are same";
         }else{
             cout<<"roots are different";
         }
    }

    return 0;
}
