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
using namespace std;
map <string, string> account;
int n;
void input()
{
    scanf("%d\n", &n);
    for (int i = 0; i < n; i++) {
        char s[45];
        char user[20];
        char password[20];
        gets(s);
        sscanf(s,"%s %s\n", &user, &password);
        account[user] = password;
    }
}
void solve()
{
    scanf("%d\n", &n);
    for (int i = 0; i < n; i++)
    {
        char s[45];
        char user[20];
        char password[20];
        gets(s);
        sscanf(s,"%s %s\n", &user, &password);
        if (account.find(user) == account.end())
        {
            printf("0\n");
        }
        else if (account[user] == password)
        {
            printf("1\n");
        }
        else
        {
            printf("0\n");
        }
        
    }
}
int main(int argc, const char * argv[]) {
    freopen("login.inp", "r", stdin);
    input();
    solve();
    return 0;
}
