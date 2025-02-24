#include <stdio.h>

    //movimentação da torre
void torre (int n) {
    if (n > 0){
        printf("Torre:Direita\n");
        torre(n - 1);

    }
}

//movimentação do bispo


void bispo(int n){
    if(n>0){
        printf("Bispo:Direta, Cima\n");
        bispo(n - 1);
    }
}



//variavel da rainha

void rainha(int n){
    if (n > 0){
        printf("Rainha: Esquerda\n");
        rainha (n - 1);
    }

}

int main(){
    torre(5);
    printf("\n");

    bispo(5);
    printf("\n");

    rainha(8);
    printf("\n");


//movimentação do cavalo
for (int i = 0, j = 0; i < 2 || j < 1;){
if (i <2){
    printf("Cavalo:Cima\n");
    i++;
    continue;
}
if (j < 1){
    printf("Cavalo:Direita\n");
    j++;
    break;
}

}
printf("\n");

    return 0;
}

