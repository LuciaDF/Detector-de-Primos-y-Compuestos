
 <br />

# Detector de Primos y Compuestos

## 1.- Objetivo:

 <br />
 
En este proyecto está enfocado en la búsqueda y, finalmente, la acción de generar primos.

## 2.- Algoritmos:
 <br />
 
* Detector de Compuestos
* Miller Rabin

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

## 3.- Grado de Confianza:

El grado de confianza *s*  se midió según el numero de cifras entre el mínimo valor que puede tomar *s* para que aumente las probabilidades de un pseudoprimo fuerte. En este caso, ya que el rango es de 3 a 5 cifras, se dispuso que el mínimo valor como 1.

 <br />
 <br />
 
| Nro Cifra      | n / min(s)  |
| ----------- | ----------- |
| 3 cifras     | 3 / 1 |
|  4 cifras      | 4 / 1 |
|  5 cifras      | 5 / 1 |

 <br />
 <br />

## 4.- Pseudocodigo:

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
 [main.cpp.zip](https://github.com/LuciaDF/Detector-de-Primos-y-Compuestos/files/8793593/main.cpp.zip)
 

## 7.- Como usarlo:

Al compilarlo se visualizará un **Menú** el cual al elegir su respectivo número se podrá desplegar el resultado.


```c++

int main(int argc, const char * argv[])
{
    Menu();
}

```






 <br />
 <br />
  <br />
 <br />
 

______


 <br />
 <br />
  <br />
 <br />
