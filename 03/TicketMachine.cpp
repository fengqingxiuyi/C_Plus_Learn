//
// Created by shenBF on 2022/10/12.
//

#include "TicketMachine.h"
#include <iostream>
using namespace std;

TicketMachine::TicketMachine(int balance) : PRICE() { //: PRICE() 初始化数据的一种形式，优先于构造函数
    TicketMachine::balance = balance;
    total = 0;
}

TicketMachine::~TicketMachine() {
    cout << "destructor TicketMachine" << endl;
}

void TicketMachine::showPrompt() {
    cout << "something" << endl;
}

void TicketMachine::insertMoney(int money) {
    balance += money;
}

void TicketMachine::showBalance() const {
    cout << "balance is " << balance << "." << endl;
}

void TicketMachine::printTicket() {

}

void TicketMachine::showTotal() {

}


