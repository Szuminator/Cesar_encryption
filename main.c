#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    printf("SZYFR CEZARA\n\n");
    printf("1. Wyjscie\n");
    printf("2. Szyfruj\n");
    printf("3. Odszyfruj\n");

    int choose;
    int key;

    for(;;){
        printf("Podaj nr: \n");
        scanf("%d", &choose);

        if(choose==1){
            break;
        }
        else if(choose==2){
            //czy plik czy zdanie
            //funkjca szyfrujaca
        }
        else if(choose==3){
            //czy plik czy zdanie
            //funkjca deszyfrujaca
        }
        else{
            printf("nie ma takiej opcji(wcisnij enter)\n");
            getchar();
            getchar();
        }
    }

    char text[100];
    char secret[100];

    //encryption
    for(int i=0;i<strlen(text);i++){

        if(isalpha(text[i])){
                char offset = isupper(text[i]) ? 'A' : 'a';
                secret[i] = (text[i] - offset + key) %26 + offset;
        }
        else{
            secret[i] = text[i];
        }
    }

    secret[strlen(text)] = "\0";
    printf("%s \n", secret);

    char nosecret[100];

    //decryption
    for(int i=0;i<strlen(secret);i++){

        if(isalpha(secret[i])){
            char offset = isupper(secret[i]) ? 'A' : 'a';
            nosecret[i] = (secret[i] - offset - key +26) %26 + offset;
        }
        else{
            nosecret[i] = secret[i];
        }
    }

    nosecret[strlen(secret)] = "\0";
    printf("%s \n", nosecret);

    getchar();
    getchar();
    return 0;
}
