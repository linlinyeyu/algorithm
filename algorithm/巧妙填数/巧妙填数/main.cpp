//
//  main.cpp
//  巧妙填数
//
//  Created by saber on 2017/11/26.
//  Copyright © 2017年 saber. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;
int k = 0;

void countNum(int a[],int num){
    int f = 100;
    while (f > 0) {
        a[k] = num/f%10;
        k++;
        f /=10;
    }
}

bool judge(int a[]){
    for (int m=0; m<10; m++) {
        for (int n=m+1; n<10; n++) {
            if (a[n] == 0) {
                return true;
            }
            if (a[m] == a[n]) {
                return true;
            }
        }
    }
    return false;
}

int main(int argc, const char * argv[]) {
    for (int i = 101; i<334; i++) {
        int a[10];
        int x = i*1,y = i*2,z = i*3;
        countNum(a,x);
        countNum(a,y);
        countNum(a,z);
        if (!judge(a)) {
            cout<<x<<" "<<y<<" "<<z<<endl;
        }
        k = 0;
    }
    return 0;
}
