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
//484
//int dem[1111];
//bool flag[1111];
//std::vector<int> vect;
//void input ()
//{
//    freopen("484.inp", "r", stdin);
//    int n;
//    while (scanf("%d", &n) > 0) {
//        vect.push_back(n);
//    }
//    
//    
//}
//void solve()
//{
//    memset(dem, 0, sizeof(dem));
//    for (int i = 0; i < vect.size(); i++) {
//        int x = vect[i];
//        dem[x]++;//
//    }
//    
//    for (int i = 0; i < vect.size(); i++) {
//        int x = vect[i];
//        if (flag[x] == false) {
//            printf("%d %d\n", x, dem[x]);
//            flag[x] = 1;
//        }
//    }
//}


//10282
//char s[1111], a[1111], b[1111];
//map<string, string> m;
//void input()
//{
//    freopen("input.txt", "r", stdin);
//    while (gets(s) > 0) {
//        if (strlen(s) == 0)
//        {
//            break;
//        }
//        sscanf(s, "%s %s", &a, &b);
//        
//    }
//}
//void solve()
//{
//    
//}

//Bài: QUẢN LÝ SINH VIÊN (đặt tên bài là student.*)
//struct sinhvien
//{
//    char name[30];
//    int diem1;
//    int diem2;
//    int diem3;
//};
//sinhvien s[1111];
//int n;
//void input()
//{
//    scanf("%d\n", &n);
//    for (int i = 0; i < n; i++) {
//        gets(s[i].name);
//        scanf("%d %d %d\n", &s[i].diem1, &s[i].diem2, &s[i].diem3);
//    }
//}
//void solve()
//{
//    sinhvien svMax;
//    for ( int i = 0; i < n; i++) {
//        if (i == 0) {
//            svMax = s[i];
//        }
//        else
//        {
//            if ((svMax.diem1 + svMax.diem2 + svMax.diem3) < (s[i].diem1 + s[i].diem2 + s[i].diem3)) {
//                svMax = s[i];
//            }
//        }
//    }
//    printf("Name :%s\n", svMax.name);
//    printf("Total Point :%d", svMax.diem1 + svMax.diem2 + svMax.diem3);
//}

//10935
//int n;
//int s[11111];
//#define pb push_back
//void solve()
//{
//    int dau = 0;
//    int cuoi = n-1;
//    vector<int> discard;
//    while (dau < cuoi) {
//        int x = s[dau];
//        dau++;
//        discard.pb(x);
//        
//        //
//        x = s[dau];
//        dau++;
//        cuoi++;
//        s[cuoi] = x;
//    }
//    for (int i = 0; i < discard.size(); i++) {
//        printf("%d ", discard[i]);
//    }
//    printf("\n");
//    printf("%d\n", s[cuoi]);
//}
//void input()
//{
//    for (int i = 1; i <= n; i++)
//    {
//        s[i - 1] = i;
//    }
//    solve();
//}

//bracket
char s[11111];
int solve()
{
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        char c = s[i];
        if ()
    }
    return 1;
}
int main(int argc, const char * argv[]) {
    freopen("input.txt", "r", stdin);
    for (int i = 0; i < 5; i++) {
        scanf("%d", &n);
        input();
        printf("\n");
    }

    return 0;
}
