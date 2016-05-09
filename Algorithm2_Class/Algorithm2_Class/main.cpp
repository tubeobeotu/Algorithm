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
    int n;
    freopen("LaBiec30.txt", "r", stdin);
    scanf("%d", &n);
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
    freopen("Labiec30.txt", "r", stdin);
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) {
            if (i == j)
            {
                printf("&");
            }
            else if (i + j == n - 1) {
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
void laBiec32()
{
    freopen("Labiec30.txt", "r", stdin);
    int n;
    scanf("%d", &n);
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
    int n;
    int sohinh;
    freopen("laBiec36.txt", "r", stdin);
    scanf("%d %d", &sohinh, &n);
    for(int i = 0; i < n * sohinh; i++)
    {
        for (int j = 0; j < n; j++) {
            if (i%n + j == (n-1) || (i%(n-1) == i/(n-1))) {
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
void laBiec37()
{
    int n;
    int sohinh;
    freopen("laBiec37.txt", "r", stdin);
    scanf("%d %d", &sohinh, &n);
    for(int i = 0; i <= n * (sohinh - 1) +1; i++)
    {
        for (int j = 0; j < n; j++) {
            bool check = false;
            if (i + j == ((i/(n-1))*(n-1)) + (n/2)) {
                check = true;
            }
            if (i + j == ((i/(n-1))*(n-1)) + n+1) {
                check = true;
            }
            if (abs(i - j) == ((i/(n-1))*(n-1)) + (n/2)) {
                check = true;
            }
            if (abs(i - j) == ((i/(n-1))*(n/2)) + (((i/(n-1))-1)*(n/2))) {
                check = true;
            }
            if (check == true) {
                printf("%d*", j);
            }
            else
            {
                printf(" ");
            }
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


int solveLaBiec6(int n, int multiples)
{
    if (n % multiples == 0) {
        return multiples;
    }
    return 0;
}
void laBiec6()
{
    int n;
    scanf("%d", &n);
    if (n > 1) {
        for (int i = 1; i < n; i++) {
            if (solveLaBiec6(n, i) != 0) {
                printf("%d ", i);
            }
        }
    }
}

int USCLN(int a, int b)
{
    a = abs(a);
    b = abs(b);
    if (a == 0 || b == 0)
        return a + b;
    while (a != b)
    {
        if(a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a;
}
void laBiec10()
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    int uscln = USCLN(a, b);
    printf("%d ", uscln);
    printf("%d", (a * b)/uscln);
}

void lacBiec14()
{
    int n;
    int count = 0;
    scanf("%d", &n);
    count = n/2;
    printf("%d\n", count);
    for (int i = 1; i <= n/2; i++) {
        printf("%d %d\n", n-i, i);
    }
}
void laBiec24()
{
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            printf("%4d", i*j);
        }
        printf("\n");
    }
}
void laBiec29()
{
    freopen("laBiec29.txt", "r", stdin);
    int n, step;
    scanf("%d", &n);
    scanf("%d", &step);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < (n*2); j++) {
            if (j >= i) {
                if (i+j <= (n*2)) {
                    printf("%d", step*i);
                }
                else
                {
                    printf(" ");
                }
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
void laBiec28()
{
    freopen("Labiec28.txt", "r", stdin);
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= (n-1)*2; j++) {
            if (j >= i) {
                if (i+j <= ((n-1)*2)) {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
void laBiecX()
{
    freopen("Labiec30.txt", "r", stdin);
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((j <= i && i+j < n) || (j >= i && i+j >= n-1)) {
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
void printF(int num, char character){
    for(int i = 0; i<num; i++){
        printf("%c",character);
    }
}
void laBiec35()
{
    freopen("Labiec35.txt", "r", stdin);
    int heigh, width, width1;
    scanf("%d %d %d", &heigh, &width, &width1);
    for (int i = 0; i < heigh; i++) {
        for (int j = 0; j < width; j++) {
            if (j % width1 == 0) {
                printf("*");
            }
            else
            {
                if (i == heigh - 1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
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
    laBiec37();
    return 0;
}


