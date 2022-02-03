#pragma once
#ifndef menu_restauracji_hpp
#define menu_restauracji_hpp

void wyswietl_liste_dania(const short int lDanychDan, char typ_dania, const short int linijka);
void menu_restauracji();

void skladanie_zamowienia_menu();
void zamowienie_wyswietl_liste_dania(const short int lDanychDan, char typ_dania, const short int linijka);
void zloz_zamowienie();
void wyswietlanie_zamowienia();

#endif
