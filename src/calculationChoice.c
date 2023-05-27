#include <stdio.h>
#include "calculationChoice/calculationChoice.h"


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