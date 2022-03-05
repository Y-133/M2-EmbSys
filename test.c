# include "FM.h"
# include "unity.h"


/* Modify these two lines according to the project */
# define PROJECT_NAME    "Finance manager "

/* Prototypes for all the test functions */

/* Required by the unity test framework */
void setUp()
{}
/* Required by the unity test framework */
void tearDown(){}

struct input  
{
    char name[b];   
    char month[12];
#    float salary;
    float food;
    float mobile;
    float outing;
    float bike;
    float paybills;
    float sal;
    float insurance;
    float travel;
    float shopping;
    float clothing;
    float skill_dev;  
    float credit;
    float debit;
    float savings;
    float broke;
    float rent;
    float essential_expense;
    float non_essential_expense;
    int stocks;
    int bonds;
    int gold;
    int po_fd;
    int bank_fd;
    int real_estate;
    int PF;
    int mutual_fund;
    int investment;
    int chit_fund;
    float multi;
    float rent_ret;
    float sales_ret;
    float miscellaneous_inv;
    float miscellaneous_ret;
    float miscellaneous_exp;
    float investment_ret;
}user; 

user feeds_1 = { .food = 10 , .mobile = 10, .outing= 10, .bike = 10, .paybills = 10, .insurance = 10, .travel = 10,.shopping = 10, .clothing= 10, .skill_dev = 10, .miscellaneous_exp = 10,
                 .essential_expense = 0, .non_essential_expense = 0, .debit = 0, .credit = 0, .savings = 0, .broke=0, .multi = 0, .sal = 20, .rent_ret =20, .sales_ret = 20, 
                 .miscellaneous_ret = 20, .investment_ret = 20, .investment= 0, .stocks = 20, .bonds = 20, .gold= 20, .po_fd= 20, .bank_fd= 20,
                 .real_estate= 20, .PF= 20, .mutual_fund= 20, .chit_fund= 20, .miscellaneous_inv = 20,}


user feeds_2 = { .food = 10 , .mobile = 10, .outing= 10, .bike = 10, .paybills = 10, .insurance = 10, .travel = 10,.shopping = 10, .clothing= 10, .skill_dev = 10, .miscellaneous_exp = 10,
                 .essential_expense = 0, .non_essential_expense = 0, .debit = 0, .credit = 0, .savings = 0, .broke=0, .multi = 0, .sal = 20, .rent_ret =20, .sales_ret = 20, 
                 .miscellaneous_ret = 20, .investment_ret = 20, .investment= 0, .stocks = 20, .bonds = 20, .gold= 20, .po_fd= 20, .bank_fd= 20,
                 .real_estate= 20, .PF= 20, .mutual_fund= 20, .chit_fund= 20, .miscellaneous_inv = 20,}


//This will pass
TEST_ASSERT_EQUAL_MEMORY(&user, &feeds_2, sizeof(user));

/*
float salary, food, mobile, outing, bike, paybills, sal, insurance, travel,
shopping, clothing, skill_dev, credit, debit, savings, broke, rent, 
essential_expense, non_essential_expense, multi, rent_ret, sales_ret,
 miscellaneous_inv, miscellaneous_ret, miscellaneous_exp, 
investment_ret; 
int stocks, bonds, gold, po_fd, bank_fd, real_estate, PF, mutual_fund,
investment, chit_fund; --9
*/

void test_investments(void)
{   
    investments()
    TEST_ASSERT_EQUAL_INT(  180 ,investment);
}

void test_expense_data(void)
{ 
    struct user feeds_1;
    expense_data()
    TEST_ASSERT_EQUAL_FLOAT( 110, debit);
}

void test_income_data(void)
{
    income_data()
    TEST_ASSERT_EQUAL_FLOAT( 100, multi);
}

void test_financial_status(void)
{
    financial_status()
    TEST_ASSERT_EQUAL_FLOAT( 190, broke);
    TEST_ASSERT_EQUAL_FLOAT( 0, savings);
}

void test_display_expenses(void)
{
    TEST_ASSERT_EQUAL_FLOAT(0 , display_expenses())
}

void test_display_income(void)
{
    TEST_ASSERT_EQUAL_FLOAT(0 , display_income())
}

void test_display_investments(void)
{
    TEST_ASSERT_EQUAL_INT(0 , display_investments())
}

void test_finance_summary(void)
{
    TEST_ASSERT_EQUAL_FLOAT( 0, finance_summary())
}

int main(void)
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();
    struct user feeds_1;
    /* Run Test functions */
    RUN_TEST(test_investments);
    RUN_TEST(test_expense_data);
    RUN_TEST(test_income_data);
    RUN_TEST(test_financial_status);
    RUN_TEST(test_display_expenses);
    RUN_TEST(test_display_income);
    RUN_TEST(test_display_investments);
    RUN_TEST(test_finance_summary);
    
    /* Close the Unity Test Framework */
    return UNITY_END();
}
