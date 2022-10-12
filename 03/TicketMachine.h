//
// Created by shenBF on 2022/10/12.
//

#ifndef C_PLUS_TICKETMACHINE_H
#define C_PLUS_TICKETMACHINE_H


class TicketMachine {
public:
    // https://blog.csdn.net/caroline_wendy/article/details/22727823
    // explicit 单参数构造函数时使用，可以防止隐式转换，导致函数的入口参数，出现歧义。
    explicit TicketMachine(int balance);
    // virtual 虚函数是指一个类中你希望重载的成员函数，当你用一个基类指针或引用指向一个继承类对象的时候，你调用一个虚函数，实际调用的是继承类的版本。
    // 虚函数最关键的特点是“动态联编”，它可以在运行时判断指针指向的对象，并自动调用相应的函数。
    virtual ~TicketMachine();
    // 静态函数不能被其它文件所用
    // 其它文件中可以定义相同名字的函数，不会发生冲突
    static void showPrompt();
    void insertMoney(int money);
    // const函数不能修改其数据成员
    void showBalance() const;
    void printTicket();
    void showTotal();
private:
    const int PRICE;
    int balance;
    int total;
};


#endif //C_PLUS_TICKETMACHINE_H
