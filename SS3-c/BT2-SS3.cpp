#include <stdio.h>
int main(){
	float toan, van, anh;
	printf("nhap diem lan luot la toan,van,tieng anh :");
	scanf("%f%f%f",&toan,&van,&anh);
	float tong_diem = toan+van+anh;
	float dtb = (toan+van+anh)/3;
	printf("Diem tong la:%.2f\n",tong_diem);
	printf("Diem trung binh la:%.2f",dtb);
	return 0;
}
