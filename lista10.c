#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
  setlocale(LC_ALL, "Portuguese");
  float idade1, idade2;

  printf("Digite a idade da primeira pessoa: ");
  scanf("%f", &idade1);

  printf("Digite a idade da segunda pessoa: ");
  scanf("%f", &idade2);

  if(idade1 >= idade2 ){
    printf("A primeira pessoa e a mais velha. ");
  }else{
    printf("A segunda pessoa e a mais velha. ");
  }


  system("pause");
    return 0;

}