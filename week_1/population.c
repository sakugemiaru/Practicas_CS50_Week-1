#include "cs50.h"
#include <stdlib.h>
#include <stdio.h>
/****
 * population n flames
 * each year n/3 new llamas are born and n/4 llamas die.
 * si empezamos con n=1200 llamas, tendriamos 1200 + n/3 - n/4 = 1300 llamas
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