//
// Created by shenBF on 2022/10/12.
//

#include "main.h"
#include "ReadInput.h"
#include "TicketMachine.h"
extern void printHelloWorld(); // 暴露方法的第一种方式

int main() {
    printHelloWorld();
    ReadInput::readInput(); // 暴露方法的第二种方式
    main::case03();

    return 0; //0代表程序正常退出 1/-1代表程序异常退出
}

void main::case03() {
    TicketMachine tm(10);
    TicketMachine::showPrompt();
    tm.insertMoney(100);
    tm.showBalance();
}