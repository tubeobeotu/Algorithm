#include <iostream>
#include  <fstream>
#include  <string.h>
#include  <stdio.h>
#include  <stdlib.h>
#include <vector>

using namespace std;
//int s[111][111];
//int n;
//int cheochinh = 0, cheophu = 0, mincheochinh = 99999, mincheophu = 9999;
//void input()
//{
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            scanf("%d", &s[i][j]);
//        }
//    }
//}
//void output()
//{
//    cheochinh = 0, cheophu = 0, mincheochinh = 99999, mincheophu = 9999;
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            //duong cheo chinh
//            if (i == j) {
//                cheochinh = cheochinh + s[i][j];
//                if (mincheochinh > s[i][j]) {
//                    mincheochinh = s[i][j];
//                }
//            }
//            if (i+j == n - 1) {
//                cheophu = cheophu + s[i][j];
//                if (mincheophu > s[i][j]) {
//                    mincheophu = s[i][j];
//                }
//            }
//        }
//    }
//    printf("%d %d %d %d", cheochinh, mincheochinh, cheophu, mincheophu);
//}
//
//int trunghoc11()
//{
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j <= n/2; j++) {
//            if (s[i][j] != s[i][n-j-1]) {
//                return 0;
//            }
//        }
//    }
//    return 1;
//}
char a[111], b[111];
void input()
{
    scanf("%s", &a);
    scanf("%s", &b);
}
void solve()
{
    int count = 0;
    for (int i = 0; i < strlen(b); i++) {
         
    }
    return count;
}
void output()
{
    printf("%s %s\n", a, b);
}
int main(){
    freopen("input.txt","r",stdin);
    int ntest;
    scanf("%d",&ntest);
    
    for (int itest=0;itest<ntest;itest++){
        input();
        output();
        printf("\n");
    }
    
    return 0;
}