#include <iostream>
using namespace std;

inline double cube(const double side){
    return side*side*side;
}

int main(){
    double sideValue;
    sideValue=5;
    cout<<"Volume of cube with side "
    << sideValue << " is " << cube(sideValue) << endl;
}