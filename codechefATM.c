#include<stdio.h>
int main()
{
    int amount;
    float balance;
    scanf("%d",&amount);
    scanf("%f",&balance);
    if((amount>0 && amount<=2000) && (balance>0 && balance <=2000))
    {

    if(amount>balance-0.5 || amount%5!=0)
    {
        printf("%.2f",balance);
    }
    else
    {
        balance=balance-amount-0.5;
        printf("%.2f",balance);
    }
    }
    return 0;
}
