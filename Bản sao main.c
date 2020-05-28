//
//  main.c
//  vi du 7.3
//
//  Created by kinty on 5/28/20.
//  Copyright © 2020 kinty. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
   {

   int year;

printf("\nplease enter a year");

scanf("%d", &year);

if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)

    printf("\n%d is a leap year", year);
   }
}
