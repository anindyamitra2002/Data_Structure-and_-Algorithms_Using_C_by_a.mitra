#include<stdio.h>
int fibo(int n){
	if(n==0){
		return 0;
	}
	else if(n==1){
		return 1;
	}
	else{
		return(fibo(n-1) + fibo(n-2));
	}
}
int main(){
	int x, z;
	printf("Enter the term you want to know: ");
	scanf("%d",&x);
	z = fibo(x-1);
	printf("The %d th term is: %d",x,z);
}