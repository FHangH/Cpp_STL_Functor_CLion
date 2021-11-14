//
// Created by FHang on 2021/11/14 16:45
//
#include <iostream>
#include <functional>

using namespace std;

void demo1()
{
    negate<> negate1;
    cout << negate1(10) << endl;
}

void demo2()
{
    plus<> plus1;
    cout << plus1(10, 20) << endl;
}

int main()
{
    demo1();
    demo2();
    return 0;
}