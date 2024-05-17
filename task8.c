#include<stdio.h>
int main(){
	
	
	int a,b, ans;
	char choice;
	
	
	
	printf("Enter choice\n");
	printf("Choice + for sum\n");
	printf("Choice - for sub\n");
	printf("Choice * for mul\n");
	printf("Choice / for div\n");
	printf("Any key for exist\n");
	
	scanf("%c", &choice);
	
	switch(choice){
		
		case '+' :
			
			printf("Enter a = ");
			scanf("%d", &a);
	
			printf("Enter b = ");
			scanf("%d", &b);
			ans = a + b;
			printf("Ans = %d", ans);
		
			break;
			
		case '-' :
			printf("Enter a = ");
			scanf("%d", &a);
	
			printf("Enter b = ");
			scanf("%d", &b);
			ans = a - b;
			printf("Ans = %d", ans);
			break;
		case '*' :
			printf("Enter a = ");
			scanf("%d", &a);
	
			printf("Enter b = ");
			scanf("%d", &b);
			ans = a * b;
			printf("Ans = %d", ans);
			break;
		case '/':
			printf("Enter a = ");
			scanf("%d", &a);
	
			printf("Enter b = ");
			scanf("%d", &b);
			
			ans = a / b;
			printf("Ans = %d", ans);
			break;
			
		default : 
			printf("Thank you..");
			break;
		 
		
	}
	
}