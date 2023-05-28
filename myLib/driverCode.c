#include <stdio.h>
#include "header.h"
/* global variable if you want to use globaly first 
   declare in any c file after that use with extern 
   in .h or header file other wise it wil throw a 
   error */

int result;   
int choice;
int firstNumber,secondNumber;

void takingInput(void)
{
    printf("\t\t\t\tCALCULATOR\n");
    printf("Enter Your First Number: ");
    scanf("%d",&firstNumber);

    printf("Enter Your Second Number: ");
    scanf("%d",&secondNumber);

    printf(" 1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Division");
    printf("\nEnter Your Choice for Calculation: ");

    scanf("%d",&choice);
}



void calculationChoice(int choice)
 {
    switch (choice)
    {
    case 1: addition(firstNumber, secondNumber);
    
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