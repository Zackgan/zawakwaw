#include<stdio.h>


void main (){

    char huruf;

    printf("Ketikan sebuah huruf, akhiri dengan ENTER : ");
    scanf("%s", &huruf);

    switch(huruf){


    case 'a':
    printf("yang anda ketik adalah: %s", &huruf);
    break;


    case 'i':
    printf("yang anda ketik adalah: %s", &huruf);
    break;


    case 'u':
    printf("yang anda ketik adalah: %s", &huruf);
    break;


    case 'e':
    printf("yang anda ketik adalah: %s", &huruf);
    break;


    case 'o':
    printf("yang anda ketik adalah: %s", &huruf);
    break;

    default:
        printf("Huruf yang anda ketik tidak dikenali");
    }




}
