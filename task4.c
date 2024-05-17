#include<stdio.h>
main(){
	
	int a;
	
	scanf("%d", &a);
	
	if(a > 10){ // 5 > 10

		printf("A is greater than 10");	
	}else if(a < 10){ // 5 < 0
		printf("A is less than 10");
	}else{
		printf("A is negative"); 
	}
	

}