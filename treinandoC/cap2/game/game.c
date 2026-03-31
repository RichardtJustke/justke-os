#include <stdio.h>

int main(void) {
  int segredo = 5;
  int palpite;

  while (segredo != palpite) {
    printf("Digite um número de 0 a 10:");

    scanf("%d", &palpite);

    if (segredo >= palpite) {
      printf("um pouco mais");
    } else if (segredo <= palpite) {
      printf("um pouco menos");
    }
  }
  printf("Vc acertou!!!");
}
