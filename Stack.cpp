#include<stdio.h>
int a[10], t=0, x, i;
void push(){
	if(t <= 10){
	printf("Enter your value: ");
	scanf("%d",&x);
	a[t] = x;
	t++;	
	}
	else{
		printf("Array is Overflowing...\n");
	}
}

int pop(){
	if(t>0){
		t--;
		printf("%d is deleted.\n",a[t]);
	}
	else{
		printf("Array is Underflowing...\n");
	}
}

int main(){
	int ch;
	while(1){
		printf("1: Insert;\t2: Delete;\t3: Display;\t4: Exit\n");
		scanf("%d",&ch);
		switch(ch){
			case 1: {
				push();
				break;
			}
			
			case 2: {
				pop();
				break;
			}
			
			case 3: {
				for(i=0; i<t; i++){
					printf("%d, ",a[i]);
				}
				printf("\n");
				break;
			}
			
			case 4: {
				return 0;
			}
		}
	}
}