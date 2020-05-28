//
//  main.c
//  vi du 7.5
//
//  Created by kinty on 5/28/20.
//  Copyright © 2020 kinty. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char c;
    printf("please anter a character");
    scanf("%c",&c);
    if(c>='A'&&c<='Z')
        printf("lowercase character =%c", c+'a'-'A');
    else
        printf("character entered is = %c",c);
}
