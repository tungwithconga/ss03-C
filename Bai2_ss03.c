#include <stdio.h>
int main(){
	float Celsius,Fahrenheit;
	printf("Hay nhap do C: ");
	scanf("%f",&Celsius);
	Fahrenheit = Celsius * 1.8 + 32;
	printf("Chuyen doi thanh cong tu do C sang do F co gia tri la : %.2f",Fahrenheit);
	
}
