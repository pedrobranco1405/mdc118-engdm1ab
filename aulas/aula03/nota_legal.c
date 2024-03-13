#include <stdio.h>

int main () {
  printf("\x1b[35m-------------------------\n");
  printf("   N O T A   L E G A L   \n");
  printf("-------------------------\x1b[0m\n");
  printf("\x1b[32mItem          Qtd Valor     \x1b[0m\n");
  printf("\x1b[36m%-13s %03i %4.2f\n", "Banana nanica\x1b[0m", 2, 4.00);
  printf("\x1b[36m%-13s %03i %4.2f\n", "Coca cola\x1b[0m", 1, 7.00);
  printf("\x1b[36m%-13s %03i %4.2f\n", "Laranja\x1b[0m", 10, 8.00);
  printf("\x1b[36m%-13s %03i %4.2f\n", "Miojo Galin.\x1b[0m", 1, 5.00);
  // printf("Banana nanica  2     4.00\n");
  // printf("Coca cola      1     7.00\n");
  // printf("Laranja       10     8.00\n");
  // printf("Miojo Galin.   1     5.00\n");
  printf("-------------------------\n");
  printf("\x1b[31mTotal\x1b[0m...........: %10.2f", 53.00);
  
  return 0;
}