//
// Created by shenBF on 2022/10/11.
//

#ifndef C_PLUS__03_TICKETMACHINE_H
#define C_PLUS__03_TICKETMACHINE_H


class _03_ticketmachine {
public:
    _03_ticketmachine();
    virtual ~_03_ticketmachine();
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


#endif //C_PLUS__03_TICKETMACHINE_H
