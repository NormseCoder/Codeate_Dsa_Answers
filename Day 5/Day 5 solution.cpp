#include <stdio.h> 
int removeDuplicates(int arr[], int n) 
{  
	if (n == 0 || n == 1) 
		return n; 
	int temp[n]; 
	int j = 0; 
	for (int i = 0; i < n - 1; i++) 
		if (arr[i] != arr[i + 1]) 
			temp[j++] = arr[i]; 
	temp[j++] = arr[n - 1];  
	for (int i = 0; i < j; i++) 
		arr[i] = temp[i]; 
	return j; 
}  
int main() 
{ 
	int ar[20],n;
	printf("Enter the number of elements ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) 
		scanf("%d\n", &ar[i]); 
	n = removeDuplicates(ar, n); 
	for (int i = 0; i < n; i++) 
		printf("%d ", ar[i]); 
	return 0; 
} 
