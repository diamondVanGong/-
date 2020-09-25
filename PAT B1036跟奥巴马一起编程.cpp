#include<stdio.h>
int main(){
	int a;
	char b;
	int c;
	int i,l,k;
	scanf("%d %c",&a,&b); 
	if(a%2==0){
		c=a/2;
	}
	if(a%2!=0){
		c=a/2+1;
	}
	for(i=0;i<a;i++)
	{
		printf("%c",b);
	}
	printf("\n");
	for(k=0;k<c-2;k++)
	{
		printf("%c",b);
		for(l=0;l<a-2;l++){
			printf(" ");
		}
		printf("%c",b);
		printf("\n");
	}
	for(i=0;i<a;i++)
	{
		printf("%c",b);
	}
}
