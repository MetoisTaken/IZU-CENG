#include <stdio.h>

int main(){

	float yariCap;
    float PI=(3.142);
    printf("Çemberin yarıçapını giriniz. ");
    scanf("%f", &yariCap);
    
    printf("Çemberin çapı %f\n", 2*yariCap);
    printf("Çemberin çevresi %f\n", 2*yariCap*PI);
    printf("Çemberin alanı %f\n", yariCap*yariCap*PI);

	return 0;
}
