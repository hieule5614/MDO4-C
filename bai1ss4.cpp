#include<stdio.h>
int main(){
	int number;
	printf("nhap vao 1 so nguyen");
	scanf("%d" ,number);
	if(number%3&&number%5==0){
		printf("%d chia het cho 5 \n chia het cho 3\n" ,number);
	}else
		printf("%d ko chia het cho 5 \n ko chia het cho 3\n" ,number);
}
	

