//
//  main.c
//  vi du 7.7
//
//  Created by kinty on 5/28/20.
//  Copyright © 2020 kinty. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int x,y;
    x=y=0;
    printf("enter choice(1-3):");
    scanf("%d",&x);
    if(x==1)
    {
        printf("\n enter value for y(1-5):");
        scanf("%d",&y);
    if(y<=5)
        printf("\n the value for y is:%d",y);
        else
            printf("\n the value of y exceeds 5");
    }
    else
        printf("\n choice entered was not 1");
}
