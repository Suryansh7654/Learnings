#include <stdio.h>

int main(){
    int n, sum = 0;

    printf("Enter Number Of Array: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter Number of Elements: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        sum = sum+arr[i];
    }

    printf("Sum Of Array is:%d\n",sum);
    
    float avg;
    
    avg = (float)sum/n;
    printf("Average Number: %f\n",avg);
    
    for(int i=0; i<n; i++){
    	if(arr[i]>avg){
    		printf("Greater than average: %d",i);
		}
	}
    
    
    
    return 0;
    
}
