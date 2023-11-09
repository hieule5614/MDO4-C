#include<stdio.h>
int main(){
	int triangle_side1 , triangle_side2 ,triangle_side3;
	printf("nhap 3 canh tam giac");
	scanf("%d %d %d" ,&triangle_side1 , triangle_side2 ,triangle_side3);
	fflush(stdin);
	if(triangle_side1==triangle_side2 && triangle_side2 ==triangle_side3 ){
		printf("day la tam giac deu");
	}else if(triangle_side1==triangle_side2 ||triangle_side1==triangle_side3 || triangle_side2==triangle_side3){
		printf("day la tam giac can");
	}else if(triangle_side1==triangle_side2 ||triangle_side1==triangle_side3 || triangle_side2==triangle_side3 && triangle_side1^2+triangle_side2^2==triangle_side3^2 || triangle_side1^2+triangle_side3^2==triangle_side2^2 || triangle_side2^2+triangle_side3^2==triangle_side1^2){
		printf("day la tam giac vuong can");
	}else if(triangle_side1^2+triangle_side2^2==triangle_side3^2 || triangle_side1^2+triangle_side3^2==triangle_side2^2 || triangle_side2^2+triangle_side3^2==triangle_side1^2){
		printf("day la tam giac vuong");
	}else if(triangle_side1+triangle_side2>triangle_side3 && triangle_side1+triangle_side3>triangle_side2 &&triangle_side2+triangle_side3>triangle_side1){
		printf("day la tam giac thuong");
	}else
	    printf("ko la tam giac");  
}
	    
