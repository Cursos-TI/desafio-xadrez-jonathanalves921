#include <stdio.h>

int main() {
    //movimentação da torre
for (int i = 0; i < 5; i++){
    printf("Torre:");
    printf("Direita!\n");//imprime o valor de 5 casas para direita
}
printf("\n");

int b = 0; //variavel do bispo

while(b < 5){ //faz o bispo andar 5 casas
    printf("Bispo:");
    printf("Direita, Cima!\n");//imprime o valor de cinco casas (direita diagonal)
    b++;
}
printf("\n");

int r = 0;//variavel da rainha
do{
    printf("Rainha:");
    printf("Esquerda\n"); //imprime o valor de 8 casas para a direita
    r++;

}while (r < 8);
printf("\n");

//movimentação do cavalo
for (int l1 = 0; l1 < 1; l1++) {
    for (int l2 = 0; l2 < 2; l2++) {
        printf("Cavalo: Baixo\n");
    }
    printf("Cavalo: Direita\n");
}
printf("\n");
    return 0;
}

