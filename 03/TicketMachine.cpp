//
// Created by shenBF on 2022/10/12.
//

#include "TicketMachine.h"
#include <iostream>
using namespace std;

TicketMachine::TicketMachine(int balance) : PRICE(0) {
    TicketMachine::balance = balance;
    total = 0;
}

TicketMachine::~TicketMachine() {
    cout << "destructor TicketMachine";
}

void TicketMachine::showPrompt() {
    cout << "something";
}

void TicketMachine::insertMoney(int money) {
    balance += money;
}

void TicketMachine::showBalance() const {
    cout << "balance is " << balance << ".";
}

void TicketMachine::printTicket() {

}

void TicketMachine::showTotal() {

}


