#include<stdio.h>

int main(){
	int number;
	int arr[100][100];
	int x, y,n,m;
	int tong;
	while(1){	
	printf("MENU\n 1.nhap vao mang\n2.hien thi mang\n 3.them phan tu\n 4.sua phan tu\n 5.xoa phan tu\n 6.thoat \n");
		scanf("%d",&number);
		switch(number){
			case 1:
				printf("nhap vao hang va cot: ");
				scanf("%d %d",&x,&y);
				if( x<0 || x>100 || y<0 ||y>100){
					printf("nhap lai ");
				}
				printf("moi ban nhap vao mang ");
				for(int i =0 ; i<x;i++){
					for(int j=0;j<y;j++){
					scanf("%d",&arr[i][j]);	
					}
				}
				break;
				case 2:
		   		for(int i=0 ; i<x;i++){
		   			for(int j=0;j<y;j++){
		   				printf("%d \n",arr[i][j]);
					   }
					   printf("\n");
					   break;
		}
				case 3:
					printf("them phan tu:  ");
				for(int i=0;i<x;i++){
					for(int j=0;j<y;j++){
						printf("array[%d][%d]= \n",i,j);
						scanf("%d",&arr[i][j]);	
					}
					break;
					}
				case 4:
				printf("sua phan tu");
				printf("moi ban nhap  vi tri can sua : ");
				scanf("%d",&n);
				if(n>=0 || n<100){
					printf("gia tri ban nhap moi:");
					scanf("%d",&m);
					arr[int i]=m;
					for(;int i=0;i<x;i++){
						printf("%d",arr[i]);
					}
					
				}
				scanf("%d",&)
				break;
				case 5:
				printf("xoa phan tu \n");
				for( int i = 0; i< n ; i++){
					arr[i]= 
				} 
				
			}
			
		
		
		
		
	}
}
