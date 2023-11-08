#include<stdio.h>
int main(){
	int n1,n2,n3;
	printf("nhap n1:");
	scanf("%d",&n1);
	printf("nhap n2:");
	scanf("%d",&n2);
	printf("nhap n3:");
	scanf("%d",&n3);
	int max=n1;
	int min=n1;
	if (max<n2){
	max=n2;
	}
	if (max<n3){
	max=n3;
	}
	if (min>n2){
	min=n2;
	}
	if (min>n2){
	min=n3;
	}
	printf("so max:%d\n",max);
	printf("so min:%d\n",min);
} 
