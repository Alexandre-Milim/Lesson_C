#include <stdio.h>
#include <locale.h>
int main(){
setlocale (LC_ALL, "Portuguese");
int contador;
float nota;
contador = 10;
nota = 9.5;
printf("O valor da variavel contador é %d", contador);
printf("\nO valor da variavel nota é %.2f\n", nota);

return 0;
}