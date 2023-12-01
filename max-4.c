#include<stdio.h>

main(){
	
	int a,b,c,d;
	
	printf("Enter value of A = ");
	scanf("%d",&a);
	printf("Enter value of B = ");
	scanf("%d",&b);
	printf("Enter value of C = ");
	scanf("%d",&c);
	printf("Enter value of D = ");
	scanf("%d",&d);
	
	if(a>b){
		if(a>c){
			if(a>d){
				printf("A is maximum");
			}
			else{
				printf("D is maximum");
	        }
	    }
		else{
			if(c>d){
				printf("C is maximum");
			}	
			else{
				printf("D is maximum");
			}
		}
	}
	else{
	    if(b>c){
			if(b>d){
				printf("B is maximum");
			}
			else{
				printf("D is maximum");
			}
		}
		else{
			if(c>d){
				printf("C is maximum");
			}
			else{
				printf("D is maximum");
			}
		}
	}
}