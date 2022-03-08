/*
Author: Sakib Khan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Project 1D
Writes a calculator that can
understand squared numbers. 
*/

#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int next;
    char op;
    cin >> sum;
    if (cin.peek() == '^')
    //peek() retrieves next character
    {
        sum = sum * sum;
        cin.ignore();
    }
    while (cin >> op >> next)
    {
        if (cin.peek() == '^')
        {
            next = next * next;
            cin.ignore();
        }
        if (op == ';')
        {
            cout << sum << endl;
            sum  = next;
        }
        else if (op == '+')
            sum = sum + next;
        else if (op == '-')
            sum = sum - next;
    }
    cout << sum << endl;
    return 0;
}
