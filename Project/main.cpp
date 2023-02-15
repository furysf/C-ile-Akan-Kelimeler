#include <stdio.h>
#include <conio.h>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>

void delay(int a){
   
    int msaniye = 1000 * a;
 
    clock_t baslangic= clock();
 
    while(clock() < baslangic+ msaniye);
}
void yazdir(char *y){
	int a = 0;
	
	
	while(*(y+a)!='\0'){
		if(*(y+a)==' '){
			a++;
			delay(1.5);
			system("cls");
		}
		else {
			printf("%c",*(y+a));
			a++;
		}
	}
	
}


int main(){
	int c;
	char dizi[100];
	
	puts("Cümle giriniz: ");
	gets(dizi);
	system("cls");
	yazdir(dizi);
	
	
	
	
	
}
