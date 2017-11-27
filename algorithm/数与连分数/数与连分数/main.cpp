//
//  main.cpp
//  数与连分数
//
//  Created by saber on 2017/11/27.
//  Copyright © 2017年 saber. All rights reserved.
//

#include <iostream>
using namespace std;

int gcd(int x,int y){
    int z = x % y;
    while (z) {
        x = y;
        y = z;
        z = x%y;
    }
    
    return y;
}

int main(int argc, const char * argv[]) {
    
    return 0;
}
