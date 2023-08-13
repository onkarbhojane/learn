#include <stdio.h>

int main(void) {
	// your code goes here
	int t,n,sum=0;
	scanf("%d",&n);
    int a[4];
     for (int i=0;i<4;i++){
        scanf("%d
		take a new chance
		
    n=4;
	for (int i=0;i<n-1;i++){
	        int min=i;
	        for(int j=i+1;j<n;j++){
	            if(a[j]<a[min]){
	                int temp=a[min];
	               a[min]=a[j];
	                a[j]=temp;
	            }
	        }
	    }
        for (int i=0;i<n;i++){
            printf("%d ",a[i]);
        }
}
