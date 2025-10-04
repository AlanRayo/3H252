
#include <iostream>
using namespace std;

class Empleado
{
    char nombre[10];        //10B
    int edad;               //4B
    char direccion[255];    //255B
    int telefono;           //4B

    // Interfaz
    public:

        int LeerEdad()
        {
            return edad;
        }
            
};                          //Total = 273B

int main(int argc, char const *argv[])
{
    // Tamaños de memoria estatica
    // Enteros
    cout <<"Tamaño de int " << sizeof(int) << endl;
    cout <<"Tamaño de long " << sizeof(long) << endl;

    // Punto flotante
    cout <<"Tamaño de float " << sizeof(float) << endl;
    cout <<"Tamaño de double " << sizeof(double) << endl;

    // Bytes
    cout <<"Tamaño de char " << sizeof(char) << endl;
    cout <<"Tamaño de byte " << sizeof(byte) << endl;
    cout <<"Tamaño de bool " << sizeof(bool) << endl;

    cout << "Tamaño del puntero " << sizeof(int *) << endl;

    Empleado empleados[10];    // Espacio 2730B

    cout << "Tamaño del empleado " << sizeof(Empleado) << endl;

    cout << "Empleados " << empleados[0].LeerEdad() <<endl;

    // Casteos

    int a = 23;
    char b = (char) a;
    cout << b << endl;



    return 0;
}