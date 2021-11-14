//
// Created by FHang on 2021/11/14 16:09
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class DownSort
{
public:
    bool operator()(const int &value1, const int &value2)
    {
        return value1 > value2;
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
    vector<int> v;
    for (int i = 1; i < 6; ++i)
    {
        v.push_back(i);
    }
    printVector(v);

    sort(v.begin(), v.end(), DownSort());
    printVector(v);
}

int main()
{
    demo();
    return 0;
}