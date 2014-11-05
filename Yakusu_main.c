#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	char sInput[10000];
	int Input;
	int ans[10000];
	int i;
	int j;
	
	printf("#################################\n");
	printf("  数理演習用約数表示プログラム  \n");
	printf("#################################\n\n");
	printf("数値を入力してください(10000以下)\n");
	scanf("%s",&sInput);
	
	Input=atoi(&sInput);
	
	for(i=0;i<=10000;i++){
		ans[i]=0;
	}
	
	for(i=1;i<=10000;i++){
		if(Input%i==0){
			ans[j]=i;
			j++;
		}
	}
	for(i=1;i<=10000;i++){
		if(ans[i]!=0){
			printf("%d\n",ans[i]);
		}
	}
}