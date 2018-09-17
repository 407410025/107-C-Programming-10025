#include<stdio.h>
#include<math.h>

int main (){
	double x1,x2;
	int a,b,c;
	printf("Enter a b c : ");
	scanf("%d %d %d",&a,&b,&c);
	if((b*b-4*a*c)>=0){

	x1 = (-b+sqrt(b*b-4*a*c))/(2*a);
	x2 = (-b-sqrt(b*b-4*a*c))/(2*a);
	printf("For equation 2 x^2 -3 x + 1 =0, two roots are\n");
	printf("x1=%.1f\n",x1);
	printf("x2=%.1f",x2);

}
	else{
		printf("no real roots");
	}

}
