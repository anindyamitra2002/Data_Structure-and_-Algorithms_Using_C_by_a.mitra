#include<stdio.h>
int main(){
	int i, j, arr[10], n, min, temp;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	printf("Enter the unsorted eliments of the array:\n");
	for(i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	printf("Performing the Selection sort(Ascending order)...\n");
	for(i=0; i<n; i++){
		min = i;
		for(j=i+1; j<n; j++){
			if(arr[j] < arr[min]){
				min = j;
			}
		}
		temp = arr[min];
		arr[min] = arr[i];
		arr[i] = temp;
	}
	printf("The sorted array is: ");
	for(i=0; i<n; i++){
		printf("	%d",arr[i]);
	}

	
}