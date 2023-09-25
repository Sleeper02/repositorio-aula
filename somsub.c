#include<stdio.h>
#include<locale.h>


//abre.ai/minicurso-git-secompp
int soma(int n1, int n2){
    int soma;

    soma = n1+n2;
    return(soma);
}

int sub(int n1, int n2){
    int sub;

    sub = n1-n2;
    return (sub);
}

int div(int n1, int n2){
    int div;
    if(n2!=0){
    div = n1/n2;
    return (div);
    }
}

int mult(int n1, int n2){
    int mult;

    mult = (n1*n2);
    return (mult);
}

int main (){
    int n1, n2, op;
    
    printf ("CR7 > Mbappe\n");

    while (op!=9){
    printf ("Qual operação será utilizada\n Soma = 1\n Subtração = 2\n Divisão = 3\n Multiplicação = 4\n Quit = 9\n Insira a sua escolha: ");
    scanf ("%d", &op);

    switch(op){

        case 1:

        printf("Insira o primeiro numero: ");
        scanf ("%d", &n1);
        printf("Insira o segundo numero: ");
        scanf ("%d", &n2);
        printf("A soma foi %d", soma(n1,n2));
        break;

        case 2:

        printf("Insira o primeiro numero: ");
        scanf ("%d", &n1);
        printf("Insira o segundo numero: ");
        scanf ("%d", &n2);
        printf("A subtração foi %d", sub(n1,n2));
        break;

        case 3:

        printf("Insira o primeiro numero: ");
        scanf ("%d", &n1);
        printf("Insira o segundo numero: ");
        scanf ("%d", &n2);
        printf("A divisão foi %d", div(n1,n2));
        break;

        case 4:

        printf("Insira o primeiro numero: ");
        scanf ("%d", &n1);
        printf("Insira o segundo numero: ");
        scanf ("%d", &n2);
        printf("A multiplicação foi %d", mult(n1,n2));
        break;

        case 9:
        break;
    }
    }
        return 0;
    }