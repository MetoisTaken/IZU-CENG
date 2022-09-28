#include <stdio.h>

int main (){
	
	int x;

	printf("Sayi girisi yapiniz: \n");
	scanf("%d", &x);
	
	if(x % 2 == 0){
		printf("Girdiginiz sayi cift sayidir.", x);
	}
	
	else{
		printf("Girdiginiz sayi tek sayidir.", x);
	}
	
	return 0;
}
