#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int soma(int x);

int main(){

  setlocale(LC_ALL, "Portuguese");
  int num, resp;

  printf("Digite o primeiro numero: ");
  scanf(" %d", &num);

  printf("Digite o segundo numero: ");
  scanf(" %d", &num);

  printf("Digite o terceiro numero: ");
  scanf(" %d", &num);

  resp = soma(num);
  printf("A soma de %d é: %d\n", num, resp);
  
  system("pause");
    return 0;

}

int soma(int x){
    int s;

    s = x + x + x ;
    return s;

}