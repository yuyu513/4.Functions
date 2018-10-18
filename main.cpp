//  Dice.cpp Dice
//  Copyright © 2018年 鄭詠蓉. All rights reserved.

#include <iostream>
#include <iomanip> //include setw
#include <cstdlib> //include rand
using namespace std;

void Dice();
void BigData();

int main()
{
//    Dice();
    BigData();
}

void Dice()
{
    for(int counter = 1; counter<=20; counter++)
    {
        //pick 1~6
        cout << setw(10) << (rand()%6 +1);
        if(counter % 5 == 0)
            cout << endl;
    }
}

void BigData()
{
    int fre1 = 0;
    int fre2 = 0;
    int fre3 = 0;
    int fre4 = 0;
    int fre5 = 0;
    int fre6 = 0;
    int face;
    
    for(int roll = 1; roll <= 6000000; roll++)
    {        face = (rand()%6 +1);
    switch(face)
        {
        case 1:
            ++fre1;
            break;
        case 2:
            ++fre2;
            break;
        case 3:
            ++fre3;
            break;
        case 4:
            ++fre4;
            break;
        case 5:
            ++fre5;
            break;
        case 6:
            ++fre6;
            break;
        default:
            cout << "Impossible!" << endl;
        }
    }
    cout << "Face" << setw(13) << "Frequency" << endl;
    cout << "   1" << setw(13) << fre1
       << "\n   2" << setw(13) << fre2
       << "\n   3" << setw(13) << fre3
       << "\n   4" << setw(13) << fre4
       << "\n   5" << setw(13) << fre5
       << "\n   6" << setw(13) << fre6 << endl;
}
