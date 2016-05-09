//
//  main.cpp
//  Algorithm3_class
//
//  Created by Techmaster on 5/9/16.
//  Copyright © 2016 Techmaster. All rights reserved.
//

#include <iostream>
//su dung gets getline khi string co dau space
//strlen, strcpy, strcat, strcmp
int s[6];
int kq[6];
int x;
void input()
{
    s[0] = 3;
    s[1] = 2;
    s[2] = 1;
    s[3] = 4;
    s[4] = 5;
    scanf("%d", &x);
}
void solve()
{
    memset(kq, 0, sizeof(kq));
    for (int i = 4; i >= 0; i--) {
        kq[i] = x/s[i];
        x = x - kq[i]*s[i];
        //kq[i] = x%s[i];
    }
    
}
void output()
{
    for (int i=0; i<5; i++) {
        printf("(%d) %d", s[i], kq[i]);
    }
    printf("\n");
}



//dem xem co bn so lon hon s[i]
//s[i] nho hon k - 1 so => output
//dem xem number nho hon bao nhieu phan tu khac
int doCount(int num)
{
    int dem = 0;
    for (int i = 0; i < 5; i++) {
        if (num < s[i]) {
            dem++;
        }
    }
    return dem;
}
void tieuhoc5()
{
    int k = 1;
    int count = 0;
    for (int i = 0; i < 5; i++) {
        count = doCount(i);
        if (count == k - 1) {
            printf("%d", s[i]);
        }
    }
    
   
}

void tieuhoc6()
{
    for (int i = 0; i < 5; i++) {
        
    }
}
//int doMaxNum(int num)
//{
//    int k = s[num];
//    for (int i = 0; i < num; i++) {
//        
//    }
//}
//
//void solveTieuhoc6()
//{
//    int k = 2;
//    
//}
int main(int argc, const char * argv[]) {
    freopen("tieuhoc5.txt", "r", stdin);
    
    int ntest;
    scanf("%d", &ntest);
    for (int i = 0; i < ntest; i++) {
        input();
        tieuhoc5();
    }
    return 0;
}
