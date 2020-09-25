#include<stdio.h>
const int maxn=210;
int a[maxn];

int main(){
	int n;
	int x;
	int i=0;
	int k;
	scanf("%d",&n);	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	scanf("%d",&x);
	for(k=0;k<n;k++){
		if(a[k]==x){
			printf("%d\n",k);
			break;
		}
		
	}
	if(k==n){
		printf("-1\n");
	}
} 
