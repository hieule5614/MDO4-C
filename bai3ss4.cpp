#include<stdio.h>
int main(){
	int old_electric ,new_electric ,;
	printf("nhap vao chi so dien moi");
	scanf("%d" ,&new_electric);
	fflush(stdin);
	printf("nhap vao chi so dien cu");
	scanf("%d" ,&old_electric);
	fflush(stdin);
	int electric_energy= new_electric - old_electric;
	if(0 <= electric_energy &&  electric_energy < 50){
		printf("10.000VND");
	}else if(50 <= electric_energy && electric_energy < 100){
		printf("15.000VND");
	}else if(100 <= electric_energy && electric_energy < 150){
		printf("20.000VND");
	}else if(150 <= electric_energy && electric_energy < 200){
		printf("25.000VND");
	}else if(electric_energy >= 200){
		printf("30.000VND");
	}
}
