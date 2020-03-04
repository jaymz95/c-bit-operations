#include <stdio.h>
#include <inttypes.h>

int main(int argc, char *argv[]){
	
  uint8_t a = 73;
  uint8_t b = 99;
  uint8_t c = (a ^ b);

  printf("a = "); printbits(a); printf("\n");
  printf("b = "); printbits(b); printf("\n");
  printf("c = "); printbits(c); printf("\n");

  printf("\n\n");

  printf(" a = "); printbits( a); printf("\n");
  printf("~a = "); printbits(~a); printf("\n");

  printf("\n\n");

  printf(" 1       = "); printbits( 1      ); printf("\n");
  printf("(1 << 3) = "); printbits((1 << 3)); printf("\n"); 

  printf("\n\n");

  printf(" 99       = "); printbits(            99                   ); printf("\n");
  printf("(99 << 3) = "); printbits((((uint8_t) 99) << ((uint8_t) 3))); printf("\n"); 

  printf("\n\n");

  printf("              99 = "); printbits(              99); printf("\n");
  printf("(1ULL << 5)      = "); printbits((1ULL << 5)     ); printf("\n");
  printf("(1ULL << 5) & 99 = "); printbits((1ULL << 5) & 99); printf("\n"); 

  return 0;
}