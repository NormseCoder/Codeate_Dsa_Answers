#include<stdio.h>
void swap(int *x, int *y){
	int temp=*x;
	*x=*y;
	*y=temp;
}
void selection_sort(int ar[],int n){
	int i,j,min;
	for(i=0; i<n-1; i++){
		min=i;
		for(j=i+1; j<n; j++){
			if(ar[j] < ar[min]){
				min=j;
			}
		}
		if(min!=i){
			swap(&ar[i], &ar[min]);
		}
	}
}
int main(){
	int a[20],i,p;
	printf("enter the length of the array\n ");
	scanf("%d", &p);
	for(i=0; i<p; i++){
		scanf("%d", &a[i]);
	}
	printf("The sorted array is\n ");
	selection_sort(a,p);
	for(i=0;i<p;i++){
		printf("%d ", a[i]);
	}
	return 0;
}
