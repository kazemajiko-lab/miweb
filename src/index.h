#include <iostream>
using namespace std;
using dou = double;
using flo = float;
const int CF = 100;
const int CAF = 100;
const int CN = 20;
int cantidadFichas;
int cantidadAprendices;
int cantidadNotas;
int notas[CF][CAF][CN];
dou sumaNotaAprendiz;
dou promedioNotaAprendiz;
dou sumaPromedioNotaAprendiz;
dou promedioFicha;
dou sumaPromedioFicha;
dou promedioGeneral;

void data()
{
    cout << "INGRESE EL NUMERO DE FICHAS: ";     cin >> cantidadFichas;     cout << "\n";
    cout << "INGRESE EL NUMERO DE APRENDICES: "; cin >> cantidadAprendices; cout << "\n";
    cout << "INGRESE EL NUMERO DE NOTAS: ";      cin >> cantidadNotas;      cout << "\n";

    for(int ficha=0; ficha<cantidadFichas; ficha++)                  //! FICHA
    {
        cout << "Ficha #" << ficha + 1 << " " << "\n";
        sumaPromedioNotaAprendiz = 0;
        for(int aprendiz=0; aprendiz<cantidadAprendices; aprendiz++) //! APRENDIZ
        {
            cout << "\tAprendiz #" << aprendiz + 1 << " " << "\n";
            sumaNotaAprendiz = 0;
            for(int nota=0; nota<cantidadNotas; nota++)              //! NOTA
            {   
                cout << "\t\tNota #" << nota + 1 << " "; cin >> notas[ficha][aprendiz][nota];
                sumaNotaAprendiz     += notas[ficha][aprendiz][nota];
            }
            promedioNotaAprendiz      = sumaNotaAprendiz/cantidadNotas;
            sumaPromedioNotaAprendiz += promedioNotaAprendiz;
            cout << "\t\t\tPromedio: " << promedioNotaAprendiz << "\n";
        }
        promedioFicha = sumaPromedioNotaAprendiz/cantidadAprendices;
        sumaPromedioFicha += promedioFicha;
        cout << "\t\t\t\tPromedio Ficha: " << promedioFicha << "\n";
    }
    promedioGeneral = sumaPromedioFicha/cantidadFichas;
    cout << "\t\t\t\t\t\tPROMEDIO GENERAL: " << promedioGeneral << "\n\n\n";
}