#include<stdio.h>


/**
kalo string & di scanf sama di printf
**/


void main (){

    /**char name;

    int pilihan;
    printf("Hello_world\n");

    printf("please enter a string : ");
    scanf("%s", &name);

    printf("your string is: %s", &name);

    **/


    int nilai;


    printf("Ketikan suatu nilai integer: ");
    scanf("%d", &nilai);

    if(nilai <0){
        printf("nilai integer negatif %d", nilai);
    }
    else if(nilai>0){
        printf("nilai integer positif %d", nilai);
    }
    else if (nilai==0){
        printf("Nilai integer adalah %d", nilai);
    }
}
