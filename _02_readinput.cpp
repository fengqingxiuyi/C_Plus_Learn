//
// Created by shenBF on 2022/10/11.
//

#include "_02_readinput.h"
#include <iostream>
using namespace std;

// ::是域的解析符
void _02_readinput::readInput() {
    int number;

    cout << "Enter a decimal number:";
    cin >> number;
    cout << "The number you entered is " << number << "." << endl;
}