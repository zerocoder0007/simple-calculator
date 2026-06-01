#include<stdio.h>
int main(){
	
	int n, a, b;
	float num;
	printf("Enter first number:");
	scanf("%d", &a);
	printf("Enter second number:");
	scanf("%d", &b);
	
	printf("Enter 1 for add\n");
	printf("Enter 2 for sub\n");
	printf("Enter 3 for div\n");
	printf("Enter 4 for mul\n");
	printf("Enter your choice:");
	scanf("%d", &n);
	
	switch(n){
		case 1: 
		        num = a + b;
			   printf("%.2f", num);
		       break;
		case 2:
		        num = a - b;
		        printf("%.2f", num);
				break;
		case 3:
				if(b == 0){
			         printf("Not divisible");
		}else{
			num = (float)a / b;
			printf("%.2f", num);
		}
		    break;
		case 4: 
		       num = a * b;
			   printf("%.2f", num);
			   break;	   	   
	    default:
		        printf("Invalid");
	    return 0;
	}
	
	
	
}
