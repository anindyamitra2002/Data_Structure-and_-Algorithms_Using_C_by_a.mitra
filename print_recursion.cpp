#include<stdio.h>
void disp(int n){
	printf("%d ",n);
	if(n < 5){
		disp(n+1);
	}
	printf("%d ",n);
}
int main(){
	disp(1);
}