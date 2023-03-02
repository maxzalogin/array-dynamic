#include <stdio.h>
#include <stdlib.h>

#define ROW 5
#define COL 5

int main() {

  int** array = malloc(ROW * sizeof(int *));
  int* val = malloc(ROW * COL * sizeof(int));
  int count = 0;

  for (int i = 0; i < ROW; i++){
    array [i]= val + COL * i;
  }

  for (int i = 0; i < ROW; i++ ) {
    for (int j = 0; j < COL; j++) {
    array[i][j] = ++count;
    }
  }

for (int i = 0; i < ROW; i++ ) {
    for (int j = 0; j < COL; j++) {
      printf("%2d", array [i][j]);
      if(i != COL)
      printf(" ");
    }
    printf("\n");
  }

free(val);
free(array );

  return 0;
}