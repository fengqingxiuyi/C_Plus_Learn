//
// Created by shenBF on 2022/10/13.
//

#include "Friend.h"
// Declaration ( incomplete type specification ):
struct X; // 前向声明，没有{}

struct Y {
    void f(X*);
};

struct X { // Definition
private:
    int i;
public:
    void initialize();
    friend void g(X*, int); // Global friend
    friend void Y::f(X*); // Struct member friend
    friend struct Z; // Entire(整个的) struct is a friend
    friend void h();
};

void X::initialize() {
    i = 0;
}

void g(X* x, int i) {
    x -> i = i;
}

void Y::f(X* x) {
    x -> i = 47;
}

struct Z {
private:
    int j;
};

void h() {

}