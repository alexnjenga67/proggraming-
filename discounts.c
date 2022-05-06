//program to give a discount on goods worth 5000 and above
 #include<stdio.h>
int main()
{
float amount, discount;
printf("Enter amount\n");
scanf("%f",&amount);
if (amount>=5000)
{discount =0.1*amount;
printf("amount=%f", discount);
}
else
{discount=1*amount;}

return 0;
}