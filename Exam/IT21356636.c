//Name : P.K.Lakshan Perera
//ID Number : IT21356636
//Center : Kurunegala
//Group : 1

#include <stdio.h>

int main()
{
	int itmC , qty;
	char cType;
	float price, discount, total;

	printf("Item code : ");
	scanf("%d", &itmC);

	printf("Quantity : ");
	scanf("%d", & qty);

  printf ("Customer type : ");
  scanf(" %c",&cType);
	if (cType == 'L')
	{
		switch (itmC)
		{
		case 1: price = 530 * qty;
			discount = price * 0.25;
			break;

		case 2: price = 300 * qty;
			discount = price * 0.25;
			break;

		case 3: price = 950 * qty;
			discount = price * 0.25;
			break;

		default: printf("Invalid item code....");
		}
	}
	else if (cType == 'N')
	{
		switch (itmC)
		{
		case 1: price = 530 * qty;
			discount = price * 0.05;
			break;

		case 2: price = 300 * qty;
			discount = price * 0.05;
			break;

		case 3: price = 950 * qty;
			discount = price * 0.05;
			break;

		default: printf("Invalid item code....");
		}
	}

	else
	{
		printf("Invalid customer type...");
	}
	printf("Discount : %.2f\n", discount);
	total = price - discount;
	printf("Total bill after the discount : %.2f", total);

	return 0;
}
