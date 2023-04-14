#include <iostream>
#include <cmath>

using namespace std;
int main (){
    int x1, x2, x3, y1, y2, y3;
    float a, b, c, s, area;
    //coordinate of 1st point x1 and y1
    //coordinate of 2st point x2 and y2
    //coordinate of 3st point x3 and y3
    // a = 2-1
    // b = 3-2
    // c = 1-3
    cout<<"coordinates of 1st point (x and y respectivly) "<<endl;
    cin>>x1;
    cin>>y1;
    cout<<"coordinates of 2nd point (x and y respectivly) "<<endl;
    cin>>x2;
    cin>>y2;
    cout<<"coordinates of 3rd point (x and y respectivly) "<<endl;
    cin>>x3;
    cin>>y3;

    a = sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    b = sqrt(pow((x2-x3),2)+pow((y2-y3),2));
    c = sqrt(pow((x3-x1),2)+pow((y3-y1),2));
    s= (a+b+c)/2;
    cout<<a<<endl<<b<<endl<<c<<endl<<s<<endl;

    area = sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<area<<endl;

    if (!area){
        cout<<"points are collinear";
    }else{
        cout<<"points are not collinear";
    }
 return 0;   
}
