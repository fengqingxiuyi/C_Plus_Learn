//
// Created by shenBF on 2022/10/11.
//

#include "_02_readinput.h"
extern void printHelloWorld(); // 暴露方法的第一种方式

int main() {
    printHelloWorld();
    _02_readinput::readInput(); // 暴露方法的第二种方式
}