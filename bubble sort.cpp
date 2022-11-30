#include<stdio.h>
int main(){
	int i, j, arr[10], n, temp;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	printf("Enter the Unsorted elements of the array:\n");
	for(i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	printf("Performing the Bubble Sort(ascending order)...\n");
	for(i=0; i<n-1; i++){
		for(j=0; j<n-1-i; j++){
			if(arr[j] > arr[j+1]){
				temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	printf("The sorted array is: ");
	for(i=0; i<n; i++){
		printf("	%d",arr[i]);
	}
}