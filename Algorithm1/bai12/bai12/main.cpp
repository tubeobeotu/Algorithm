//
//  main.cpp
//  bai12
//
//  Created by Nguyễn Văn Tú on 4/28/16.
//  Copyright © 2016 Nguyễn Văn Tú. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%s\n", a == b ? "a bang b" : (a > b ? "a lon hon b" : "a nho hon b"));
    return 0;
}
