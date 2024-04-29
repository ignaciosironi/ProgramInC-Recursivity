#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int calcularPotencia (int num1, int num2, int cont);
int contarPrimos(int num1,int cont, int contPrimos, int contPrimosAux);
int averiguarPrimos(int cont, int contPrimos, int contPrimosAux);

int main ()
{
  int num1;
  int num2;
  int cont = 0;
  int contPrimos=0;
  int contPrimosAux=2;
  int resultado;

  printf ("Ingrese el número al cual se le realizará la potencia: ");
  scanf ("%d", &num1);
  printf ("Ingrese el número el cual será la potencia: ");
  scanf ("%d", &num2);
  resultado = calcularPotencia (num1, num2, cont);
  printf ("El resultado de la potencia es:%d \n", resultado);
  
    cont=2;

  printf("Ingrese cualquier número para saber cuáles son los números primos anteriores a ese número: ");
  scanf ("%d", &num1);
  
  if(num1>2){ 
        printf("Los números primos anteriores al número ingresado son: {  ");
        contPrimos=contarPrimos(num1,cont,contPrimos,contPrimosAux);
        printf("\nLa cantidad de números primos anteriores al número ingresado son: %d",contPrimos); 
      
  }else{
      printf("No hay números primos anteriores a ese número.");
      
  }
  
   
  return 0;
  
}


int calcularPotencia (int num1, int num2, int cont)
{
  if (cont == num2 - 1)
	{
	  return num1;
	}
	
  return calcularPotencia (num1, num2, cont + 1) * num1;
}


int contarPrimos(int num1,int cont, int contPrimos, int contPrimosAux){ 
    if(cont==num1){ 
        printf("}");
        return contPrimos;
    } 
    else{
        contPrimos=averiguarPrimos(cont, contPrimos, contPrimosAux);
    }
    
    return contarPrimos(num1,cont+1, contPrimos, contPrimosAux);
}


int averiguarPrimos(int cont, int contPrimos, int contPrimosAux){ 
    
        if(cont%contPrimosAux==0){
            if(cont==contPrimosAux){
                printf("%d  ",cont);
                contPrimos=contPrimos+1;
                return contPrimos;
            }else{
                return contPrimos;
                
            }    
        }
        
    return averiguarPrimos(cont,contPrimos,contPrimosAux+1);
}