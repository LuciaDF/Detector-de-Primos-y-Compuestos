
 <br />

# Detector de Primos y Compuestos
 <br />
  <br />
  
## 1.- Objetivo:

 <br />
  <br />
En este proyecto está enfocado en la búsqueda y, finalmente, la acción de generar primos.
 <br />
  <br />
  
## 2.- Algoritmos:
 <br />
 
* Detector de Compuestos
* Miller Rabin
  
<br />
  <br />
  
## Acerca de:

 <br />


*Detector de Compuestos*:


Para un numero compuesto *n*, *n -1* es primo y se puede escribir de la siguiente manera:

 <br />

<img width="200" alt="" src="https://user-images.githubusercontent.com/62950378/170874057-c5eb4b7c-b0a9-4968-9882-f7f9ab163862.png">

 <br />
 
Esto nos permite utilizarlo para factorizar en el Pequeño Teorema de Fermat (Test de Primalidad de Fermat):
 <br />
  <br />
  
<img width="1000" alt="" src="https://user-images.githubusercontent.com/62950378/170874109-621e6d3d-757f-479d-9219-9537a04c1e20.png">
 <br />
 
Si n es primo tendrá que dividir a todos los factores, si al menos divide a uno será pseudoprimo en la base *a*, si no cumple ninguna de estas significa que es compuesto. Con la condición, del Test de Primalidad de Fermat, que 2 < *a* ≤ n-1.


 <br />

*Miller Rabin*


Con la ayuda del Detector de Compuestos, el algoritmo Miller Rabin calcula los respectivos *t* y *u* de *n - 1*. Finalmente, determinamos una variable *s* el cual se encargará del grado de confianza, es decir, medir cuan fuerte es un pseudoprimo. Un pseudoprimo fuerte tiene altas probabilidades de ser primo por lo tanto, entre más valor le otorguemos a *s*, más probabilidad tendrá de que sea un pseudoprimo fuerte.
 <br />
  <br />
   <br />
   
## 3.- Grado de Confianza:
<br />
 
Acerca del grado de confianza se basó en el punto 4.48 [1] donde se aprecian condiciones con respecto de *pk,t*  el cual es la probabilidad de que n resulta ser compuesto aun puesto a prueba en el algoritmo de Miller-Rabin para un *k* como el número de bits y *t* como el parámetro de seguridad (o, puesto en otras palabras, el grado de confianza). El punto es que por *k* bits se toma un valor *t* definido según las condiciones para tener un óptimo resultado al calcular *pk,t* . La explicación de *pk,t*   se puede ver a fondo en los punto 4.46 y 4.47 [1].

<br />

    OJO: La variable t del punto 2 no es la misma a la del punto 3. 


<br />





<img width="2000" alt="Fact 4.48" src="https://user-images.githubusercontent.com/62950378/171676899-4d552aea-ea2a-463c-a211-d16b64c55361.png">

 <br />
 <br />

 Sin embargo, en este caso de calcular números de 2 o más cifras me apoyo primero, calcular el número máximo de bits que se puede usar para números de d cifras [2], y segundo, uso las condiciones del punto 4.48 y así determinar el grado de confianza para cada caso.

 <br />

 
| Nro Cifra      | bmax | Fact 4.48 (i) |
| ----------- | ----------- |----------- |
| 3 cifras     |10 bits | 1 |
|  4 cifras      | 14 bits | 1|
|  5 cifras      | 17 bits |1 |

 <br />
 <br />

## 4.- Pseudocódigo:

<img width="488" alt="Detector de Compuestos" src="https://user-images.githubusercontent.com/62950378/170874378-9e74d7fa-6d5c-4134-928e-66eac8c8be90.png">

<img width="587" alt="Miller Rabin" src="https://user-images.githubusercontent.com/62950378/170874429-4fd772b9-d6c6-4331-83d8-a0fe7f83fb0f.png">

 <br />
 <br />
 
## 5.- Lenguaje de Programación:


|  Lenguaje de Programación | C++ |
| --------------------------| :---:| 

 <br />
 <br />

 
## 6.- Como instalarlo:

El proyecto está concentrado en el main.cpp el cual se puede descargar o copiar y después añadir a un proyecto ya sea en **Visual Studio** o en **Xcode**.

 <br />
 <br />

 **Descarga**:
 [main.cpp.zip](https://github.com/LuciaDF/Detector-de-Primos-y-Compuestos/files/8793620/main.cpp.zip)
 
 <br />
 <br />
 
## 7.- Como usarlo:

Al compilarlo se visualizará un **Menú** el cual al elegir su respectivo número se podrá desplegar el resultado.


```c++

int main(int argc, const char * argv[])
{
    Menu();
}

```
## 8.- Referencias:

[1] A.Menezes, P.van Oorschot y S.Vanstone. (1996). *Chapter 4: Public-Key Parameters. En Handbook of Applied Cryptography(810). CRC Press.*

[2] Rick Regan. (December 13th, 2012). *Number of Bits in a Decimal Integer. 2022, de Exploring Binary Sitio web:* https://www.exploringbinary.com/number-of-bits-in-a-decimal-integer/



 <br />
 <br />
  <br />
 <br />
 

______


 <br />
 <br />
  <br />
 <br />
