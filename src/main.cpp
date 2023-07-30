// Incluir bibliotecas
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
using namespace std;

// Tipos de datos
typedef char str20[21];
typedef char str15[16];

struct Medico {
  str20 apellidoNombre;
  int nroMatricula;
  str20 nombreEspecialidad;
  char turno;
};

struct TurnoDiaHora {
  str20 nombreEspecialidad;
  short dia;
  short hora;
  short min;
  str15 obraSocial;
  int nroCredencial;
};

struct SolicitudTurno {
  str20 apellidoNombre;
  short edad;
  str15 obraSocial;
  int nroMatricula;
  str20 nombreEspecialidad;
  short dia;
  char turno;
};

// Prototipos de funciones
void ProcMedicos();
void ProcEspecialidad();
void ProcTurnos();
void LstTurnos();
void ProcTurnos();
void LstTurnos();
bool LeeSuf(ifstream &id, sid &id);
void GrabaSlctd(ofstream &id, tid id);
tid BusBin(tid tbl, tid clv, tid ult);
void OrdxBur(tid tbl, tid card);
void OrdxBur(tid tbl, tid card);
void IntCmb(id &elem1, id &elem2);
void InicEspTur(tid tbl);
short cnvHhMm(short hhmm);
char *cnvChr2Cad(char car);
char *cnvPosHhMm(short n);
char *space(short n);
string replicate(char car, unsigned n);


int main(int argc, char const *argv[]) {
  // Declarar las variables utilizadas en el bloque main().

  // Abrir todos los archivos
  ProcMedicos();      // Descarga archivo Medicos.
  ProcEspecialidad(); // Descarga archivo Especialidades.
  ProcTurnos();       // Descarga archivo TurnosDiaHora.
  LstTurnos();        // Lista ord. x Especialidades, Días y Turnos del vuelco del archivo TurnosDiasHora.
  ProcTurnos();       // Descarga archivo SolicitudesTurnos y lista líneas de las solicitudes.
  LstTurnos();        // Lista ord. x Especialidades, Días y Turnos Actualizado con las SolicitudesTurnos.

  return 0;
}

short cnvHhMm(short hhmm) {
  switch (hhmm) {
    case 800: return 0;
    case 830: return 1;
    case 900: return 2;
    case 930: return 3;
    case 1000: return 4;
    case 1030: return 5;
    case 1100: return 6;
    case 1130: return 7;
    case 1200: return 8;
    case 1230: return 9;
    case 1300: return 10;
    case 1330: return 11;
    case 1400: return 12;
    case 1430: return 13;
    case 1500: return 14;
    case 1530: return 15;
    case 1600: return 16;
    case 1630: return 17;
    case 1700: return 18;
    case 1730: return 19;
    case 1800: return 20;
    case 1830: return 21;
    case 1900: return 22;
    case 1930: return 23;
  }
} // cnvHhMm

char *cnvPosHhMm(short n) {
  char *horas[] = {
    "08:00",
    "08:30",
    "09:00",
    "09:30",
    "10:00",
    "10:30",
    "11:00",
    "11:30",
    "12:00",
    "12:30",
    "13:00",
    "13:30",
    "14:00",
    "14:30",
    "15:00",
    "15:30",
    "16:00",
    "16:30",
    "17:00",
    "17:30",
    "18:00",
    "18:30",
    "19:00",
    "19:30"
  };

  return horas[n];
} //cnvPosHhMm