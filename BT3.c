#include<stdio.h>
#include<string.h>

void addStr(char *str){
	printf("Moi ban nhap vao chuoi: ");
	getchar();
	fgets(str,100,stdin);
}
void reverseStr(char *str){
	char reverse[100];
    int j = 0;
    for (int i = strlen(str) - 1; i >= 0; i--) {
        reverse[j] = str[i];
        j++;
    }
    reverse[j] = '\0';
    printf("Chuoi dao nguoc: %s\n", reverse);
}
void countWords(char *str){
	int count=1;
	for(int i=0;i<strlen(str);i++){
		if(str[i]==' '){
			count++;
		}
	}
	printf("So luong tu trong chuoi la: %d",count);
	printf("\n");
}
void compareStr(char *str){
    char other[100];
    printf("Moi ban nhap chuoi khac: ");
    getchar();
    fgets(other,100,stdin);

    if (strcmp(str, other) == 0) {
        printf("Hai chuoi giong nhau\n");
    } else {
        printf("Hai chuoi khac nhau\n");
    }
}
void upperStr(char *str) {
    for (int i=0;i<strlen(str);i++) {
        str[i]=toupper(str[i]);
    }
    printf("Chuoi in hoa: %s\n", str);
}
void joinStr(char *str){
    char other[100];
    printf("Moi ban nhap chuoi khac: ");
    getchar();
    fgets(other, 100, stdin);

    strcat(str, other);
    printf("Chuoi sau khi noi: %s\n", str);
}
int main(){
	int menu;
	int count=0;
	char str[100];
	
	do{
		printf("MENU\n");
		printf("1. Nhap vao chuoi\n");
		printf("2. In ra chuoi dao nguoc\n");
		printf("3. Dem so luong tu trong chuoi\n");
		printf("4. Nhap vao chuoi khac, so sanh chuoi do voi chuoi ban dau\n");
		printf("5. In hoa tat ca chu cai trong chuoi\n");
		printf("6. Nhap vao chuoi khac va them vao chuoi ban dau\n");
		printf("7. Thoat\n");
		scanf("%d",&menu);
		
		if(count==0 && menu!=1 && menu!=7){
			printf("Chuoi rong, moi ban chon 1 de them vao chuoi\n");
			continue;
		}
		switch(menu){
			case 1:
				addStr(str);
				count++;
				break;
			case 2:
				reverseStr(str);
				break;
			case 3:
				countWords(str);
				break;
			case 4:
				compareStr(str);
				break;
			case 5:
				upperStr(str);
				break;
			case 6:
				joinStr(str);
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