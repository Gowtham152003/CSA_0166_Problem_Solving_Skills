#include<stdio.h>
#include<math.h>
int main(){
	int n,t,rem,sum=0,count=0,r;
	printf("Enter the numbet to check:");
	scanf("%d",&n);
	t=n;
	r=n;
	while(r>0)
	{
		rem=r%10;
		count=count+1;
		r=r/10;
	}
	printf("Digits:%d",count);
	while(t>0){
		rem=t%10;
		sum+=pow(rem,count);
		t=(t/10);
	}
	if(n==sum){
		printf("\nThe given number %d is armstrong",n);
	}
	else{
		printf("\nThe given number %d is not a armstrong",n);
	}
	return 0;
}
