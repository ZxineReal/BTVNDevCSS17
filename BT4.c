#include<stdio.h>
#include<string.h>

void addArr(int *arr,int size){
	for(int i=0;i<size;i++){
		printf("Moi ban nhap vao phan tu thu %d: ",i);
		scanf("%d",&arr[i]);
	}
	printf("\n");
}
void showEven(int *arr,int size){
	printf("Cac phan tu la so chan la: ");
	for(int i=0;i<size;i++){
		if(arr[i] %2 ==0){
			printf("%d\t",arr[i]);
		}
	}
	printf("\n");
}
void showPrime(int *arr,int size){
	 printf("Cac phan tu la so nguyen to: ");
    for (int i = 0; i < size; i++) {
        int n = arr[i];
        if (n>1){
            int isPrime=1;
            for (int j=2; j*j<=n;j++){
                if(n%j==0){
                    isPrime=0;
                    break;
                }
            }
            if(isPrime){
                printf("%d\t", n);
            }
        }
    }
    printf("\n");
}
void reverseArr(int *arr,int size){
	printf("Mang dao nguoc la: ");
	for(int i=size-1;i>=0;i--){
		printf("%d\t",arr[i]);
	}
	printf("\n");
}
void sortArr(int *arr,int size, char *sort){
	if(sort=='a'){
		for(int i=0;i<size;i++){
		}
	}
}
void findItem(){
}
int main(){
	int menu,size;
	int count=0;
	int arr[100];
	int index=0;
	
	do{
		printf("MENU\n");
		printf("1. Nhap vao so phan tu va tung phan tu\n");
		printf("2. In ra cac phan tu la sao chan\n");
		printf("3. In ra cac phan tu la so nguyen to\n");
		printf("4. Dao nguoc mang\n");
		printf("5. Sap xep mang\n");
		printf("   a. Tang dan\n");
		printf("   b. Giam dan\n");
		printf("6. Nhap vao mot phan tu va tim kiem phan tu\n");
		printf("7. Thoat\n");
		scanf("%d",&menu);
		
		if(count==0&&menu!=1&&menu!=7){
			printf("Mang rong, moi ban chon 1 de nhap vao cac phan tu\n");
			continue;
		}
		switch(menu){
			case 1:
				printf("Moi ban nhap vao so luong phan tu: ");
				scanf("%d",&size);
				addArr(arr,size);
				count++;
				break;
			case 2:
				showEven(arr,size);
				break;
			case 3:
				showPrime(arr,size);
				break;
			case 4:
				reverseArr(arr,size);
				break;
			case 5:
				char sort;
				printf("a. Tang dan\n");
				printf("b. Giam dan\n");
				fgets(sort,1,stdin);
				sortArr(arr,sort);
				break;
			case 6:
			 	break;
			case 7:
				printf("Thoat");
				break;
			default:
				printf("Khong hop le!\n");
		}
	}
	while(menu!=7);
	
	return 0;
}