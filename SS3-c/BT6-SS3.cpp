#include<stdio.h>
int main(){
	int namsinh;
	printf("nhap nam sinh:");
	scanf("%d",&namsinh);
	int tuoi=2023-namsinh;
	printf("tuoi cua ban:%d\n",tuoi);
	if(namsinh%2==0){
	printf("nam sinh cua ban la chan");
}
    if(namsinh%2==1){
	printf("nam sinh cua ban la le");
}
	
	}
