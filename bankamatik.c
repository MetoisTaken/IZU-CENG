#include <stdio.h>
#include <stdlib.h>

void clrscr()
{
    system("@cls||clear");
}

int main (){
	float bakiye1,bakiye2,tutar;
	int islem,bankaSec;
	
	printf("Bakiye1 degerini giriniz:\n");
	scanf("%f", &bakiye1);
	printf("Bakiye2 degerini giriniz:\n");
	scanf("%f", &bakiye2);
	clrscr();
	
	printf("******************************************\n");
	printf("Birinci hesaptaki bakiyeniz: %.2f\n", bakiye1);
	printf("Ikinci hesaptaki bakiyeniz: %.2f\n", bakiye2);
	printf("******************************************\n");
	printf("Yapilacak islemleri seciniz\n");
	printf("Para yatirma : A veya 1\n");
	printf("Para cekme : B veya 2\n");
	printf("Para gonderme : C veya 3\n");
	
	scanf("%d", &islem);
	
	switch(islem){
		case 1:	
			printf("Hangi hesaba para yatirmak istediginizi giriniz:\n1. Bakiye1\n2. Bakiye2\n");
			scanf("%d", &bankaSec);
			switch (bankaSec){
				case 1:
					printf("Yatirmak istediginiz para miktarini giriniz.\n");
					scanf("%f",&tutar);
					bakiye1 += tutar;
					printf("Yatirdiginiz tutar %.2f ve Bakiye1'in son durumu %.2f",tutar, bakiye1);	
				break;	
				case 2:
					printf("Yatirmak istediginiz para miktarini giriniz.\n");
					scanf("%f",&tutar);
					bakiye2 += tutar;
					printf("Yatirdiginiz tutar %.2f ve Bakiye2'in son durumu %.2f",tutar, bakiye2);
				break;								
			}
			break;
		
		case 2:
			printf("Hangi hesaba para yatirmak istediginizi giriniz:\n1. Bakiye1\n2. Bakiye2\n");
			scanf("%d", &bankaSec);
			switch (bankaSec){
				case 1:
					printf("Cekmek istediginiz para miktarini giriniz.\n");
					scanf("%f",&tutar);
					if (bakiye1 > tutar){
						if (tutar == 0){
						printf ("0 Giremezsiniz!");
						return 0;	
						}
						bakiye1 -= tutar;
						printf("Cektiginiz tutar %.2f ve Bakiye1'in son durumu %.2f",tutar, bakiye1);	
					} 
					else{
						printf("Bakiyeniz yetersiz.");
					}					
				case 2:
					printf("Cekmek istediginiz para miktarini giriniz.\n");
					scanf("%f",&tutar);
					if (bakiye2 > tutar){
						if (tutar == 0){
						printf ("0 Giremezsiniz!");
						return 0;	
						}
						bakiye2 -= tutar;
						printf("Cektiginiz tutar %.2f ve Bakiye2'in son durumu %.2f",tutar, bakiye2);	
					} 
					else{
						printf("Bakiyeniz yetersiz.");
					}										
			}
			break;		
			
		case 3:
			printf("Transfer bicimini seciniz:\n1. Bakiye1 --> Bakiye2\n2. Bakiye2 --> Bakiye1\n");
			scanf("%d", &bankaSec);
			switch (bankaSec){
				case 1:
					printf("Bakiye2'ye gondermek istediginiz para miktarini giriniz. \n");
					scanf("%f",&tutar);
					if (bakiye1 >= tutar){
						if (tutar <=0 ){
							printf("0 veya 0'dan kucuk sayi giremezsin");
							return 0;
						}
						bakiye1 -= tutar;
						bakiye2 += tutar;	
						printf("\nYaptiginiz islem: %.2f \n\nBakiye1: %.2f \nBakiye2: %.2f \n",tutar, bakiye1, bakiye2);
					}
					else{
						printf("Bakiyeniz yetersiz", bakiye1);
					}
					break;
				case 2:
					printf("Bakiye1'e gondermek istediginiz para miktarini giriniz. \n");
					scanf("%f",&tutar);
					if (bakiye2 >= tutar){
						if (tutar <=0 ){
							printf("0 veya 0'dan kucuk sayi giremezsin");
							return 0;
						}
						bakiye1 += tutar;
						bakiye2 -= tutar;	
						printf("\nYaptiginiz islem: %.2f \n\nBakiye1: %.2f \nBakiye2: %.2f \n",tutar, bakiye1, bakiye2);
					}
					else{
						printf("Bakiyeniz yetersiz", bakiye1);
					}
					break;										
			}			
			break;						
	}
	return 0;
}
