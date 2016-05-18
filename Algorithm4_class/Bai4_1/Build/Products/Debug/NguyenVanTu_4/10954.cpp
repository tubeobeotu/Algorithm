//
//  main.cpp
//  Bai4_1
//
//  Created by Techmaster on 5/12/16.
//  Copyright © 2016 Techmaster. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <map>
#include <queue>
using namespace std;

vector<int> s;
void sortArray()
{
    sort(s.begin(), s.end());
}
void input()
{
    s.clear();
    int x;
    int currentNumber;
    scanf("%d", &x);
    for (int i = 0; i < x; i++) {
        scanf("%d", &currentNumber);
        s.push_back(currentNumber);
    }
}
void solve()
{
    int currentNumber;
    int previousNumber = 0;
    int currentTotal = 0;
    for (int i = 0; i < s.size(); i++) {
        int subTotal = 0;
        currentNumber = s[i];
        if (i > 1) {
            subTotal = previousNumber + currentNumber;
            currentTotal = currentTotal + subTotal;
            previousNumber = subTotal;
        }
        else
        {
            currentTotal = previousNumber + currentNumber;
            previousNumber = currentTotal;
        }
    }
    printf("%d\n", currentTotal);
}

int main(int argc, const char * argv[]) {
    freopen("10954.inp", "r", stdin);
    int nTest;
    scanf("%d", &nTest);
    for (int i = 0; i < nTest; i++) {
        input();
        sortArray();
        solve();
    }
    
    return 0;
}
