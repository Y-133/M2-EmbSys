#include "fo.h"
#include<stdio.h>
#include <stdlib.h>

int main ()
{
 
   struct add ; 
 
    border();
    printf("\n\t\t CashFlow Calculator\n");
    border();

    printf("\n");
     border();
   
    data();

    analyse();   
 /**
 * @brief calculation of total amount debit and credit , calculation of remaining amount (Deficit or surplus)
 *
 */

    system("cls");

    show();
 
 /**
 * @brief Show gives the output as Sashflow Analysis
 *
 */

    printf("\n");
    printf("\n");

    return 0;

}

