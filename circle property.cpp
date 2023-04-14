#include <iostream>

using namespace std;

int main() {
    int radius; // input variable
    float s_area, volume, PI; //output variable
    PI = (float)22/7; // using explicit conversion
    cout<<"radius of the circle is = "<<endl;
    cin>>radius;

    s_area = 4.0 * PI * radius * radius; 

    volume = (4.0/3) * PI * radius * radius * radius;

    cout<<"surface area of the circle is = "<<s_area<<endl;
    cout<<"volume of the circle is = "<<volume<<endl;

    return 0;
}