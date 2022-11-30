//Circular Queue by A. Mitra.

//F -> for deleting element
//R -> for inserting element
//t -> total element present in the queue

#include<stdio.h>
int F=0, R=-1, t=0, size, i;
int arr[10];

void enQueue(int x){
	if(t == size){
		printf("The Queue is Overflowing.\n");
	}
	else{
		R = (R+1) % size;
		arr[R] = x;
		t++;
	}
}

void deQueue(){
	int p;
	if(t == 0){
		printf("The Queue is Underflowing.\n");
	}
	else{
		p = arr[F];
		F = (F+1) % size;
		t--;
		printf("%d is deleted from the Queue.\n",p);
	}

}

void dispQueue(){
	int a = F;
	for(i=0; i<t; i++){
		printf("%d	",arr[a]);
		a = (a+1) % size;
	}
	printf("\n");
}
int main(){
	int ch, c;
	printf("Enter the size of your queue: ");
	scanf("%d",&size);
while(1){	
	printf("Press: 1 for Enqueue;		Press: 2 for Dequeue;	Press: 3 for Display the Queue;	Press: 0 for Exit\n");
	printf("You choose: ");
	scanf("%d",&ch);
	switch(ch){
		case 0:{
			return 0;
			break;
		}
		case 1:{
			printf("Enter a Number: ");
			scanf("%d",&c);
			enQueue(c);
			break;
		}
		case 2:{
			deQueue();
			break;
		}
		case 3:{
			dispQueue();
			break;
		}
	}
	printf("\n");
}
}