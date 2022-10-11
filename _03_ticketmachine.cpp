//
// Created by shenBF on 2022/10/11.
//

#include "_03_ticketmachine.h"
#include <iostream>
using namespace std;

_03_ticketmachine::_03_ticketmachine() : PRICE(0) {
    balance = 0;
    total = 0;
}

_03_ticketmachine::~_03_ticketmachine() {

}

void _03_ticketmachine::showPrompt() {
    cout << "something";
}

void _03_ticketmachine::insertMoney(int money) {
    balance += money;
}

void _03_ticketmachine::showBalance() {
    cout << "balance is " << balance << ".";
}

void _03_ticketmachine::printTicket() {

}

void _03_ticketmachine::showTotal() {

}

