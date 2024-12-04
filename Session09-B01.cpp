#include<stdio.h>

int mian(){
	int a[100],mlb,bbr,dsq;//mlb doi dai mang;bbr vitri phan tu ; them phan tu 
while(1){
	printf("Moi ban nhap do dai=  \n");
	scanf("%d",&mlb);
	 if (0<mlb || mlb > 100){
	 	printf("do dai khong hop le");
	 }else{
	 	break;
	 }
}
	for(int i =0 ; i<mlb ;i++){
		printf("array[%d]=  \n",i);
		scanf("%d",&a[i]);
	}
while(1){
	printf("moi ban nhan vi tri them phan tu ");
	scanf("%d",&bbr);
	if(0 <bbr || bbr>100){
		printf("vi tri can them khomg hop le ");
	}else{
		break;
	}
		printf("Mio ban nhap vi tri them vao mang  ");
	scanf("%d",&dsq);
}
	return 0;
	 
} 
