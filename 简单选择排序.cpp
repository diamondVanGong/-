void selectSort(){
	for(int i=1;i<=n;i++){
		//进行n趟操作
		int k=i;
		for(int j=i;j<=n;j++){
			if(A[j]<A[k]){
				k=j;
			}
		} 
		int temp=A[i];//交换A[k]与A【i]
		A[i]=A[k];
		A[k]=temp;
		 
	}
} 
