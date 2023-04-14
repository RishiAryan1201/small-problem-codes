# include <iostream>
using namespace std;

int main() {
    char a;
    float num1, num2;

    cout<<"Enter 1st number: ";
    cin>>num1;
    
    cout<<"Enter operators like ( +, -, *, /: )";
    cin>>a;

    cout<<"Enter 2nd nummber: ";
    cin>>num2;

    

    switch(a) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;

        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;

        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;

        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;
    }

    return 0;
}