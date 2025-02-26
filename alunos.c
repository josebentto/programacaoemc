#include <stdio.h>

int main () {
    int idade, matricula;
    float altura;
    char nome [50];

printf ("digite sua idade: \n");
scanf ("%d", &idade);

printf ("digite sua altura: \n");

scanf ("%f", &altura);

printf("digite o seu nome: \n");

scanf ("%s", &nome);

printf ("digite sua matricula: \n");
scanf ("%d", &matricula);

printf("Nome do aluno: %c - matricula: %d\n", nome, matricula);

printf("Idade: %d - altura: %F",  idade, altura);

return 0;}
