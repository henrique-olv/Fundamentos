#include <stdio.h>
#include <stdlib.h>

  int main(){

    int n1,n2,n3,maior,menor;

    printf("Digite 3 numeros inteiros:\n");
    scanf("%d%d%d",&n1,&n2,&n3);

    if(n1 > n2 && n1 > n3){
      maior = n1;
    } else if(n2 > n1 && n2 > n3){
      maior = n2;
    } else {
      maior = n3;
    }

    if(n1 < n2 && n1 < n3){
      menor = n1;
    } else if(n2 < n1 && n2 < n3){
      menor = n2;
    } else {
      menor = n3;
    }

    printf("Maior numero: %d\n",maior);
    printf("Menor numero: %d\n",menor);

    return 0;
  }