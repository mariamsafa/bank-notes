
#include<stdio.h>
int main()
{
int n100, n50, n20, n10, n5, n2, n1, amount;
scanf_s("%d", &amount);
printf("%d\n", amount);
n100 = amount / 100;
amount = amount % 100;
n50 = amount / 50;
amount = amount % 50;
n20 = amount / 20;
amount = amount % 20;
n10 = amount / 10;
amount = amount % 10;
n5 = amount / 5;
amount = amount % 5;
n2 = amount / 2;
amount = amount % 2;
n1 = amount/1;

printf("%d nota(s) de R$ 100,00\n",n100);
printf("%d nota(s) de R$ 50,00\n",n50);
printf("%d nota(s) de R$ 20,00\n",n20);
printf("%d nota(s) de R$ 10,00\n",n10);
printf("%d nota(s) de R$ 5,00\n",n5);
printf("%d nota(s) de R$ 2,00\n",n2);
printf("%d nota(s) de R$ 1,00\n",n1);
return 0;
}




//another way with loop
/*
#include<stdio.h>
int main()
{
	int i, j, n;
	int ar[7] = { 100,50,20,10,5,2,1 };
	int br[7];
	scanf_s("%d", &n);
	printf("%d\n", n);
	for (i = 0; i < 7; i++)
	{
		br[i] = n / ar[i];
		n = n % ar[i];
	}
	for (j = 0; j < 7; j++)
	{
		printf("%d nota(s) de R$ %d,00\n", br[j], ar[j]);
	}
	return 0;
}
*/