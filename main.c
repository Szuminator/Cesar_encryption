#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {

    char text[] = "hitler nie wiedzial o ";
    int key;

    printf("SZYFR CEZARA\n\n");
    printf("Podaj klucz: ");
    scanf("%d", &key);

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
                                         /*ZAMIEÑ SZYFROWANIE I DESZYFROWANIE NA OSOBNE FUNKCJE U¯YWAJ¥C WSKANIKÓW I ZROB:
                                             1.exit BY WYJŒÆ 2.zaszyfruj plik ORAZ odszyfruj 3. odszyfr i zszyfr zdanie*/
    nosecret[strlen(secret)] = "\0";
    printf("%s \n", nosecret);

    getchar();
    getchar();
    return 0;
}
