#include<stdio.h>
int main(){
	int i, j, arr[10], n, key, temp;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	printf("Enter the unsorted eliments of the array:\n");
	for(i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	printf("Performing Insertion Sort...\n");
	for(i=0; i<n; i++){
		key = arr[i];
		j= i-1;
		while(j>=0 && arr[j]> key){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	}
	printf("The sorted array is: ");
	for(i=0; i<n; i++){
		printf("	%d",arr[i]);
	}
}