#include<stdio.h>

int main(){
	int number;
	int arr[100] , min =arr[0],max =arr[0] ;
	int n;
	int sum=0 ,index;
	int kaka,haha = 0 ; 
	
while(1){
	printf("MENU\n1.Nhap so phan tu can nhap va gia tri cac phan tu\n2.In ra gia tri cac phan tu dang quay ly\n3.In ra gia tri cac phan tu chan va tinh tong\n4.In ra gia tri  lon nhat va nho nhat trong mang\n5.In ra cac phan tu la so nguyen to trong mang va tinh tong\n6.Nhap vao mot so thong ke trong mang co nhieu phan tu do\n.7them mot phan tu vao vi tri chi dinh\n.8thoat\n");
	scanf("%d",&number);
	switch(number){
	case 1:
	printf("moi ban nhap so phan tu can nhap va gia tri cac phan tu");
	scanf("%d",&n);
	for(int i = 0;i<n;i++){
		scanf("%d",&arr[i]);
       }
		break; 
	case 2:
		printf("In ra gia tri cac phan tu dang quan ly\n");
		for(int i =0 ; i<n;i++){
			printf("%d\n",arr[i]);
		}
	break;
	 case 3:
	 printf("in gia tri chan va tinh tong\n"); 
	 for(int i=0 ;i<n;i++){
	 	if(n % 2 ==0){
	 		sum += arr[i];
		 } 
	 } 
	 	 printf("tong la %d\n",sum);
	 	 break;
	case 4: 
			if (n > 0) {
                int max = arr[0];
                int min = arr[0];
                for (int i = 1; i < n; i++) {
                    if (arr[i] > max) {
                        max = arr[i];
                    }
                    if (arr[i] < min) {
                        min = arr[i];
                    }
                }
                    printf("Gia tri lon nhat trong mang: %d\n", max);
                    printf("Gia tri nho nhat trong mang: %d\n", min);
                    break; 
			}
			case 5:
				break; 
			case 6:
				printf("nhap mot so va thong ke trong mang co bao nhieu phan tu");
			 scanf("%d",&kaka);
			 for(int i = 0; i<n;i++){
			 	if(arr[i]=kaka){
			 		haha++;
				 }
			 	printf("mang %d  sau khi nhap : %d ",haha,kaka); 
			 }
	}
}
	return 0;
}
