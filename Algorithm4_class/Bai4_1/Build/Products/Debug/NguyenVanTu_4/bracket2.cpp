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

char s[11111];
char st[11111];

int solve(){
    int len = strlen(s);
    int top = 0;
    
    for (int i=0;i<len;i++){
        char c = s[i];
        
        if ( c == '(' || c == '{' || c == '['){    // push
            st[top] = c;
            top++;
        } else {    // )    // pop
            if (c == ')' && st[top - 1] != '(')
            {
                return 0;
            }
            if (c == '}' && st[top - 1] != '{')
            {
                return 0;
            }
            if (c == ']' && st[top - 1] != '[')
            {
                return 0;
            }
            top--;
            if ( top < 0)
                return 0;
        }
    }
    
    if ( top > 0)
        return 0;
    return 1;
}

int main(){
    freopen("bracket2.inp","r",stdin);
    
    while (scanf("%s",&s) > 0){
        printf("%d\n",solve());
    }
    
    return 0;
    
}
