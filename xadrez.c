#include <stdio.h>

int main() {
    //movimentação da torre
for (int i = 0; i < 5; i++){
    printf("Torre:");
    printf("Direita!\n");//imprime o valor de 5 casas para direita
}
int b; //variavel do bispo

while(b < 5){ //faz o bispo andar 5 casas
    printf("Bispo:");
    printf("Direita, Cima!\n");//imprime o valor de cinco casas (direita diagonal)
    b++;
}
int r;//variavel da rainha
do{
    printf("Rainha:");
    printf("Esquerda\n"); //imprime o valor de 8 casas para a direita
    r++;

}while (r < 8);

    return 0;
}

