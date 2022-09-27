#include <stdio.h>

int main(){

	char x; 
	int y;

    printf("Herhangi bir karakter girin.");
    scanf("%c", &x);
    
    printf("Girdiğiniz karakterin ASCII olarak karşılığı %d \n", x);

    printf("Girdiğiniz karakterin ASCII numarasına eklenecek sayıyı girin.");
    scanf("%d", &y);    
    
    printf("Son durumda oluşan karakterin ASCII olarak karşılığı %d \n", x+y);

	printf("%c + %d = %c\n", x,y,x+y);

	return 0;
}
