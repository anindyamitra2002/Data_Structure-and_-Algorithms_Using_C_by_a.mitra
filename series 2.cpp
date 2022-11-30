#include<stdio.h>
int fibo(int n){
	if(n==0){
		return 3;
	}
	else{
		return(4 + fibo(n-1));
	}
}
int main(){
	int x, z;
	printf("Enter the term you want to know: ");
	scanf("%d",&x);
	z = fibo(x);
	printf("The %d th term is: %d",x,z);
}