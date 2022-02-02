#include <iostream>
#include <string>
#include <cstdlib>
#include <conio.h>				// _getch()
#include <windows.h>
#include "kontakt.hpp";
#include "menu_restauracji.hpp";
#include "panel_glowny.hpp";

using namespace std;

const short int rozmiarX = 120;					// do ustawienia szerokości okna


int main()
{
	
	setlocale(LC_ALL, ""); // znaki PL

	/******************** USTAWIANIE ROZMIARU OKNA ********************/
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE); // uchwyt standardowego wyjścia
	COORD c2; // struktura potrzebna do ustawienia rozmiarów bufora pamięci
	c2.X = rozmiarX; // szerokość na 120 szerokości znaków
	//c2.Y = 30; // wysokość na 40 wysokości znaków (usuwa suwak)
	SetConsoleScreenBufferSize(handle, c2); // ustawia rozmiar bufora (wyświetlanego tekstu)

	SMALL_RECT sr; // struktura wykorzystywana do ustawienia rozmiaru okna
	sr.Left = 0; // na zero
	sr.Top = 0; // na zero
	sr.Right = c2.X - 1; // szerokość o 1 mniejsza od bufora
	//sr.Bottom = c2.Y - 1; // wysokość o 1 mniejsza od bufora (usuwa suwak)
	SetConsoleWindowInfo(handle, true, &sr); // ustawia rozmiar okna (jednostka to szerokość i wysokość pojedynczego znaku)
	/******************************************************************/	
	
	menu_aplikacji();
	
	return 0;
}
