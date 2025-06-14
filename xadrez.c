#include <stdio.h>

int main(){
    int posicaoCavalo;
    int moviTorre, posicaoTorre;
    int contadorT;
    int posicaoBispo;
    int moviBispo;
    int contadorB = 0;
    int r;// rainha inicializaçao do laço FOR.
    int moviRainha;
    int posicaoRainha;


        printf("Digite o numero de casas que deseja mover sua Rainha:\n"); // 
        scanf("%d",&moviRainha);
// condiçao para identifica quando for solicitada a movimenta, gerando menu interativo para a escolha da posiçao.       
    if(moviRainha > 0){   
        printf("Digite qual sentido do movimento:\n");
        printf("1.Esqueta \n");
        printf("2.Diteira \n");
        printf("3.Frente \n");
        printf("4.Trás \n");
        printf("5.Diagonal esquerda frente\n");
        printf("6.Diagonal direita frente \n");
        printf("7.Diagonal esquerda trás \n");
        printf("8.Diagonal direita trás \n");
        scanf("%d", &posicaoRainha);
        printf(" \n");}
// switch para identifica a posiçao solicitada.
        switch (posicaoRainha)
        {
        case 1:
                for (int r = 0; r < moviRainha ; r++)
            {
             printf("Esqueda!\n");
            }
           if(moviRainha == r){
            moviRainha = 0;
           }
        
    break;

        case 2:     
                for (int r = 0; r < moviRainha ; r++)
            {
             printf("Direita!\n");
            }
           if(moviRainha == r){
            moviRainha = 0;
           }        
    break;

        case 3:          
                for (int r = 0; r < moviRainha ; r++)
            {
             printf("Frente!\n");
            }
           if(moviRainha == r){
            moviRainha = 0;
           }        
    break;

        case 4:
                for (int r = 0; r < moviRainha ; r++)
            {
             printf("Trás!\n");
            }
           if(moviRainha == r){
            moviRainha = 0;
           }                   
    break;

        case 5:
                for (int r = 0; r < moviRainha ; r++)
            {
             printf("Diagonal esquerda frente!\n");
            }
           if(moviRainha == r){
            moviRainha = 0;
           }        
           
        
    break;

        case 6:
                for (int r = 0; r < moviRainha ; r++)
            {
             printf("Diagonal direita frente!\n");
            }
           if(moviRainha == r){
            moviRainha = 0;
           }         
           
        
    break;
        
        case 7:
                for (int r = 0; r < moviRainha ; r++)
            {
             printf("Diagonal esquerda trás!\n");
            }
           if(moviRainha == r){
            moviRainha = 0;
           }                    
    break;

        case 8:
                for (int r = 0; r < moviRainha ; r++)
            {
             printf("Diagonal direita trás!\n");
            }
           if(moviRainha == r){
            moviRainha = 0;
           }                    
    break;
       
    default:
    if(posicaoRainha < 0 || posicaoRainha > 8){
           printf("Opção Invalida!!!");}
            break;
        }

//menu interativo


        printf("Digite o numero de casas que deseja mover seu Bispo:\n"); 
        scanf("%d",&moviBispo);
        printf("Digite qual sentido do movimento do Cavalo:\n");
        printf("1.Diagonal esquerda frente\n");
        printf("2.Diagonal direita frente \n");
        printf("3.Diagonal esquerda trás \n");
        printf("4.Diagonal direita trás \n");
        scanf("%d", &posicaoBispo);
        printf(" \n");

        // Verificação de entrada invalida
        if(posicaoBispo < 1 || posicaoBispo > 4){
        printf("Opção inválida!\n");
        return 1;
        }

do{   
    switch (posicaoBispo)
{
case 1:
    printf("Diagonal Esquerda frente \n"); 
    break;

case 2:
    printf("Diagonal Direita frente \n");
break;

case 3:
    printf("Diagonal Esquerda trás \n");
break;

case 4:
    printf("Diagonal Direita trás \n");
break;
}
contadorB++;

}while (contadorB < moviBispo);


     
 //movimentação da torre
//menu interativo

  printf("Digite o numero de casas que deseja mover sua Torre:\n"); 
    scanf("%d", &moviTorre);

    printf("Digite qual sentido do movimento:\n");
    printf("1. Esquerda\n");
    printf("2. Direita\n");
    printf("3. Frente\n");
    printf("4. Trás\n");
    scanf("%d", &posicaoTorre);
    printf("\n");

    // Verificação de entrada invalida
    if (posicaoTorre < 1 || posicaoTorre > 4) {
        printf("Opção inválida!\n");
        return 1;
    }

    // 
    while (contadorT < moviTorre) {
        switch (posicaoTorre) {
            case 1:
                printf("esquerda\n");
                break;
            case 2:
                printf("direita\n");
                break;
            case 3:
                printf("frente\n");
                break;
            case 4:
                printf("trás\n");
                break;
        }
        contadorT++;
    }

//movimentaçao do cavalo
    printf("Digite qual sentido do movimento:\n");
    printf("1. 2Frente - 1Esquerda\n");
    printf("2. 2Frente - 1Direita\n");
    printf("3. 2Esquerda - 1Frente\n");
    printf("4. 2Esquerda - 1Trás\n");
    printf("5. 2Direita - 1Frente\n");
    printf("6. 2Direita - 1Trás\n");
    printf("7. 2trás - 1Esquerda\n");
    printf("8. 2Trás - 1Direita\n");
  
    scanf("%d", &posicaoCavalo);
    printf("\n");

    
switch (posicaoCavalo)
{
case 1:
    for (int i = 0; i < 1; i++){
        for (int j = 0; j < 2 ; j++){
            printf("frente\n");
    }
            printf("esquerda\n");
}

    break;

case 2:
    for (int i = 0; i < 1; i++){
        for (int j = 0; j < 2 ; j++){
            printf("frente\n");
    }
            printf("direita\n");
    }
    break;

case 3:
    for (int i = 0; i < 1; i++){
        for (int j = 0; j < 2 ; j++){
            printf("esquerda\n");
    }
            printf("frente\n");
    }
    break;

case 4:
    for (int i = 0; i < 1; i++){
        for (int j = 0; j < 2 ; j++){
            printf("esquerda\n");
    }
            printf("trás\n");
    }
    break;

case 5:
    for (int i = 0; i < 1; i++){
        for (int j = 0; j < 2 ; j++){
            printf("direita\n");
    }
            printf("frente\n");
    }
    break;

case 6:
    for (int i = 0; i < 1; i++){
        for (int j = 0; j < 2 ; j++){
            printf("direita\n");
    }
            printf("trás\n");
    }
    break;

case 7:
    for (int i = 0; i < 1; i++){
        for (int j = 0; j < 2 ; j++){
            printf("trás\n");
    }
            printf("esquerda\n");
    }
    break;
    
case 8:
   for (int i = 0; i < 1; i++){
        for (int j = 0; j < 2 ; j++){
            printf("trás\n");
    }
            printf("direita\n");
    }
    break;
 default:
    if(posicaoCavalo < 0 || posicaoCavalo > 8){
           printf("Opção Invalida!!!");}
            break;

    return 0;
}
}

/*
  Aqui esta o uso da recursividade do desafio Mestre, nao quis substituir 
 o codigo anterio nem sei como cria outro codigo no mesmo desafio sem subistituir o anterior.

    for (int i = 0; i < 1; i++){
        for (int j = 0; j < 2 ; j++){
            printf("Cavalo Frente\n");
    }
            printf("Cavalo Direita\n");
    }



*/