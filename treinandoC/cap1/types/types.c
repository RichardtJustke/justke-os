#include <stdio.h> //vou chamar de biblioteca igual no C++ ela aqui tras funções extra para o codigo
// essa expecificanete se cha,ma "Standard I/O"

int main(void) {  /*aqui podemos ter algumas variações o int na frente mostra o
   tipo de função int main(void) não recebe nada, retorna int void imprime(void)
   não recebe nada, não retorna nada int soma(int a, int b) recebe dois int,
   retorna int
   */
  int idade = 25; // inteiro, 4 bytes
  char letra = 'A';        // 1 byte - um caractere Ou um número pequeno
  float preco = 9.99f;     // decimal, 4 bytes, precisão baixa
  double pi = 3.14159265;  // decima, 8 bytes, precisçao alta
  long big = 99999999999L; // inteiro grande, 8 bytes

  printf("int: %d\n", idade);

  printf("char: %c (valor:%d)\n", letra, letra);
  printf("float: %f\n", preco);
  printf("double: %.8f\n", pi);
  printf("long: %ld\n", big);

  return 0;
}
