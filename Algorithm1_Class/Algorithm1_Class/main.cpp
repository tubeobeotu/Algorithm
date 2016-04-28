//
//  main.cpp
//  Algorithm1_Class
//
//  Created by Techmaster on 4/28/16.
//  Copyright © 2016 Techmaster. All rights reserved.
//

#include <iostream>
#include <math.h>
int sum(int a, int b)
{
    return a + b;
}
void bai9()
{
    int n, gio, phut, giay, x;
    scanf("%d", &gio);
    scanf("%d", &phut);
    scanf("%d", &giay);
    scanf("%d", &n);
    x = (gio * 3600) + ((phut * 60)) + giay + n;
    gio = x/3600;
    phut = (x - gio * 3600) /60;
    giay = x - (gio * 3600) - (phut * 60);
    printf("%d %d %d\n", gio, phut, giay);
}
void ifFunc13()
{
    float diem;
    scanf("%f", &diem);
    if (diem >= 9)
    {
        printf("Xuat sac");
    }
    else if (diem >= 8)
    {
        printf("Gioi");
    }
    else if (diem >= 7)
    {
        printf("Kha");
    }
    else if (diem >= 6)
    {
        printf("TBKha");
    }
    else if (diem >= 5)
    {
        printf("TBinh");
    }
    else
    {
        printf("Yeu");
    }
}
void ifFunc14()
{
    int p1, p2, p3;
    scanf("%d", &p1);
    scanf("%d", &p2);
    scanf("%d", &p3);
    if (p1 > p2)
    {
        if (p1 > p3) {
            printf("%d", p1);
        }
        else
        {
            printf("%d", p3);
        }
    }
    else
    {
        if (p2 > p3)
        {
            printf("%d", p2);
        }
        else
        {
            printf("%d", p3);
        }
    }
}
void ifFunc15()
{
    int gio, luong, tong;
    scanf("%d", &gio);
    scanf("%d", &luong);
    if (gio > 40)
    {
        tong = ((gio - 40) * luong) * 2;
        tong = tong + (40*luong);
    }
    else
    {
        luong = gio * luong;
    }
    printf("%d\n", tong);
}
void ifFunc16()
{
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if (a < (b + c) && b < (a + c) && c < (a + b))
    {
        float p = (a + b + c) / 2.0;
        float s = sqrtf(p * (p - a) * (p - b) * (p - c));
        printf("%f", s);
    }
    
    
}
void ifFunc18()
{
    int a;
    scanf("%d", &a);
    if ( a >= 0)
    {
        if (a%2 == 0)
        {
            printf("so chan");
        }
        else
        {
            printf("so le");
        }
    }
    else
    {
        printf("a la so am");
    }
}
void ifFunc17()
{
    int p1, p2, p3;
    scanf("%d", &p1);
    scanf("%d", &p2);
    scanf("%d", &p3);
    
}

void forfunc1()
{
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    for (int i = a; i <= b; i++)
    {
        printf("%d\n", i);
    }
}
void forfunc2()
{
    int n, tong = 0;
    scanf("%d", &n);
    for (int i = 0; i <= 100; i++)
    {
        tong = tong + i;
    }
    printf("%d", tong);
}

int main(int argc, const char * argv[]) {
    // insert code here...
//    freopen("tenfile.txt", "r", stdin); // doc tu file
//    bai9();
    forfunc2();
    return 0;
}

