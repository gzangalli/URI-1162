#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j, n, l, s, k, aux;
    int *trem = NULL;

    printf("Digite o numero de testes: ");
    scanf("%d", &n);

    for(k=0; k<n; k++){
        printf("Digite o numero de trens: ");
        scanf("%d", &l);
        trem = (int*)malloc(l*sizeof(int));
        for (j=0; j<l; j++){
            printf("Digite o trem na posicao %d: ", j);
            scanf("%d", &trem[j]);
        }
        s = 0;
        for(i=0; i<l-1; i++){
            for(j=0; j<l-1; j++){
                if(trem[j] > trem[j+1]){
                    aux = trem[j];
                    trem[j] = trem[j+1];
                    trem[j+1] = aux;
                    s++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n", s);
        free(trem);
    }

}
