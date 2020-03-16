/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include <stdlib.h>

int getsize(){
    int n;
    scanf("%d", &n);
    return n;
}
int* getEmptyArray(int n){
    int *p;
    p=(int*)malloc(sizeof(int)*n);
    return p;
}
void read_a_Array(int * array,int n){
    int i, c;
    for(i=0; i<n; i++){
        scanf("%d", &c);
        array[i]=c;
    }
}
void printArray(int *arr,int n){
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}

int Subconjunto(int *a, int n, int*b, int m, int *c, int*cont_c){
    int flag=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i]==b[j]){
                flag=1;
                break;
            }
            else flag=0;
        }
        if(flag==0) return 0;
    }
}