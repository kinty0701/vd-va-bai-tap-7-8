//
//  main.c
//  vi du 7.4
//
//  Created by kinty on 5/28/20.
//  Copyright © 2020 kinty. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num, res;
    printf("enter a number:");
    scanf("%d",&num);
    res=num%2;
    if(res==0)
    printf("the number is even");
    else
        printf("the number is odd");
    }

