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
char s[1000];

struct cmp
{
    bool operator()(string s1, string s2)
    {
        return s1 > s2;
    }
};
priority_queue<string, vector<string>, cmp> pq;

void input()
{
    while (gets(s) > 0) {
        pq.push(s);
    }
    
}
int wordCount(string word)
{
    int count = 0;
    while (!pq.empty()) {
        string currentString = pq.top();
        if (currentString != word)
        {
            return count;
        }
        count++;
        pq.pop();
    }
    return count;
}
void solve()
{
    float tongCay = pq.size();
    while (!pq.empty()) {
        printf("%s ", pq.top().c_str());
        printf("%3.4f\n", 100.0*wordCount(pq.top())/tongCay);
    }
}

int main(int argc, const char * argv[]) {
    freopen("10226.inp", "r", stdin);
    input();
    solve();
    return 0;
}
