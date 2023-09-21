#include<stdio.h>
int main (void)
{
	int no, i, j, k;
	
	for(i=1; i<= 2; i++)
	{
		for(j =1 ; j<= 2; j++)
		{
			for(k =1 ; k<= 2 ; k++)
			{
				printf("[%d %d %d]", i, j, k);
				printf("\n");
			}
		}
	}
return 0;	
}
