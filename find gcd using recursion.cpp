#include <stdio.h>
int findGcd(int dvdn, int dvsr){
	int r;
	r = dvdn % dvsr;
	if (r == 0){
		return dvsr;
	}
	else{
		findGcd(dvsr,r);
	}
}
int main(){
	int gcd;
	gcd = findGcd(50,10);
	printf("GCD: %d",gcd);
}