#include<stdio.h>
int main(){
	int i, j, k, l, x, y;
	
	y=4;
	for(x=5; x>=1; x--){
		for(i=0; i<=y; i++){	
		printf(" ");
		}
		for(j=5; j>=x; j--){
			printf("%d",j);
		}
		for(l=x+1; l<=5; l++){
			printf("%d",l);
		}
	
		for(k=0; k<=y; k++){
			printf(" ");
		}
		printf("\n");
		y--;
	}
	
}
