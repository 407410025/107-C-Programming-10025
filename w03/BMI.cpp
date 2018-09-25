#include<stdio.h>

int main(){
	
	float cm,kg,m;
	float BMI ;
	printf("請輸入身高(公分):\n");
	scanf("%f",&cm);
	printf("請輸入體重(公斤):\n");
    scanf("%f",&kg);
    m=cm/100;
    BMI=kg/(m*m);
    printf("BMI=%.1f\n",BMI);
    while(BMI>=0){
	
    if(BMI<18.5)
	{printf("過輕\n");}
	else if(BMI>=18.5 && BMI<24)
	{printf("體重正常\n");}
	else if(BMI>=24 && BMI<27)
	{printf("過重\n");}
	else if(BMI>=27 && BMI<30)
	{printf("輕度肥胖\n");}
	else if(BMI>=30 && BMI<35)
	{printf("中度肥胖\n");}
	else if(BMI>=35)
	{printf("重度肥胖\n");}

    printf("請輸入身高(公分):\n");
	scanf("%f",&cm);
	printf("請輸入體重(公斤):\n");
    scanf("%f",&kg);
    m=cm/100;
    BMI=kg/(m*m);
    printf("BMI=%.1f\n",BMI);
}
}
