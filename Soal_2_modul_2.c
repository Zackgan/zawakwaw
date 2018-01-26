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

    printf("\nSoal Nomor 3\n");

    int suhu;

    printf("Temperatur (der.C): ");
    scanf("%d", &suhu);

    if(suhu <0){

        printf("Wujud air beku");

    }
    else if(0<suhu>100){

        printf("Wujud air cair");
    }

    else if (suhu > 100){
        printf("Wujud air gas");
    }

}
