#include<stdio.h>
int main()
{
	float fah,cel;
	printf("Enter the temperature in fahrenheit degrees=");
	scanf("%f",&fah);
	cel=(fah-32)*5/9;
	printf("Temperature in celcius degree is =%f",cel);
	return 0;
}
