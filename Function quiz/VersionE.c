#include <stdio.h>
float findRadianValue(float angleInDegrees);//converting degrees to radians function
void printRadianValues(void);

float findRadianValue(float angleInDegrees)
{
    float RadianValue;
    float pi = 22 / 7.0;
    RadianValue = pi / 180 * angleInDegrees;
    
    return RadianValue;
}

void PrintRadianValues(void)//radians printing function
{
    float degree;
    
    printf("Angle(degrees)\t\t  Angle(radians)\n");
	printf("\t100 \t \t\t %.2f\n", findRadianValue(100));
	printf("\t120 \t \t\t %.2f\n", findRadianValue(120));
	printf("\t140 \t \t\t %.2f\n", findRadianValue(140));
	printf("\t160 \t \t\t %.2f\n", findRadianValue(160));
	printf("\t180 \t \t\t %.2f\n", findRadianValue(180));
	printf("\t200 \t \t\t %.2f\n", findRadianValue(200));

}
int main()
{
	PrintRadianValues();
	return 0;
}
