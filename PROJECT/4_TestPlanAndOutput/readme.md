# TEST PLAN:
 * Test plans are very helpful in checking the behaviour of the program, variables and function for different values
------------------------------------------------------------------------------------------------
## How to run the test? ##
* Unity is used to test various features automatically with the test data.
* Failure/error cases are tested as well.
------------------------------------------------------------------------------------------------
## FEATURES: ##
1. Input various expense component
2. Input vatious investment component
3. Input vatious income sources
4. View investment component
5. View Financial summary
6. View expense components
7. View income component

----------------------------------------------------------------------------------------------------------------
## High level test plan

## TABLE_NO: HL_1 ##
| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test** |    
| :---------: | :----------------------------------------------------------: | :---------: | :---------: | :------------: | :-------------: |
|  H_01       | investments  | input for various investment companent | All inputs are inputed without error| no error |Mannual |
|  H_02       | expense_data | input to various expense component | All inputs are inputed without error | no error |Mannual |
|  H_03       | income_data  | input to various income source component | All inputs are inputed without error | no error |Mannual |
|  H_04       | financial status | outputs current financia; staus | Outputs the status without error | no error |Mannual |
|  H_05       | display_expense | ouputs various expense component | Display various expense component without error | no error |Mannual |
|  H_06       | display_income_data | ouputs various income component | Display various income component without error | no error |Mannual |
|  H_07       | display_investments | ouputs various investments component | Display various investments component without error | no error |Mannual |
|  H_08       | dsplay_fianace_summary | ouputs finance summary | Display various credit and debit, savings components | no error |Mannual |

------------------------------------------------------------------------------------------------------------------------------------------------------------------
## Table no: Low level test plan

## TABLE_NO: LL_1 ##
| **High_leve_Test ID** | **Low_leve_Test ID** | **Description**       | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
| :-------------------: | :------------------: | :-------------------: | :--------: | :---------: |:-------------: | :--------------: |
| H_01 | L_01.1 | Check if all the input variables take int type input using switch | int value | values are stored in the variables without error | Values are stored in the variables withouterror | mannual |
|  | L_01.2 | Check if it outputs error for non int input  | non int input | Display error and waits for right input |-Display error and waits for right input | mannual |
|  | L_01.3 | Check if diplays error for input with number and character | input with numbers and characters | Display error and waits for right input | Display error and waits for right input | mannual |
|  |-L_01.4| Check if switch works by taking input within the range | input between 1 and 11| switch case is passed | switch case is passed | mannual |
|  | L_01.5 | Check if total investment is calculated | all investmen component | total investment | total investment amount | mannual |
| H_02 | L_02.1 | Check if all the input expense variables take float type input | float value | values are stored in the variables without error |  values are stored in the variables without error | mannual |
| | L_02.2 | calculate debit of float type | float value | debit | debit| mannual |
| H_03 |-L_03.1 | Check if debit is calculated and displayed | all expense component | value_debit | debit | mannual |
|  |-L_03.2 | Check if various income component take non float input | float income sources |  multi source income | multi source income | mannual |
| H_04 | L_04 | Calculate saving amount  | credit, debit | broke/ saving amount | mannual |
------------------------------------------------------------------------------------------------
