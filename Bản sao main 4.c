//
//  main.c
//  vi du 7.6
//
//  Created by kinty on 5/28/20.
//  Copyright © 2020 kinty. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int x;
    x=0;
    printf("enter choice (1-3):");
    scanf("%d",&x);
    if(x==1)
        printf("\n choice is 1");
    else if(x==2)
    printf("\nchoice is 2");
    else if(x==3)
        printf("\n choice is 3");
    else
        printf("\n invalid choice: invalid choice");
}
