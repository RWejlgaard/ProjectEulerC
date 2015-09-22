#include <stdio.h>
#include <stdlib.h>

#define LIMIT 105000

int main(){
    long int i,j;
    int *lst;
    int z = 1;

    lst = malloc(sizeof(int)*LIMIT);

    for (i = 2;i < LIMIT; i++){
      lst[i] = 1;
    }

    for (i = 2;i < LIMIT; i++){
      if (lst[i]){
        for (j = i;i * j < LIMIT;j++){
          lst[i * j]=0;
          printf("%d\n", lst[i*j]);
        }
      }
    }

    for (i = 2;i < LIMIT;i++){
      if (z == 10001) {
        printf("Prime: %d \t Place: %d\n", i, z);
        z++;
      }
      else if (lst[i]){
        z++;
      }
    }

    return 0;
}
