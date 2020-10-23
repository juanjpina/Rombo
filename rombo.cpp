/******rombo*****/

#include<stdio.h>

int main(){
  int lineas;
  int lado;
  int espacios;
  //const int n=4;
  lineas=1;

  printf("Lado del rombo?");
  scanf("%d",&lado);


do{
for (int k=1; k<=lado-lineas; k++){  //imprime los espacios en blanco
    printf(" ");
    }



    for (int i=1; i<=lineas; i++){ //imprime los asteriscos
        printf("* ");
    }

    printf("\n");

    lineas++;

}while(lineas<=lado);






    lineas=lado-1;

  do{
  for (int k=lado-lineas; k>=1; k--){  //imprime los espacios en blanco
    printf(" ");
    }



    for (int i=1; i<=lineas; i++){ //imprime los asteriscos
        printf("* ");
    }


    printf("\n");
lineas--;
  }while(lineas>=1);



  }
