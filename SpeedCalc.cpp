#include <stdio.h>

int main(void){

	int intime;
	int outtime;
	int outtani;
	int intani;
	double input=0;
	double ans=0;
	
	printf("速度変換プログラム\n");
	printf("1:時速  2:分速  3:秒速\n");
	scanf("%d",&intime);
	printf("\n\n");
	
	printf("入力する単位を選択してください\n");
	printf("1:km(キロメートル)  2:m(メートル)\n");
	scanf("%d",&intani);
	printf("\n\n");
	
	printf("値を入力してください\n");
	scanf("%lf",&input);
	printf("\n\n");
		
	printf("変換先の単位を選択してください\n");
	printf("1:km(キロメートル) 2:m(メートル)\n");
	scanf("%d",&outtani);
	printf("\n\n");
	
	printf("変換先の単位を選択してください\n");
	printf("1:時速 2:分速 3:秒速\n");
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
	
	printf("結果\n");
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