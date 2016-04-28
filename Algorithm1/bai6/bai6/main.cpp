//
//  main.cpp
//  bai6
//
//  Created by Nguyễn Văn Tú on 4/28/16.
//  Copyright © 2016 Nguyễn Văn Tú. All rights reserved.
//

#include <iostream>
#include <stdio.h>
int main(int argc, const char * argv[]) {
    int p1;
    float pi = 3.14;
    scanf("%d", &p1);
    if (p1 < 0)
    {
        printf("Ban da nhap so am");
    }
    else
    {
        printf("dien tich hinh tron co ban kinh %d la: %f", p1, pi*p1*p1);
    }
    getchar();
    return 0;
}
