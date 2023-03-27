#include <stdio.h>
#include <stdlib.h>

//counts pairs and their number.


int main(void){
    const int pairs [] = {90,10,1,2,3,4,5,10,1,90,90,90,10,22};
    int N = sizeof(pairs)/sizeof(pairs[0]);
    int *p = (int*) malloc(N*sizeof(pairs[0]));
    int num [N],x=0;

    for (int i=0; i < N; ++i){p[i] = -1; num[i]=0;}

    for(int i=0;i<N;i++){
        for(int j=i;j<N;j++){
            if(pairs[j]==pairs[i]){
                for(int k=0;k<i;k++){
                    if(pairs[i]!=p[k]){
                        ++x;
                    }
                }
                if(x==i){
                    p[i] = pairs[i];
                    ++num[i]; 
                }
                x=0;
            }
        }
    }
    printf("there are %d numbers in the pairs array\n",N);
    for(int i=0;i<N;++i){
        if(p[i]!=-1)
            printf("the number %d makes %d pairs\n",p[i],num[i]/2);}
    free(p);
    return 0;
}
