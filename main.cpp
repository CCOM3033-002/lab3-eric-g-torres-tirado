/*Lab 3: Tres Números Aleatorios
Nombre: Eric G. Torres Tirado
Núm. de est: 801-22-1973
Colaboraciones:
-tutor x*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main () {

    //Inicializar el generador de números aleatorios. 
    srand(time(0));

    //Utilizar la formula para generar y guardar 3 números aleatorios.
    int Num_Ale1 = rand () % (100 - 0 + 1) + 0;
    int Num_Ale2 = rand () % (100 - 0 + 1) + 0;
    int Num_Ale3 = rand () % (100 - 0 + 1) + 0;

    //Desplegar los números generados en el orden en que se generaron.
    cout <<"Números aleatorios generados: " << Num_Ale1 << ", " << Num_Ale2 << ", " << Num_Ale3 << endl;

    /*Determinar el número mayor, el del medio y el menor con estructuras de decisión.
    Primero definiré las variables del mayor, del que está en el medio y del menor.*/
    int Num_Mayor, Num_Medio, Num_Menor;

    //Si Num_Ale1 es el mayor, entonces asignamos Num_Ale1 a la variable Num_Mayor.
    if (Num_Ale1 >= Num_Ale2 && Num_Ale1 >= Num_Ale3) {
        Num_Mayor = Num_Ale1;

        // Si el 2do número es mayor que el 3ero, lo asignamos a la variable Num_Medio y el 3ero a la variable Num_Menor.
        if (Num_Ale2 >= Num_Ale3) {
            Num_Medio = Num_Ale2;
            Num_Menor = Num_Ale3;

        // Si es falso lo anterior el 2 ira a Num_Menor y el 3 a Num_Medio.
        } else {
            Num_Medio = Num_Ale3;
            Num_Menor = Num_Ale2;
        }
    /*Si el 2do núm. es el mayor lo asignamos a la variable Num_Mayor.
    Luego, si el 1er núm. es el valor del medio lo asignaremos a la var. Num_Medio y al 3er núm. a la var. Num_Menor.
    Si el 1er núm. no es el valor del medio lo asignaremos a Num_Menor y al 3er núm. a Num_Menor.*/ 
    } else if (Num_Ale2 >= Num_Ale1 && Num_Ale2 >= Num_Ale3) {
        Num_Mayor = Num_Ale2;
        if (Num_Ale1 >= Num_Ale3) {
            Num_Medio = Num_Ale1;
            Num_Menor = Num_Ale3;
        } else {
            Num_Medio = Num_Ale3;
            Num_Menor = Num_Ale1;
        }
    } else {
        Num_Mayor = Num_Ale3;
        if (Num_Ale1 >= Num_Ale2) {
            Num_Medio = Num_Ale1;
            Num_Menor = Num_Ale2;
        } else {
            Num_Medio = Num_Ale2;
            Num_Menor = Num_Ale1;
        }
    }

    //Desplegar los números en orden descendiente.
    cout << "Orden descendiente: " << Num_Mayor << ">=" << Num_Medio << ">=" << Num_Menor;

    return 0;
}
        
            
    


        









