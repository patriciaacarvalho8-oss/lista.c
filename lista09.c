#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
  setlocale(LC_ALL, "Portuguese");
  float nota;

  printf("Digite a nota do aluno: ");
  scanf("%f", &nota);

  if(nota >= 6){
printf("Aluno APROVADO!\n");
  }else{
    printf ("Aluno REPROVADO!\n");
  }

  system("pause");
    return 0;

}