/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Admin
 *
 * Created on 16 de marzo de 2020, 15:57
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int *a, *b, *c;
    int n, m , cont_c,es_subconjunto;
    
    n=getsize();
    a=getEmptyArray(n);
    read_a_Array(a,n);
    m=getsize();
    b=getEmptyArray(m);
    read_a_Array(b,m);
    
    c=getEmptyArray(m+n);
    es_subconjunto=Subconjunto(a, n, b, m, c, &cont_c);
    printf("a= ");
    printArray(a,n);
    printf("b= ");
    printArray(b,m);
    printf("\n");
    
    if(es_subconjunto) printf("True:a es subconjunto de b\n");
    else printf("False: a no es subconjunto de b\n");
    
    return (EXIT_SUCCESS);
}

