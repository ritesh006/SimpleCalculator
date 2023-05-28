
#include "include.h"

void calculationChoice(int choice)
 {
    switch (choice)
    {
    case 1: addition(firstNumber,secondNumber);
    
        break;
    case 2: subtraction(firstNumber,secondNumber);
        break;
    case 3: multiplication(firstNumber,secondNumber);

        break;
    
    case 4: division(firstNumber,secondNumber);
        break;

    default:
            printf("Invalid Command");
        break;
    }
 }


 void addition(int firstNumber,int secondNumber)
 {
    result = firstNumber + secondNumber;
    printf("\nResult is: %d\n",result);
 }

  void subtraction(int firstNumber,int secondNumber)
 {
    result=firstNumber-secondNumber;
    printf("\nResult is: %d\n",result);
 }
 void multiplication(int firstNumber, int secondNumber)
 {
    result=firstNumber*secondNumber;
    printf("\nResult is: %d\n",result);
 }
 void division(int firstNumber, int secondNumber)
 {
    if (secondNumber!= 0)
    {
        result=firstNumber/secondNumber;
        printf("\nResult is: %d\n",result);
    }
    else
    {
        printf("\nError: Division by Zero\n");
    }
            
    
 }