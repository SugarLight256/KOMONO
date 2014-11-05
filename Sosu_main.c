#include <stdlib.h>
#include <stdio.h>

#define ANSMAX 100000

int main(void){
	
	char sMax[10];
	char sMin[10];
	char sMode[10];
	unsigned int Max;
	unsigned int Min;
	unsigned int Mode;
	unsigned int ans[ANSMAX];
	int i;
	int j;
	int k=0;
	
	printf("###################################\n");
	printf("         素数算出プログラム　　 　 \n");
	printf("###################################\n");
	printf("モードを選択してください\n");
	
	printf("素数のみ:1 素数以外:2 すべて:3\n");
	scanf("%s",&sMode);
	
	printf("最大値を入力してください\n");
	scanf("%s",&sMax);
	
	printf("最小値を入力してください\n");
	scanf("%s",&sMin);
	
	Max=atoi(&sMax);
	Min=atoi(&sMin);
	Mode=atoi(&sMode);
	
	for(i=2 ; i<=ANSMAX && i<=Max ; i++){
	for(j=2 ; j<=i      ; j++){
		if(i==j){
			ans[i]=0;
		}else if(i%j==0){
			ans[i]=j;
			break;
		}
	}
	}
	
	printf("1,0は素数ではありません\n");
	for(i=2 ; i<=Max ; i++){
		if(ans[i]==0 && Mode!=2){
			k++;
			printf("%d:素数です\n",i);
		}else if(Mode != 1){
			printf("%d:%dで割り切れます\n",i,ans[i]);
		}
	}
	printf("%d",k);
	return 0;
}
	
	