//
// Created by FHang on 2021/11/14 17:43
//
#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>
#include <ctime>

using namespace std;

void printVector(const vector<bool> &v)
{
    for (bool it : v)
    {
        cout << it << " ";
    }
    cout << endl;
}

void demo()
{
    vector<bool> v1;
    for (int i = 1; i < 5; ++i)
    {
        v1.push_back(rand()%2);
    }

    printVector(v1);

    vector<bool> v2;
    v2.resize(v1.size());

    transform(v1.begin(), v1.end(), v2.begin(), logical_not<bool>());
    printVector(v2);
}

int main()
{
    srand((unsigned int)time(NULL));
    demo();
    return 0;
}