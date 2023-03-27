#include <stdio.h>
#include <stdlib.h>


//Procedury wypisujące tablice jednowymiarowe

Tablica double

void wypisz_d (double *poczatek, double *koniec) { 
  while (poczatek < koniec) 
    printf ("%6.2f", *poczatek++); 
  printf ("\n");    
  return;}

//Tablica int

void wypisz_i (int *poczatek, int *koniec) { 
  while (poczatek < koniec) 
    printf ("%4d ", *poczatek++);   
  printf ("\n");    
  return;}

//Funkcja licząca sumę elementów w tablicy:

int suma (int *tab, int len) { 
  int ss = 0.0;
  for (int i = 0; i < len; i++)  
    ss+= tab[i]; 
 return ss;}

//Procedura zamieniająca zawartość dwóch zmiennych przekazanych przez adres:

void swap (int *p_1, int *p_2) { 
  int temp = *p_1;
    *p_1 = *p_2;
    *p_2 = temp;
 return ;}

 int main(){


    return 0;
 }