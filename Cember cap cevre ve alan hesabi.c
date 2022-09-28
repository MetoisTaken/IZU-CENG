#include <stdio.h>

int main(){
    int yariCap;
    float PI=(3.14159);
    printf("Cemberin yaricapini girin: \n");
    scanf("%d", &yariCap);
    
    if(yariCap < 0){
        printf("Yaricap negatif olamaz.");
    }
   
    if(yariCap > 0){
    printf("Cap:%d\n", 2*yariCap);
    printf("Cevresi:%f\n", 2.0*yariCap*PI);
    printf("Alani:%f\n", yariCap*yariCap*PI);
    }
	return 0;
}