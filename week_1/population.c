#include "cs50.h"
#include <stdlib.h>
#include <stdio.h>
/****
 * population n llamas
 * each year n/3 new llamas are born and n/4 llamas die.
 * For example, if we were to start with n = 1200 llamas, then in the first year, 1200 / 3 = 400 new llamas would be born and 1200 / 4 = 300 llamas would pass away. 
 * At the end of that year, we would have 1200 + 400 - 300 = 1300 llamas.
****/
int main(void)
{
    int start;
    int end;
    int years=0;
    
    // population size must be greater than or equal to 9
    do
    {
        printf("enter the initial population number: (minimum population 9) \n");
        scanf("%d",&start);
    }
    while (start<9);
    
    // the final size of the population must be greater than or equal to the initial size
    do
    { 
        printf("enter a number greater than or equal to the initial population size \n",start);
        scanf("%d",&end);
    } 
    while (end<start);
    
    //number of years required for the population to reach at least the size of the end value

    while (start<end)
    {
        start= start+start/3 - start/4;
        years++;
    }
    printf("Years: %d\n",years);
    //print the result

    return 0;
}