int A[maxn],n;
void insertSort(){
	for(int i=2;i<=n;i++){//����n-1������
	int temp=A[i],j=i;
	//temp��ʱ���A[i],j��i��ʼ��ǰö��
	while(j>1&&temp<A[j-1]){
		//ֻҪtempС��ǰһ��Ԫ��A[j-1]
		A[j]=A[j-1];
		j--; 
	} 
	A[j]=temp;//����λ��Ϊj 
		
	}
} 
