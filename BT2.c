#include<stdio.h>
#include<string.h>

void addStr(char *str){
	printf("Moi ban nhap vao chuoi:\n");
	fflush(stdin);
	fgets(str,100,stdin);
	printf("\n");
}
void showStr(char *str){
	printf("%s",str);
	printf("\n");
}
void countAlpha(char *str){
	int count = 0;
	for(int i=0;i<strlen(str);i++){
		if(str[i]>= 'a' && str[i]<= 'z' || str[i]>= 'A' && str[i]<= 'Z'){
			count++;
		}
	}
	printf("%d",count);
	printf("\n");
}
void countNumber(char *str){
	int count=0;
	for(int i=0;i<strlen(str);i++){
		if(str[i]>='0' && str[i]<='9'){
			count++;
		}
	}
	printf("%d",count);
	printf("\n");
}
void countSpecial(char *str){
	int count=0;
	int spec=0;
	for(int i=0;i<strlen(str);i++){
		if(str[i]<='z'&&str[i]>='a'||str[i]<='Z'&&str[i]>='A'||str[i]<='9'&&str[i]>='0'){
			count++;
		}
	}
	spec=strlen(str)-count;
	printf("%d",spec-1);
	printf("\n");
}
int main(){
	int menu;
	char str[100];
	int count=0;
	
	do{
		printf("MENU\n");
		printf("1. Nhap vao chuoi\n");
		printf("2. In ra chuoi\n");
		printf("3. Dem so luong chu cai trong chuoi va in ra\n");
		printf("4. Dem so luong chu so trong chuoi va in ra\n");
		printf("5. Dem so luong ki tu dac biet trong chuoi va in ra\n");
		printf("6. Thoat\n");
		scanf("%d",&menu);
		
		if(count==0&&menu!=1&menu!=6){
			printf("Chuoi rong, moi ban chon 1 de nhap vao chuoi\n");
			continue;
		}
		switch(menu){
			case 1:
				addStr(str);
				count++;
				break;
			case 2:
				printf("Chuoi ban vua nhap la: ");
				showStr(str);
				break;
			case 3:
				printf("So luong chu cai trong chuoi la: ");
				countAlpha(str);
				break;
			case 4:
				printf("So luong chu so trong chuoi la: ");
				countNumber(str);
				break;
			case 5:
				printf("So luong ki tu dac biet trong chuoi la: ");
				countSpecial(str);
				break;
			case 6:
				printf("Thoat");
				break;
			default:
				printf("Khong hop le!!!\n");
			
		}
	}
	while(menu!=6);
	
	return 0;
}