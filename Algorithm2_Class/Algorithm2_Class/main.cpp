//
//  main.cpp
//  Algorithm2_Class
//
//  Created by Techmaster on 5/5/16.
//  Copyright © 2016 Techmaster. All rights reserved.
//

#include <iostream>
int isPrime(int number);
int giaithua(int x);
int isLeapYear(int year);
void doPrint()
{
    //%4, %100, != 400
    for (int i = 0; i <= 2016; i++) {
        if (isLeapYear(i)) {
            printf("%d\n", i);
        }
    }
}
int isLeapYear(int year)
{
    if (year % 4 != 0)
    {
        return 0;
    }
    if (year % 400 == 0) {
        return 1;
    }
    if (year % 100 == 0) {
        return 0;
    }
    return 1;
}
int labiec16(int x)
{
    int giaiThua = 1;
    for (int i = 1; i <= x; i++) {
        giaiThua = giaiThua * i;
    }
    return giaiThua;
}
int labiec16Cach2(int x)
{
    if (x == 1) {
        return 1;
    }
    return x * labiec16Cach2(x - 1);
}
int isPrime(int number)
{
    if (number < 2) {
        return 0;
    }
    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            return 0;
        }
    }
    return 1;
}
int tongCapSoCong(int x)
{
    
    return 1;
}




int n;
int s[111];
void input()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &s[i]);
    }
}
int checkcsc()
{
    int congSai = s[1] - s[0];
    for (int i = 1; i < n; i++) {
        if (congSai != s[i] - s[i - 1]) {
            return 0;
        }
    }
    return 1;
}
int checkDandau()
{
    for(int i = 1; i < n; i++)
    {
        if (s[i] * s[i -1] >= 0) {
            return 0;
        }
    }
    return 1;
}
void laBiec30()
{
    int n = 5;
    for(int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) {
            if (i + j == n - 1 || i == j) {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
void laBiec31()
{
    int n = 5;
    for(int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) {
            if (i == j)
            {
                printf("%d", n - i);
            }
            else if (i + j == n - 1) {
                printf("%d", n - i);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
void laBiec36()
{
    int n = 6;
    int sohinh = 3;
    for(int i = 0; i < n * sohinh - 1; i++)
    {
        for (int j = 0; j < n; j++) {
            //            if (i > n - 1)
            //            {
            //                if (i + j == (n * sohinh) - 2   || (i + 1) == n * sohinh - 1) {
            //                    printf("*");
            //                }
            //                else
            //                {
            //                    printf(" ");
            //                }
            //            }
            //            else
            //            {
//            int temp = i;
//            if (i > n) {
//                temp = i/sohinh;
//            }
            if (i + j == n - 1 || i == 0) {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            
            //            }
        }
        printf("\n");
    }
    
}
void laBiec39()
{
    int n = 4;
    int sohinh = 3;
    for(int i = 0; i < n ; i++)
    {
        
        for (int j = 0; j < n*4; j++) {
            int temp = j/n;
            if (i == j + temp || (i + j) / 2 == n - 1) {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            
            //            }
        }
        printf("\n");
    }
}
void solve()
{
    if (checkDandau() == 1) {
        printf("hehehe\n");
    }
    else
    {
        printf("ko phai cap so cong\n");
    }
}
int main(int argc, const char * argv[]) {
    
    //    int nTest;
    //    freopen("Labiec25.txt", "r", stdin);
    //    scanf("%d", &nTest);
    //    for (int iTest = 0; iTest < nTest; iTest++) {
    //        input();
    //        solve();
    //    }
    laBiec39();
    return 0;
}


