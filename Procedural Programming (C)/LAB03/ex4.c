#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

// funkcja zamieniająca kolejność elementów tablicy w taki sposób by liczby parzyste były przed liczbami nieparzystymi

int i_rand(int, int);
void wypisz_i(int *, int *);
void swap(int *, int *);

int main(void){
  srand(time(NULL));
  int t[N];
  for(int i=0; i<N; ++i)
    t[i] = i_rand(0, 100);
  printf("wylosowana:  "); wypisz_i(t, t+N);
  for(int i=0; i < N-1; ++i) {
    for(int j=i+1; j<N; ++j) {
      if(t[i]%2 == 1 && t[j]%2 == 0)
        swap(t+i, t+j);
    }
  }
  printf("posortowana: "); wypisz_i(t, t+N);
  return 0;
}


int i_rand(int min, int max){
    return rand() % (max-min+1) + min;
}
void wypisz_i (int *poczatek, int *koniec) { 
  while (poczatek < koniec) 
    printf ("%4d ", *poczatek++);   
  printf ("\n");    
}
void swap (int *p_1, int *p_2) { 
    int temp = *p_1;
    *p_1 = *p_2;
    *p_2 = temp;
}
