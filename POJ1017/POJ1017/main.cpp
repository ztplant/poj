//
//  main.cpp
//  POJ1017
//
//  Created by MockingJ on 2017/7/11.
//  Copyright © 2017年 MockingJ. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int N, a , b, c, d, e, f ;
    
    int bofc[4] = {0, 5, 3, 1};
    
    while(1){
        cin >> a >> b >> c >> d >> e >> f ;
        if (a == 0 && b == 0 && c == 0 && d == 0 && e == 0 && f == 0) break;
        N = f + e + d + (c+3)/4;
        int eb = 5*d + bofc[c % 4];
        if (b > eb) N += (b - eb + 8) / 9 ;
        int ea = 36*N - 36*f - 25*e - 16*d - 9*c - 4*b;
        if (a > ea) N += (a - ea + 36) / 36;
        cout << N << endl;
    }
    
    return 0;
}
