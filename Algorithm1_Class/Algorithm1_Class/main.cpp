//
//  main.cpp
//  Algorithm1_Class
//
//  Created by Techmaster on 4/28/16.
//  Copyright © 2016 Techmaster. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
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
        tong = gio * luong;
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
void ifFunc17()
{
    int p1, p2, p3, max;
    scanf("%d", &p1);
    scanf("%d", &p2);
    scanf("%d", &p3);
    
    //tim max
    if (p1 > p2)
    {
        if (p1 > p3) {
            max = p1;
        }
        else
        {
            max = p3;
        }
    }
    else
    {
        if (p2 > p3)
        {
            max = p2;
        }
        else
        {
            max = p3;
        }
    }
    
    //in ra day so tang dan
    if (max == p1)
    {
        if (p2 > p3) {
            printf("%d %d %d", p3, p2, max);
        }
        else
        {
            printf("%d %d %d", p2, p3, max);
        }
    }
    else if (max == p2)
    {
        if (p1 > p3) {
            printf("%d %d %d", p3, p1, max);
        }
        else
        {
            printf("%d %d %d", p1, p3, max);
        }
    }
    else
    {
        if (p1 > p2) {
            printf("%d %d %d", p2, p1, max);
        }
        else
        {
            printf("%d %d %d", p1, p2, max);
        }
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
void ifFun19()
{
    freopen("choinon10.txt", "r", stdin);
    int soDien;
    scanf("%d", &soDien);
    float tienThueBao = 1000;
    float tongTien, tienVuotMuc1, tienVuotMuc2;
    if (soDien > 50)
    {
        tongTien = 50 * 230;
        float vuotDinhMuc = soDien - 50;
        if (vuotDinhMuc <= 50)
        {
            tongTien = tongTien + (vuotDinhMuc * 480);
        }
        else if (vuotDinhMuc < 100)
        {
            tienVuotMuc1 = tongTien + (50 * 480);
            tongTien = tongTien + tienVuotMuc1 + ((vuotDinhMuc - 50) * 700);
        }
        else if (vuotDinhMuc >= 100)
        {
            tienVuotMuc2 = tongTien + (50 * 480) + (49 * 700);
            tongTien = tongTien + tienVuotMuc2 + (vuotDinhMuc - 99 * 900);
        }
    }
    else
    {
        tongTien = soDien * 230;
    }
    tongTien = tongTien + tienThueBao;
    printf("tong tien:%f", tongTien);
    
}
void ifFunc20()
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    if (a == 0 && b != 0)
    {
        printf("phuong trinh da cho vo nghiem");
    }
    else if (b == 0)
    {
        printf("phuong trinh co vo so nghiem");
    }
    else
    {
        float x = 1.0 * -b/a;
        printf("phuong trinh co mot nghiem x = %f", x);
    }
    
}
void ifFunc21()
{
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    int D = b*b - 4*a*c;
    if(D < 0)
        printf("Phuong trinh da cho vo nghiem");
    else if(D == 0)
        printf("Phuong trinh da cho co nghiem kep x1 = x2 = %f", 1.0*-b/(2*a));
    else
    {
        printf("Phuong trinh da cho co 2 phan biet x1 = %f\n", (-b + sqrt(D))/(2*a));
        printf("va x2 = %f", (-b - sqrt(D))/(2*a));
    }
}


void forfunc0()
{
    int a;
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        printf("Vi du su dung vong lap for\n");
    }
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
    if (n <= 100)
    {
        for (int i = 1; i <= n; i++)
        {
            tong = tong + i;
        }
        printf("%d", tong);
    }
    else
    {
        printf("moi ban nhap n <= 100");
    }
    
}
void forfunc3()
{
    int a,b;
    if (a <= 100 && b <= 100)
    {
        scanf("%d", &a);
        scanf("%d", &b);
        for (int i = a; i <= b; i++)
        {
            if (i % 2 == 0)
            {
                printf("%d\n", i);
            }
        }
    }
    else
    {
        printf("moi ban nhap a va b <= 100");
    }
}
void forfunc4()
{
    int n, tong = 0;
    scanf("%d", &n);
    if (n <= 100)
    {
        for (int i = 0; i <= n; i++)
        {
            if (i % 2 == 1)
            {
                tong = tong + i;
            }
        }
        printf("%d", tong);
    }
    else
    {
        printf("moi ban nhap n <= 100");
    }
    
}
void forfunc5()
{
    int n, tong = 0;
    scanf("%d", &n);
    if (n <= 100)
    {
        for (int i = 0; i < n; i++)
        {
            int p1;
            scanf("%d", &p1);
            tong = tong + p1;
        }
        printf("%d", tong);
    }
    else
    {
        printf("moi ban nhap n <= 100");
    }
}
//chua xong
void labiec4()
{
    freopen("labiec4.txt", "r", stdin);
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int number;
        scanf("%d", &number);
        if (number % 10 != 0) {
            printf("%d ", number);
        }
        else
        {
            break;
        }
    }
    
    
    
}

