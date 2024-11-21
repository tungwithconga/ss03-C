#include <stdio.h>
int main (){
	int r;
	float Pi = 3.14; 
	printf("Hay nhap ban kinh hinh tron r: ");
	scanf("%d",&r);
	float chuVi = 2 * Pi * r;
	float dienTich = Pi * r * r; 
	printf("Chu vi hinh tron la %.2f\n Dien tich hinh tron la %.2f",chuVi,dienTich); 
} 
