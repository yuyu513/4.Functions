//  main.cpp Functions
//  Copyright © 2018年 鄭詠蓉. All rights reserved.

#include <iostream>//1-1.<找standard library>
using namespace std;
//#include "my_header.h" //1-2."找local資料夾"

/*2.Function definition
 return_type fun_name (para_list) {
 declaration; statements; return;
 }*/

//3-1.function definition
int square( int y )
{ return y*y/*呼應左上int*/; }

//3-2.function prototype
void print();
double maximum(double x, double y, double z);
//4.若放最後面 前面要先寫prototype告知程式
//5.xyz有沒有都可以 double maximum(double, double, double);
//6.function放前放後都可以但不能放中間
//7.關於資料結構以範例解說
//double maximum(int a, int b, int c) 可以(輸出資料完整)
//int maximum(double a, double b, double c) 不可以(輸出資料受損)

int main(){
    //平方
    for(int i=1; i<=10; i++)
        cout << square(i) << " ";//3-3.function call
    cout << endl;
    //比大
    double j;
    double k;
    double l;
    cout << "\nEnter three floating-point numbers:";
    cin >> j >> k >> l;
    cout << "The maximum is ";
    cout << maximum(j,k,l) << endl;
    //印Hi
    print();
    
    return 0;}//唯獨main中可不打

double maximum(double x, double y, double z){
    double max = x;
    if (y > max)
        max = y;
    if (z > max)
        max = z;
    return max;}

void print(){
    cout << "\nHi" << endl;
    return;}//可不寫也可放在中途當break用(break僅能跳出迴圈)
