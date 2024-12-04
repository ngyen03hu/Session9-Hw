#include<stdio.h>

int main (){
	int arr[3]={5,2,3};
	int n,m;
	printf("bang moi dau\n ");
		for(int i=0;i<3;i++){
			printf("vi tri : %d %d \n",i,arr[i]);
		}
		
		printf("moi ban nhap vi tri can sua : ");
		scanf("%d",&n);
		if (n>=0 || n<3){
			printf("nhap gia tri moi: ");
			scanf("%d",&m);
			arr[n]=m;
			for(int i=0 ; i<3;i++){
				printf("%d",arr[i]);
			}
		printf("\n");
		}else{
			printf("khong hop le");
		}
		
	
	
	
	return 0; 
} 
