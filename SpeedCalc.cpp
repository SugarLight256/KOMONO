#include <stdio.h>

int main(void){

	int intime;
	int outtime;
	int outtani;
	int intani;
	double input=0;
	double ans=0;
	
	printf("���x�ϊ��v���O����\n");
	printf("1:����  2:����  3:�b��\n");
	scanf("%d",&intime);
	printf("\n\n");
	
	printf("���͂���P�ʂ�I�����Ă�������\n");
	printf("1:km(�L�����[�g��)  2:m(���[�g��)\n");
	scanf("%d",&intani);
	printf("\n\n");
	
	printf("�l����͂��Ă�������\n");
	scanf("%lf",&input);
	printf("\n\n");
		
	printf("�ϊ���̒P�ʂ�I�����Ă�������\n");
	printf("1:km(�L�����[�g��) 2:m(���[�g��)\n");
	scanf("%d",&outtani);
	printf("\n\n");
	
	printf("�ϊ���̒P�ʂ�I�����Ă�������\n");
	printf("1:���� 2:���� 3:�b��\n");
	scanf("%d",&outtime);
	printf("\n\n");
	
	switch(outtani - intani){
	case 1:
		ans = input * 1000;
		break;
	case 0:
		ans = input;
		break;
	case -1:
		ans = input / 1000;
		break;
	}
	
	switch(outtime - intime){
	case 2:
		ans = ans / 3600;
		break;
	case 1:
		ans = ans /60;
		break;
	case 0:
		ans = ans;
		break;
	case -1:
		ans = ans * 60;
		break;
	case -2:
		ans = ans * 3600;
		break;
	}
	
	printf("����\n");
	printf("%f",ans);  
	switch(outtani){
	case 1:
		switch(outtime){
		case 1:
			printf("[km/h]");
			break;
		case 2:
			printf("[km/min]");
			break;
		case 3:
			printf("[km/s]");
			break;
		}
		break;
	case 2:
		switch(outtime){
		case 1:
			printf("[m/h]");
			break;
		case 2:
			printf("[m/min]");
			break;
		case 3:
			printf("[m/s]");
			break;
		}
		break;
	}
	printf("\n");
}