#include <iostream>
using namespace std;

// formula for salary is 
// total salary = basic + allowance + da + hra - pf
// hra = 20% of basic salary 
// da    = 50% of basic
// allow = 1700 if grade = ‘A’
// allow = 1500 if grade = ‘B’
// allow = 1300 if grade = ‘C' or any other character
// pf    = 11% of basic.

int salary( char grad , int bas){
    int allow;
    double salary, hra, da, pf;
    hra = 0.2 * bas;
    da = 0.5 * bas;
    pf = 0.11 * bas;
    if ( grad == 'A'){
        allow = 1700;
        salary = hra + da + allow + bas- pf;
    }
    else if ( grad == 'B'){
        allow = 1500;
        salary = hra + da + allow + bas- pf;
    }
    else{
        allow = 1300;
        salary = hra + da + allow + bas- pf;
    }
    round(salary);
    return salary;

}
int main(){
    int bas;
    cin>>bas;
    char grad;
    cin>>grad;
    cout<<salary(grad,bas)<<endl;
    return 0;
}