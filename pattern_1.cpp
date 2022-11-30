#include<stdio.h>
int main(){
	int i, j, k, c;
	c=1;
	for(k=5; k>0; k--){
		for(i=1; i<=k; i++){
			printf("%d",i);
		}
		for(j=1; j<c; j++){
			printf(" ");
		}
		printf("\n");
		c++;
	}
}
