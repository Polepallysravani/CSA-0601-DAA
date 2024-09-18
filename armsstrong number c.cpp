#include<stdio.h>
#include<math.h>
int main(){
	int num,n,rem,arm=0;
	printf("enter the number:");
	scanf("%d",&n);
	num=n;
	while(num!=0){
		rem=num%10;
		arm=arm+rem*rem*rem;
		num=num/10;
	}
	if(n==arm){
		printf("armstrong number");
	}
	else{
		printf("not armstrong number ");
	}
	return 0;
}