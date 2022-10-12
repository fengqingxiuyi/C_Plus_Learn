//
// Created by shenBF on 2022/10/11.
//

#include "_00_main.h"
#include "_02_readinput.h"
#include "_03_ticketmachine.h"
extern void printHelloWorld(); // 暴露方法的第一种方式

int main() {
    printHelloWorld();
    _02_readinput::readInput(); // 暴露方法的第二种方式
    _00_main::case03();

    return 0; //0代表程序正常退出 1/-1代表程序异常退出
}

void _00_main::case03() {
    _03_ticketmachine tm;
    tm.insertMoney(100);
    tm.showBalance();
}