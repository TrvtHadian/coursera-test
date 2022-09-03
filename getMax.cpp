#include <stdio.h>
#include <limits.h>

int getMax(int, int);

int main(){
	int n, i, number;
	int max = INT_MIN;
	
	printf("how many numbers do you have?\n");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++){
	    printf("please enter your number:");
	    scanf("%d", &number);
	    max = getMax(number, max);
	}
	printf("max num:%d", max);
	
}


int getMax(int a, int b){
	if(a > b)
	    return (a);
	else
     	return(b);	
	
}