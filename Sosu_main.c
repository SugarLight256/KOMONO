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
	printf("         �f���Z�o�v���O�����@�@ �@ \n");
	printf("###################################\n");
	printf("���[�h��I�����Ă�������\n");
	
	printf("�f���̂�:1 �f���ȊO:2 ���ׂ�:3\n");
	scanf("%s",&sMode);
	
	printf("�ő�l����͂��Ă�������\n");
	scanf("%s",&sMax);
	
	printf("�ŏ��l����͂��Ă�������\n");
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
	
	printf("1,0�͑f���ł͂���܂���\n");
	for(i=2 ; i<=Max ; i++){
		if(ans[i]==0 && Mode!=2){
			k++;
			printf("%d:�f���ł�\n",i);
		}else if(Mode != 1){
			printf("%d:%d�Ŋ���؂�܂�\n",i,ans[i]);
		}
	}
	printf("%d",k);
	return 0;
}
	
	