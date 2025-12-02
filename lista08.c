#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int triplo(int x);

int main(){

  setlocale(LC_ALL, "Portuguese");
  int num, resp;

  printf("Digite o numero que ira ser triplicado: ");
  scanf(" %d", &num);

  resp = triplo(num);
  printf("O triplo de %d é: %d\n", num, resp);
  
  system("pause");
    return 0;

}

int triplo(int x){
    int t;

    t = x * 3;
    return t;

}