void labiec11()
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    
    for (int row = 0; row < b; row++)
    {
        for (int col = 0; col < a; col++)
        {
            
            if (row == 0 || row == b - 1)
            {
                printf("*");
            }
            else if (col == 0 || col == a - 1)
            {
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
void labiec21()
{
    freopen("labiec21.txt", "r", stdin); // doc tu file
    int a, min, count, n;
    scanf("%d", &a);
    min = a;
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &n);
        if (min > n && n < 100)
        {
            min = n;
        }
    }
    freopen("labiec21.txt", "r", stdin);
    scanf("%d", &a);
    for (int i = 0; i < a; i++) {
        scanf("%d", &n);
        if (min == n)
        {
            count++;
        }
    }
    printf("%d %d", min, count);
}
void labiec23()
{
    int n, tong = 0;
    scanf("%d", &n);
    while (n > 0) {
        tong = tong + n%10;
        n = n/10;
    }
    printf("%d", tong);
}
void labiec27()
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    
    for (int row = 0; row < b; row++)
    {
        for (int col = 0; col < a; col++)
        {
            
            if (col == 0)
            {
                printf("*");
            }
            else if (row == b - 1)
            {
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
void labiec41()
{
    //    printf("%d,%d,%d,%d,%d", 0%3, 1%3, 2%3, 4%3, 5%3);
    freopen("labiec41.txt", "r", stdin);
    int a;
    scanf("%d", &a);
    for (int row = 0; row < a; row ++) {
        for (int col = 0; col < a + a/2; col++) {
            int tmpRow = row;
            if (row > a/2)
            {
                tmpRow = a - tmpRow - 1;
            }
            if (col < (tmpRow + 1) || (col > a - (tmpRow + 2) && col < a + tmpRow))
            {
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
void labiec7()
{
    freopen("labiec7.txt", "r", stdin);
    int a;
    scanf("%d", &a);
    for (int row = 0; row < a; row ++) {
        for (int col = 0; col < 2 * a; col++) {
            if ((col > a - (row + 2) && col < a + row))
            {
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
void labiec12()
{
    freopen("labiec12.txt", "r", stdin);
    int a;
    scanf("%d", &a);
    for (int i = 0; i < a; i++) {
        int n, count = 0;
        scanf("%d", &n);
        for (int j = 2; j < n; j++) {
            if (n % j == 0) {
                count++;
                break;
            }
        }
        if (count == 0 && n > 1) {
            printf("%d la so nguyen to\n", n);
        }
        else
        {
            printf("%d khong phai la so nguyen to\n", n);
        }
    }
}
void labiec15()
{
    freopen("labiec7.txt", "r", stdin);
    int a;
    scanf("%d", &a);
    for (int row = 0; row < a; row ++) {
        for (int col = 0; col < 2 * a -1; col++) {
            if (col == (a - row - 1) || col == (a + row - 1) || row == (a - 1))
            {
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
int main(int argc, const char * argv[]) {
    labiec23();
    return 0;
}

