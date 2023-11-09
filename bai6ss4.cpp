#include<stdio.h>
int main(){
	int a ,b ,c ,d;
	printf("nhap 3 so a b c :");
	scanf("%d %d %d", &a , &b , &c);
	if(a > b && a > c && b > c){
		printf("max la %d \n", a);
		printf("min la %d \n", c);
		printf("so con lai la %d \n",b);
	}else if(a > b && a > c && b < c){
		printf("max la %d \n", a);
		printf("min la %d \n", b);
		printf("so con lai la %d \n", c);
	}else if(b > a && b > c && c > a){
		printf("max la %d \n", b);
		printf("min la %d \n", a);
		printf("so con lai la %d \n", c);
	}else if(b > a && b > c && c < a){
		printf("max la %d \n", b);
		printf("min la %d \n", c);
		printf("so con lai la %d \n", a);
	}else if(c > a && c > b && a > b){
		printf("max la %d \n", c);
		printf("min la %d \n", b);
		printf("so con lai la %d \n", a);
	}else if(c > a && c > b && a < b){
		printf("max la %d \n", c);
		printf("min la %d \n", a);
		printf("so con lai la %d \n", b);
	}
	printf("nhap 4 so a b c d:");
	scanf("%d %d %d", &a , &b , &c ,&d);
	if(a > b && a > c && b > c && c > d && a >d){
		printf("max la %d \n", a);
		printf("min la %d \n", d);
		printf("so con lai la %d \n",b ,c);
	}else if(a > b && a > c && b < c && d > c && a>d){
		printf("max la %d \n", a);
		printf("min la %d \n", b);
		printf("so con lai la %d \n", c , d);
	}else if(b < a && a > c && d < a && b > c && d >c){
		printf("max la %d \n", a);
		printf("min la %d \n", c);
		printf("so con lai la %d \n", b ,d);
	}else if(b > a && b > c && c < a && b >d && a>d && d>c){
		printf("max la %d \n", b);
		printf("min la %d \n", c);
		printf("so con lai la %d \n", a ,d);
	}else if(b > a && c < b && d < b && d>c && d>a && c>a){
		printf("max la %d \n", b);
		printf("min la %d \n", a);
		printf("so con lai la %d \n", c,d);
	}else if(b > a && c < b && d < b && a>d && a>c && c>d){
		printf("max la %d \n", b);
		printf("min la %d \n", d);
		printf("so con lai la %d \n", a ,c);
	}else if(c > a && b < c && c < d && b >a && a<d && d<b){
		printf("max la %d \n", c);
		printf("min la %d \n", a);
		printf("so con lai la %d \n", b ,d);
	}else if(c > a && c > b && d < c && d>a && d>b && b<a){
		printf("max la %d \n", c);
		printf("min la %d \n", b);
		printf("so con lai la %d \n", a,d);
	}else if(c > a && c > b && d < c && a>d && a>b && b>d){
		printf("max la %d \n", c);
		printf("min la %d \n", d);
		printf("so con lai la %d \n", a ,b);
	}else if(d > a && b < d && b < d && b >a && a<c && c<b){
		printf("max la %d \n", d);
		printf("min la %d \n", a);
		printf("so con lai la %d \n", b ,c);
	}else if(d > a && d > b && d > c && c>a && c>b && b<a){
		printf("max la %d \n", d);
		printf("min la %d \n", b);
		printf("so con lai la %d \n", a,c);
	}else if(d > a && d > b && d > c && a>d && a>c && b>c){
		printf("max la %d \n", d);
		printf("min la %d \n", c);
		printf("so con lai la %d \n", a ,b);		
    }
}
