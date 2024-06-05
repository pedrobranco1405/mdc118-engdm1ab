#include <stdio.h>

int main() {
  signed char caracter_com_sinal; // 1 byte -128 a 127
  unsigned char caracter_sem_sinal; // 1 byte 0 a 255

  signed int inteiro_com_sinal; // 4 bytes -2147483648 a 2147483647
  unsigned int inteiro_sem_sinal; // 4 bytes 0 a 4294967295
  
  short int inteiro_curto; // 2 bytes -32mil a 32mil
  unsigned short int inteiro_curto_sem_sinal; // 2 bytes 0 a 64mil
  
  long int inteiro_longo; // 8 bytes -9hexa a 9hexa
  unsigned long int inteiro_longo_sem_sinal; // 8 bytes 0 a 18hexa

  long double duplo_longo; // 16 bytes -1.2e+4932 a 1.2e+4932
  
  
  return 0;
  
}