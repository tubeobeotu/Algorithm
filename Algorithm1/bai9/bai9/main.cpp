//
//  main.cpp
//  bai9
//
//  Created by Nguyễn Văn Tú on 4/28/16.
//  Copyright © 2016 Nguyễn Văn Tú. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    int oddSum = 0;
    int evenSum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (i%2 == 0)
        {
            //so chan
            evenSum = i + evenSum;
        }
        else
        {
            //so le
            oddSum = i + oddSum;
        }
    }
    printf("Tong cac so le tu 1 -> %d la: %d\n", n, oddSum);
    printf("Tong cac so chan tu 1 -> %d la: %d\n", n, evenSum);
    return 0;
}
