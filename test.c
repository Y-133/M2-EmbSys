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

typedef struct 
{
    char name[b];   
    char month[12];
    float salary;
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
}; 

struct input user =  { .salary = 1000 , .food = 100 , .mobile = 10, .outing= 10, .bike = 10, .payb0lls = 10, .sal = 1000, .insurance = 10, .travel = 10,
.shopping = 10, .clothing= 10, .skill_dev = 10, .credit = 0, debit = 0, savings = 0, broke=0,
essential_expense, non_essential_expense, multi, rent_ret, sales_ret,
 miscellaneous_inv, miscellaneous_ret, miscellaneous_exp, 
investment_ret; 

int stocks, bonds, gold, po_fd, bank_fd, real_estate, PF, mutual_fund,
investment, chit_fund; }
    
TEST_ASSERT_EQUAL_MEMORY(a, b, 5);
//This will pass
TEST_ASSERT_EQUAL_MEMORY(&a_struct, &b_struct, sizeof(temp));
//This will fail
TEST_ASSERT_EQUAL_MEMORY(&a_struct, &c_struct, sizeof(temp));
//This will fail
TEST_ASSERT_EQUAL_MEMORY(a, c, 5);


void test_investments(void)
{
    TEST_ASSERT_EQUAL_FLOAT()
}
float arr_2[]={1.1,2.9,1.1,2.9,3.5,4.2,5.4,2.9,0};
    int n_2 = 9;
void test_sphere_vol(void){
    TEST_ASSERT_EQUAL_FLOAT( 50965.011719,sphere_vol( 23) );
    TEST_ASSERT_EQUAL_FLOAT( 150.532547,sphere_vol( 3.3) );
    TEST_ASSERT_EQUAL_FLOAT( 54063731310592.000000,sphere_vol( 23457) );
}

void test_game(void){
    int n=5, guess=5;
    TEST_ASSERT_EQUAL_string(n, guess,"your guess is correct");
}
int main(void){
    UNITY_BEGIN();
    RUN_TEST(test_game);
    return UNITY_END();
}

int main(void)
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    


    /* Close the Unity Test Framework */
    return UNITY_END();
}
