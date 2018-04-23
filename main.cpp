/* programa_21 programa examen de ciencias
estructura: repetitiva while
autor: Luis Alberto Garcia Rodriguez
numero de lista 11
fecha 26 de febrero del 2015
*/
#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main()
{
    int k, codigo, cod, calif;
    char opcion;

    system ("cls");

    calif = 0;
    codigo = 123;

    cout<<"Examen de Ciencias";
    cout <<"\n\n Cual es tu codigo ";
    cin>>cod;

if (codigo == cod)
{

for (codigo=123; codigo == cod; codigo++)
        {
        system ("cls");
        cout<<"\n\n1.- De que ciencia son ramas la anatomia y la fisiologia?";
        cout<<"\n\na) Biologia \nb) fisiologia \nc) Fisica \nd) Ninguna \n\n";
        cin>>opcion;

        if (opcion == 'a')
            {
            cout<<"\n\nRespuesta correcta ";
            calif = calif + 20;
            cout<<"\n\nPuntos acumulados: ";
            cout<<calif;
            cout<<"\n";
            system ("pause");
            }
        else
            {
            cout<<"\n\nrespuesta incorrecta \n\n";
            cout<<"\n\nPuntos acumulados: ";
            cout<<calif;
            cout<<"\n";
            system ("pause");
            }

        system ("cls");
        cout<<"\n\n2.- Cual es la ciencia que estudia la conformacion y la estructura del cuerpo humano?";
        cout<<"\n\na) Biologia \nb) Anatomia humana \nc) Fisica \nd) Ninguna \n\n";
        cin>>opcion;

        if (opcion == 'b')
            {
            cout<<"\n\nRespuesta correcta ";
            calif = calif + 20;
            cout<<"\n\nPuntos acumulados: ";
            cout<<calif;
            cout<<"\n";
            system ("pause");
            }
        else
            {
            cout<<"\n\nrespuesta incorrecta \n\n";
            cout<<"\n\nPuntos acumulados: ";
            cout<<calif;
            cout<<"\n";
            system ("pause");
            }

        system ("cls");
        cout<<"\n\n3.- Cual es la ciencia que estudia las funciones de los componentes otganicos del cuerpo humano?";
        cout<<"\n\na) Biologia \nb) Fisica \nc) bioquimica \nd) Ninguna \n\n";
        cin>>opcion;

        if (opcion == 'c')
            {
            cout<<"\n\nRespuesta correcta ";
            calif = calif + 20;
            cout<<"\n\nPuntos acumulados: ";
            cout<<calif;
            cout<<"\n";
            system ("pause");
            }
        else
            {
            cout<<"\n\nrespuesta incorrecta \n\n";
            cout<<"\n\nPuntos acumulados: ";
            cout<<calif;
            cout<<"\n";
            system ("pause");
            }

        system ("cls");
        cout<<"\n\n4.- Como se llama al conjunto de celulas con las mismas caracteristicas que desempeñan una funcion en comun?";
        cout<<"\n\na) Elicoidales \nb) Disjuntas \nc) Pluricelulares \nd) Ninguna \n\n";
        cin>>opcion;

        if (opcion == 'c')
            {
            cout<<"\n\nRespuesta correcta ";
            calif = calif + 20;
            cout<<"\n\nPuntos acumulados: ";
            cout<<calif;
            cout<<"\n";
            system ("pause");
            }
        else
            {
            cout<<"\n\nrespuesta incorrecta \n\n";
            cout<<"\n\nPuntos acumulados: ";
            cout<<calif;
            cout<<"\n";
            system ("pause");
            }

        system ("cls");
        cout<<"\n\n5.- Cuales son los tipos de tejido que existen en el cuerpo humano?";
        cout<<"\n\na) Organicos \nb) Epiteriales \nc) Artificiales \nd) Ninguna \n\n";
        cin>>opcion;

        if (opcion == 'b')
            {
            cout<<"\n\nRespuesta correcta ";
            calif = calif + 20;
            cout<<"\n\nPuntos acumulados: ";
            cout<<calif;
            cout<<"\n";
            system ("pause");
            }
        else
            {
            cout<<"\n\nrespuesta incorrecta \n\n";
            cout<<"\n\nPuntos acumulados: ";
            cout<<calif;
            cout<<"\n";
            system ("pause");
            }

        cout<<"\n\nSus puntos totales obtenidos fueron: "<<calif<<"\n\n";
        cout<<"\n\nPreionar 1 para ntentar un nuevo examen, cualquier otro para salir:  ";
        cin>>k;

        if (k==1)
            {
            return main();
            }

        }

}
else
{
cout<<"\n\nCodigo incorrecto!";
cout<<"\n\nTus puntos acumulados son: "<<calif<<"\n\n";
system("pause");
}
cout<<"\n\t";
system ("pause");
return 0;

}

