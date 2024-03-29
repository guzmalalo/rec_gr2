#include <stdio.h>

void hello(int n){
    if(n>2){
        return;
    }
    printf("Hello, World! from hello(%d)\n",n);
    hello(n+1);
}

int mulRec(int a, int b ){
    // cas base
    if(b == 1){
        return a;
    }

    // cas gene
    return a + mulRec(a, b-1);
}

int puiRec(int b, int n){
    // cas de base
    if(n == 0){
        return 1;
    }

    // cas gene
    return b* puiRec(b,n-1);

}


// fibonacci
int fibo(int n){
    // cas de base
    if(n<2){
        return 1;
    }

    // cas gene
    return fibo(n-1) + fibo(n-2);

}

// strlen recursif
int mystrlen(char * tab){
    // cas de base (condition d'arret)
    if ( tab[0] == '\0'){
        return 0;
    }
    // cas gene
    return 1 + mystrlen(&tab[1]);
}

int main() {
    //printf("2*3 = %d \n", mulRec(2,10));
    //printf("2^3 = %d \n", puiRec(2,3));

    for (int i = 0; i < 10; ++i) {
        printf("fibo(%d) = %d \n", i, fibo(i));
    }
    char * message = "hola";

    printf("%s a %d carac", message, mystrlen(message));

    return 0;
}
