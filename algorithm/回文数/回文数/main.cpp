//
//  main.cpp
//  回文数
//
//  Created by saber on 2017/11/22.
//  Copyright © 2017年 saber. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>

using namespace std;

string x;
int n,a[10000],step=1;
long len;

int pdhw(long length)
{
    for (int i = 1; i <= length / 2; i++)
        if (a[i] != a[length - i + 1])
            return 0;
    return 1;
}

long judge(long length)
{
    int c[10001] = { 0 }, s = 1;
    for (long i = 1; i <= length; i++)
    {
        c[i] = a[i] + a[length - i + 1] + c[i];
        c[i + 1] += c[i] / n;
        c[i] %= n;
    }
    if (c[length + 1] != 0)
        length++;
    for (long i = length; i >= 1; i--)
    {
        a[s] = c[i];
        s++;
    }
    return length;
}

int main() {
    cin >> n >> x;
    len = x.length();
    for (int i = 1; i <= x.length(); i++)
    {
        if (x[i - 1] < 65) {
            a[i] = x[i - 1] - '0';
        }
        else {
            a[i] = x[i - 1] - 55;
        }
    }
    while (step < 30) {
        if (pdhw(len) == 1)
        {
            cout << "STEP=" << step - 1;
            return 0;
        }
        step++;
        len = judge(len);
    }
    cout << "Impossible!";
    
    return 0;
}

