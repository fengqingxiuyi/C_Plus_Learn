//
// Created by shenBF on 2022/10/12.
//

#ifndef C_PLUS_TICKETMACHINE_H
#define C_PLUS_TICKETMACHINE_H


class TicketMachine {
public:
    TicketMachine();
    virtual ~TicketMachine();
    void showPrompt();
    void insertMoney(int money);
    void showBalance();
    void printTicket();
    void showTotal();
private:
    const int PRICE;
    int balance;
    int total;
};


#endif //C_PLUS_TICKETMACHINE_H
