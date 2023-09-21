#include<stdio.h>
float getDiscountPrice(int noOfGuests, float chargePerGuest);
float getAmount(int noOfGuests, float chargePerGuest, float discount);
int main()
{
    int noOfGuests;
    float chargePerGuest, discount, amount;
    
    printf("Enter no of guests: ");
    scanf("%d",&noOfGuests);
    
    printf("Enter charge per guest: ");
    scanf("%f",&chargePerGuest);
    
    discount = getDiscountPrice(noOfGuests, chargePerGuest);
    amount = getAmount(noOfGuests, chargePerGuest, discount);
    
    printf("Discount: %.2f\n",discount);
    printf("Amount to be paid: %.2f",amount);
    
    return 0;
}
float getDiscountPrice(int noOfGuests, float chargePerGuest)
{
    float discount;
    if (noOfGuests > 200)
    {
        discount = noOfGuests * chargePerGuest *0.1;
    }
    else
    {
       discount = 0.00;
    }
    return discount;
}
float getAmount(int noOfGuests, float chargePerGuest, float discount)
{
    float amount;
    amount = noOfGuests * chargePerGuest - discount;
    return amount;
}
