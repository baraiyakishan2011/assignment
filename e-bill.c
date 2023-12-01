#include<stdio.h>

main(){
	int unit,e_bill,sc,t_bill;
	
	printf("Enter your unit : ");
	scanf("%d",&unit);
	
	if(unit<=50){
		e_bill = unit * 0.50;
	}
	else if(unit<=150){
		e_bill = (unit-50) * 0.75 + 25;
	}
	else if(unit<=250){
		e_bill = (unit-150) * 1.20 + 100;
	}
	else{
		e_bill = (unit-250) * 1.50 + 220;
	}
	
	printf("Electricity bill = %d\n",e_bill);
	sc = e_bill * 20/ 100;
	printf("Surecharge = %d\n",sc);
	t_bill = e_bill + sc;
	printf("Total Electricity bill = %d\n",t_bill);
}