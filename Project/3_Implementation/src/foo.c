#include "foo.h"
#include<stdio.h>
#include<stdlib.h>

 /**
 * @brief Line function is for graphic design of the program 
 *
 */

void border(){
        for(i=0;i<=b;i++){
            printf("-");

        }    
        
        for(i=0;i<=b;i++){
            printf("\n-");

        }  
}


 /**
 * @brief   Takes Input of Various Expenses and Input Data 
 *
 */

 
void data(){
        printf("Please Enter Your Name");
        gets(name);

        printf("\nEnter Your Monthly Salary ");

        gets(month);

        printf("\nCash Spent on Eatting outside");
        scanf("%f",&food);

        printf("\nCash spent on Mobile phone");
        scanf("%f",&mobile);

        printf("\n Cash Spent on Outing  ");
        scanf("%f",&outing);

        printf("\n Cash spent on travelling ");
        scanf("%f",&bike);

        printf("\n Other Expenses");
        scanf("%f",&paybills);

        printf("\n Monthy Salary ");
        scanf("%f",&sal);

        printf("\n Money made from multi source ");
        scanf("%f",&multi);

        printf("\n insurance payment");
        scanf("%f", &insurance);

        printf("\n Travel expense");
        scanf("%f", &travel);

        printf("\n shopping expense");
        scanf("%f", &shopping);
        
        printf("\n clothing expense");
        scanf("%f", &clothing);

        printf("\n skill development");
        scanf("%f", &skill_dev);

        
 }




/**
 * @brief  for calculation of the budget with the data given by user
 *
 */

 void analyse(){
     
        credit=food+mobile+outing+bike+paybills+insurance+travel+shopping+clothing+skill_dev;
        debit=sal+multi;
        amount=debit-credit;
 }




/**
 * @brief  Show fuction will give the Analysis of the CASHINFLOW AND CASHOUTFLOW
 *
 */


void show(){
    border();

    printf("\nFinance management\n");

    border();

    printf("\n");   

    printf("\t\t\t\tCASHOUTFLOW\t\t\tCASHINFLOW\n");

    printf("\nEATING OUTSIDE\t\tRs% .2f",food);
    printf("\nMOBILE AND DATA\t\tRs% .2f",mobile);
   

        printf("\n\n");
        printf("Entertainment   \t\tRs% .2f" ,outing);
        printf("\nTransportation   \t\tRs% .2f" ,bike);
        printf("\nMonthly Bills   \t\tRs% .2f",paybills);
        printf("\n insurance payment");
        printf("\n Travel expense \t\tRs% .2f",travel);
        printf("\n shopping expense \t\tRs% .2f", shopping);
        printf("\n clothing expense \t\tRs% .2f", clothing);
        printf("\n skill development \t\tRs% .2f", skill_dev);
      
        printf("\n");

        printf("\n\n From Other sources of Income\t\t\t\tRs% .2f",multi);

        printf("\n\nYour Monthly Salary\t\t\t\t\tRs% .2f",sal);


        printf("\n\n");

        border();

        printf("\n");

        printf("(Credit and Debit)\t\tRs%.2f\t\tRs%.2f",credit,debit);
        printf("\n");

        printf("\n ANALYSIS OF SAVINGS \t\tRs%.2f",amount);


        printf("\n");
        printf("\n");
       // printf("Basic Pay: %f\n",basicPay);
      //  printf("Employee contribution: %f\n",employeeFund);
      //  printf("Employer Contribution: %f\n",employerFund);

        border();

}




                          
