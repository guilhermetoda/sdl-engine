//
//  test.cpp
//  SDLTest
//
//  Created by Guilherme Toda on 07/02/20.
//  Copyright © 2020 Guilherme Toda. All rights reserved.
//

#include <stdio.h>

int steps(int n) {
    int array[] = { 0, 1, -1, -4, -5, -3};
    return array[n % 6];
}

int main()
{
    printf("%d", steps(10000));
}
