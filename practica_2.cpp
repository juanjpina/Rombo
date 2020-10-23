/****************************
*NOMBRE:#Juan Jose#
*PRIMER APELLIDO:#Pina#
*SEGUNDO APELLIDO:#Agudo#
*DNI:#34793036Q#
*EMAIL:#juanjpina@gmail.com#
*****************************/

#include<stdio.h>

int main(){
  int lineas;
  int lado;

  //int espacios;
  int var_resto;
  int pos;
  int res;

  pos=1;
  printf("Lado del rombo?");
  scanf("%d",&lado);
  printf("\n");



  if((lado>0)&&(lado<=20)){

    if(lado==1){
      printf("@");}
    else{
      for(int filas=1; filas<=lado; filas++){ //cuenta los lados del rombo
          for (int k=1; k<=lado-filas; k++){  //imprime los espacios en blanco
            printf(" ");
              }
            for (int pos=1; pos<=filas; pos++){ //imprime los signos del lado izquierdo.

              res=(pos-1)%4;
              switch(res){
                  case 0:
                  printf("@");break;
                  case 1:
                  printf(".");break;
                  case 2:
                  printf("o");break;
                  default:
                  printf(".");
                  }
            }//for signos lado izquierdo

          for (int pos=1; pos<=filas; pos++){ //imprime los signos del lado derecho.

              if (pos==filas){
							printf("\n");
						}else {
							res=(filas-(pos+1))%4;
              switch(res){
                  case 0:
                  printf("@");break;
                  case 1:
                  printf(".");break;
                  case 2:
                  printf("o");break;
                  default:
                  printf(".");
                         }
                  }
            }//for
      }//for cuenta lineas


      /*****parte de abajo*******/


for(int filas=lado-1; filas>=1; filas--){ //cuenta los lados del rombo

          for (int k=1; k<=lado-filas; k++){  //imprime los espacios en blanco
            printf(" ");
              }
            for (int pos=1; pos<=filas; pos++){ //imprime los signos del lado izquierdo.
              res=(pos-1)%4;
              switch(res){
                  case 0:
                  printf("@");break;
                  case 1:
                  printf(".");break;
                  case 2:
                  printf("o");break;
                  default:
                  printf(".");
                  }
            }//for signos lado izquierdo

          for (int pos=1; pos<=filas; pos++){ //imprime los signos del lado derecho.
              if (pos==filas){
							printf("\n");
						}else {
							res=(filas-(pos+1))%4;
              switch(res){
                  case 0:
                  printf("@");break;
                  case 1:
                  printf(".");break;
                  case 2:
                  printf("o");break;
                  default:
                  printf(".");
                  }
                  }//else
                }// for
      }//1-for cuenta lineas
    }//else principal
  }//if principal
  }

