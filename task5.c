#include<stdio.h>
main(){
	
		// two value max
		int a =100, b = 320, c = 500 , d = 6;
		
		if(a > b){ // 100 > 32
			// A is max
			if(a > c){ // 100 > 500
				// A is max
				if(a > d){
					// A is max
					printf("A is max");
				}else{
					// D is max
					printf("D is max");
				}
			}else{
				// C is max
				if(c > d){
					// C is max
					printf("C is max");
				}else{
					// D is max
					printf("D is max");
				}
			}
			
		}else{
			// B is max
			if(b > c){
				// B is max
				if(b > d){
					// B is max
					printf("B is max");
				}else{
					// D is max
					printf("D is max");
				}
			}else{
				// C is max
				if(c > d){
					// C is max
					printf("C is max");
				}else{
					// D is max
					printf("D is max");
				}
			}
		}
	
}
