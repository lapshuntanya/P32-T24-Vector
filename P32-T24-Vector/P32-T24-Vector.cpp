#include "MyArray.h"
#include <string>

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    //task1
    /*Array<int> a(10, 0); // 0 0 0 0 0 0 0 0 0 0
    Array<float> b(5, 9.99); //9.99 9.99 9.99 9.99 9.99
    Array<string> c(3, "hello itStep!"); //hello itStep! hello itStep! hello itStep!

    a.print();
    b.print();
    c.print();*/

    //task2
    vector<int> v1{ 4, 7, -5, 3, 6 };
    v1.push_back(-99);

    for (int i = 0; i < 4; i++) {
        v1.push_back(rand() % 50 - 25); //-25 +24
    }

    //-----------------------------------
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }cout << endl << endl;

    vector<int>::iterator it;
    for (it = v1.begin(); it != v1.end(); it++) {
        cout << *it << " ";
    }cout << endl << endl;

    for (int a : v1) {
        cout << a << " "; //копія значення кожної клітинки
    }cout << endl << endl;


    for (int& a : v1) {
        cout << a << " ";// посилання на кожну клітинку
    }cout << endl << endl;


    for (auto a : v1) { //auto = int
        cout << a << " "; //копія значення кожної клітинки
    }cout << endl << endl;
}