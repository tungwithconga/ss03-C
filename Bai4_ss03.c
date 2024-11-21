#include <stdio.h>
int main(){
	float toan,van,anh;
	printf("Hay nhap diem so toan cua ban: ");
	scanf("%f",&toan);
	printf("Hay nhap diem so van cua ban: ");
	scanf("%f",&van);
	printf("Hay nhap diem so anh cua ban: ");
	scanf("%f",&anh);
	float tongDiem = toan + van + anh;
	float diemTrungBinh = (toan+van+anh) / 3;
	printf("Tong diem cua ban la: %.2f\n va diem trung binh cua ban la: %.2f",tongDiem,diemTrungBinh);
	 
} 
