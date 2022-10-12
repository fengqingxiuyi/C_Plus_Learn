//
// Created by shenBF on 2022/10/12.
//

#include "ReadInput.h"
#include <iostream>
using namespace std;

// ::是域的解析符
void ReadInput::readInput() {
    int number;

    cout << "Enter a decimal number:";
    cin >> number;
    cout << "The number you entered is " << number << "." << endl;
}
