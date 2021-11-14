//
// Created by FHang on 2021/11/14 16:58
//
#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>

using namespace std;

void printVector(const vector<int> &v)
{
    for (int it : v)
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

    sort(v.begin(),  v.end(), greater<>());
    printVector(v);
}

int main()
{
    demo();
    return 0;
}