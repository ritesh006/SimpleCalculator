#include <stdio.h>

int firstNumber;
int secondNumber;
int choice;
int result;

void calculationChoice(int choice);
void addition(int,int);
void subtraction(int,int);
void multiplication(int,int);
void division(int,int);
int main()
{
    printf("\t\t\t\tCALCULATOR\n");
    printf("Enter Your First Number: ");
    scanf("%d",&firstNumber);

    printf("Enter Your Second Number: ");
    scanf("%d",&secondNumber);

    printf(" 1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Division");
    printf("\nEnter Your Choice for Calculation: ");

    scanf("%d",&choice);
    calculationChoice(choice);
    return 0;
}
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
    printf("Result is: %d",result);
 }

  void subtraction(int firstNumber,int secondNumber)
 {
    result=firstNumber-secondNumber;
    printf("Result is: %d",result);
 }
 void multiplication(int firstNumber, int secondNumber)
 {
    result=firstNumber*secondNumber;
    printf("Result is: %d",result);
 }
 void division(int firstNumber, int secondNumber)
 {
    if (secondNumber!= 0)
    {
        result=firstNumber/secondNumber;
        printf("Result is: %d",result);
    }
    else
    {
        printf("Error: Division by Zero");
    }
            
    
 }