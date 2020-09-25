#include<stdio.h>
int main(){
	int n;
	int i=0;
	scanf("%d",&n);
	
		while(n>1){
			if(n%2==0){
					n=(int)n/2;
					i++;
			}
		
			else if(n%2!=0){
				n=(int)(3*n+1)/2;
				i++;
			}
			
			
		
	}
	printf("%d",i);
} 
