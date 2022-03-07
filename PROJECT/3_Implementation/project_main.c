/**
 * @file project_main.c
 * @author Yogesh 
 * @brief This file is the main file containing the main function
 * @version 0.1
 * @date 2022-03-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "FM.h"

void main()
{
    int n;
    border();
    printf("\n\t\t\tWELLCOME TO FINANCIAL MANAGER\n\t\t\t\t -your personalized finance managing assistant\n\n");
    border();
    printf("Please Enter Your Name            : ");
    fgets(user.name, b, stdin);
    printf("\n\t\t\tHello %s",user.name);  
    printf("\nKindly select the options below\n\t\t1. Input expense data\n\t\t2. Input income data\n\t\t3. To view the financial summary\n\t\t4. To view all the expenses\n\t\t5. To view all the income sources\n\t\t6. To view all the investments done\n\n");
    scanf("%d", &n);
    investments();

    switch(n)
     {
        case 1:
            expense_data();
            break;
        case 2:
            income_data();
            break;
        case 3:
            finance_summary();
            break;
        case 4:
            display_expenses();
            break;
        case 5:
            display_income();
            break; 
        case 6:
            display_investments();
            break;
        default:
            printf("\nEnter valid choice");
            break;
    }
}
   