//Write a C program to find the sum of first 10 natural numbers. Go to the editor//
//Expected Output ://
//The first 10 natural number is ://
//1 2 3 4 5 6 7 8 9 10//
//The Sum is : 55//

#include <stdio.h>
int main()
{
    int n, sum =0;
    
    for(n = 1; n<=10; ++n){
	

    sum = sum + n;//
    }
    printf("The sum is : %d",sum);
 
 return 0;
}
