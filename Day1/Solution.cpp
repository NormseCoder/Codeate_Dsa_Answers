#include<stdio.h>
void bubblesort(int ar[],int n){
	int i,j;
	for(i=0; i<n-1; i++){
		for(j=0; j<n-1-i; j++){
			if(ar[j]>ar[j+1]){
				int temp=ar[j];
				ar[j]=ar[j+1];
				ar[j+1]=temp;
			}
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
	printf("The unsorted array is \n");
	for(i=0; i<p; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
	bubblesort(a,p);
	printf("The sorted array is \n");
	for(i=0; i<p; i++){
		printf("%d ", a[i]);
	}
	printf("\nThe largest element of the array is \n%d", a[p-1]);
}
