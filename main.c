#include <stdio.h>
#include "include.h"


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

