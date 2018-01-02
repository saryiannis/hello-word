#include <stdio.h>
#include <stdlib.h>

int isPrime(int num, int start)
{
	if (num%start==0)
			return start;
	return 0;
	
	
}

int main()
{
	int number, start;
	int flag;
	char ans;
	do
	{
		flag=0;
		printf ("Give me a number to check if it is Prime!\n");
		scanf ("%d",&number);
		getchar();
		switch(number)
		{
			case 0:
			case 1:
			{
				printf("\nNumber %d is not prime!\n",number);
				break;
			}
			default:
				{
					for (start=2;start<number;start++){
						if (isPrime(number,start)!=0)
						{
							if (flag==0)
							{
								printf("\nNumber %d is not primary because it is divided by %d", number, isPrime(number,start));	
								flag=1;
							}
							else
								printf(",%d", isPrime(number,start));
						}
					}
						
				if (flag==0)
					printf("\nCongrats, number %d is prime!\n",number);
				}
				break;
		}
			printf("\n\nWanna try another number? Y/N\n");
				scanf ("%c",&ans);
	}	while (ans=='Y'||ans=='y');
	return 0;
}
