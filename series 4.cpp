#include<stdio.h>
int fibo(int n){
	if(n==0){
		return 2;
	}
	else{
		return(3 + fibo(n-1));
	}
	
} 
int fiso(int m){
	if(m==0){
		return 3;
	}
	else{
		return(2 * fiso(m-1));
	}
}

int main(){
	int x, z,y;
	printf("Enter the term you want to know: ");
	scanf("%d",&x);
	z = fibo(x-1);
	y = fiso(x-1);
	printf("The %d th term is: %d / %d",x,z,y);
}