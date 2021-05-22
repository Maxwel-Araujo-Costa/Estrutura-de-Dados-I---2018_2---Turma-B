#include <stdio.h>
#include <windows.h>
#include <conio.h>

//Maxwel Araujo Costa


void gotoXY(int lin, int col) {
	COORD coord = {col, lin}; //Inicializa as coordenadas
	//seta a posição
	SetConsoleCursorPosition (GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int capturaTela() {
	int tecla;
	
	do {
		tecla = getch();
		
		if (tecla == 224)
			tecla =getch();
	} while (tecla != 27 && tecla != 32 && tecla != 72 &&
			 tecla != 80 && tecla != 77 && tecla != 75 &&
			 tecla != 8);
			 
	if (tecla == 27)
		exit(0); //Sai do programa
		
	return tecla;
}

void main () {
	
	int y = 12; 
	int x = 40;
	int teclas;
	
	gotoXY (y,x);
	
	do {
		teclas = capturaTela();
	
		if ((x>=0)&&(y>=0)&&(x<=79)&&(y<=24)) {
		
			if (teclas == 72) {
				y=y-1;
				gotoXY (y,x);
			}
			
			if (teclas == 80) {
				y=y+1;
				gotoXY (y,x);
			}
			
			if (teclas == 75) {
				x=x-1;
				gotoXY (y,x);
			}
			
			if (teclas == 77) {
				x=x+1;
				gotoXY (y,x);
			}
			
			if (teclas == 32) {
				printf("*");
				gotoXY (y,x);
			}
			
			if (teclas == 8) {
				printf(" ");
				gotoXY (y,x);
			}
		}
		
		if (x<0){
			x=0;
			gotoXY (y,x);
		}
		
		if (y<0){
			y=0;
			gotoXY (y,x);
		}
		
		if (x>79){
			x=79;
			gotoXY (y,x);
		}
		
		if (y>24){
			y=24;
			gotoXY (y,x);
		}
		
	} while (teclas != 27);
	
}
