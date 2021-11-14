//
// Created by FHang on 2021/11/14 15:46
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Fh_FindIf
{
public:
    bool operator()(const int &value)
    {
        return value > 5;
    }
};

void printVector(const vector<int> &other)
{
    for (int it : other)
    {
        cout << it << " ";
    }
    cout << endl;
}

void demo()
{
    vector<int> vector1;
    vector1.reserve(10);

    for (int i = 0; i < 10; ++i)
    {
        vector1.push_back(i);
    }

    printVector(vector1);

    auto it = find_if(vector1.cbegin(), vector1.cend(), Fh_FindIf());
    if (it == vector1.end())
    {
        cout << "Can Not Find" << endl;
    }
    else
    {
        cout << *it << endl;
    }
}

int main()
{
    demo();
    return 0;
}