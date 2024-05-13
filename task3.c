#include<stdio.h>
main(){
	
	int a;
	float b;
	char c;
	int ans;
	
	printf("Enter A value :- ");
	scanf("%d", &a);
	
	printf("Enter B value :- ");
	scanf("%f", &b);
	
	printf("Enter C value :- ");
	scanf("%s", &c);
	
		ans = a + b;
		
		// 10 + 20 = 30
	printf("%d + %f = %d\n", a,b,ans);
	printf("C = %c", c);
	
}