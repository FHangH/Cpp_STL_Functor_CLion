//
// Created by FHang on 2021/11/14 15:17
//
#include <iostream>

using namespace std;

// 函数对象在使用时，可以像普通函数那样调用，可以有参数，可以有返回值
class Fh_Add
{
public:
    int operator()(int value1, int value2)
    {
        return value1 + value2;
    }
};

// 函数对象超出普通函数的概念，函数对象可以有自己的状态
class Fh_Print
{
public:
    int transferCount;

    Fh_Print()
    {
        this->transferCount = 0;
    }

    void operator()(const string &printStr)
    {
        cout << printStr << endl;
        this->transferCount++;
    }
};

void demo1()
{
    Fh_Add fhAdd;
    cout << "Fh_Add>> " << fhAdd(1, 2) << endl;

    cout << endl;
}

void demo2()
{
    Fh_Print fhPrint;
    fhPrint("Hello World");
    fhPrint("Hello World");
    fhPrint("Hello World");
    cout << "Fh_Print Transfer Count>> " << fhPrint.transferCount << endl;

    cout << endl;
}

// 函数对象可以作为参数传递
void doPrint(Fh_Print &fhPrint, const string &printStr)
{
    fhPrint(printStr);
}

void demo3()
{
    Fh_Print fhPrint;
    doPrint(fhPrint, "Hello World");

    cout << endl;
}

int main()
{
    demo1();
    demo2();
    demo3();
    return 0;
}