#include<stdio.h>

int main(){
	
	float cm,kg,m;
	float BMI ;
	printf("�п�J����(����):\n");
	scanf("%f",&cm);
	printf("�п�J�魫(����):\n");
    scanf("%f",&kg);
    m=cm/100;
    BMI=kg/(m*m);
    printf("BMI=%.1f\n",BMI);
    while(BMI>=0){
	
    if(BMI<18.5)
	{printf("�L��\n");}
	else if(BMI>=18.5 && BMI<24)
	{printf("�魫���`\n");}
	else if(BMI>=24 && BMI<27)
	{printf("�L��\n");}
	else if(BMI>=27 && BMI<30)
	{printf("���תέD\n");}
	else if(BMI>=30 && BMI<35)
	{printf("���תέD\n");}
	else if(BMI>=35)
	{printf("���תέD\n");}

    printf("�п�J����(����):\n");
	scanf("%f",&cm);
	printf("�п�J�魫(����):\n");
    scanf("%f",&kg);
    m=cm/100;
    BMI=kg/(m*m);
    printf("BMI=%.1f\n",BMI);
}
}
