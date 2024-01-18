#include<stdio.h>
int main(){
	int ar[10],i,c=0,n;
	printf("enter the no of elements \n");
	scanf("%d\n", &n);
	for(i=1;i<=n;i++){
		scanf("%d\n ", &ar[i]);
	}
	for(i=1;i<=n;i++){
		printf("%d ", ar[i]);
	}
	printf("\n");
	for(int i=0;i<n;i++){
		if(ar[i]>ar[i+1]){
			c=c+1;
		}
	}
    if(c!=0){
    	printf("The array is not sorted\n");
	}
	else{
		printf("The array is sorted\n");
	}
}
