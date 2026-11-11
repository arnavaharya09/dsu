#include <stdio.h>
float calculateBalance(float balance, float deposit, float withdrawl)
{balance = balance + deposit - withdrawl;
return balance;
}
int main()
{
    float balance, deposit, withdrawl;
    printf("Enter the initial balance: ");
    scanf("%f", &balance);
    printf("Enter the deposit amount: ");
    scanf("%f", &deposit);
    printf("Enter the withdrawl amount: ");
    scanf("%f", &withdrawl);
    
    balance = calculateBalance(balance, deposit, withdrawl);
    
    printf("The final balance is: %.2f\n", balance);
    
    return 0;
}