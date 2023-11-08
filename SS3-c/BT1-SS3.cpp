#include <stdio.h>
int main(){
	float radius;
	const float PI = 3.14;
	printf("Nhap ban kinh hinh tron");
	scanf("%f/n",&radius);
	float diameter_of_a_circle= 2*PI*radius;
	float circle_area = PI*radius*radius;
	printf("Chu vi hinh tron la:%.2f\n",diameter_of_a_circle);
	printf("Dien tich hinh tron la:%.2f\n",circle_area);
	return 0;
}
