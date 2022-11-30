#include<stdio.h>
int main(){
	int i, j, k, c;
	c=4;
	for(k=0; k<5; k++){
		for(i=0; i<c; i++){
			printf(" ");
		}
		for(j=1; j<=(2*k+1); j++){
			printf("%d",j);
		}
		for(i=0; i<c; i++){
			printf(" ");
		}
		printf("\n");
		c--;
	}
}
