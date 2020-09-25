#include<stdio.h>
int main(){
	int n=0;
	int i=0;
	scanf("%d\\n",&n);
	int school[100]={0};
	int schoolID,score;
	for(i=0;i<n;i++){
		scanf("%d%d",&schoolID,&score);
		school[schoolID]+=score;
		
	}
	int k=1,MAX=0;
	for(i=1;i<=n;i++){
		if(school[i]>MAX){
			MAX=school[i];
			k=i;
		}
	}
	printf("%d %d\n",k,MAX);
	
} 
