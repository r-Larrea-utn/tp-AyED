#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
#include "funciones.hpp"
using namespace std;

int main(int argc, char const *argv[])
{
  // Declarar las variables utilizadas en el bloque main().

  // Abrir todos los archivos
  ProcMedicos();      // Descarga archivo Medicos.
  ProcEspecialidad(); // Descarga archivo Especialidades.
  ProcTurnos();       // Descarga archivo TurnosDiaHora.
  LstTurnos();        // Lista ord. x Especialidades, Días y Turnos del vuelco del archivo TurnosDiasHora.
  ProcTurnos();       // Descarga archivo SolicitudesTurnos y lista líneas de las solicitudes.
  LstTurnos();        // Lista ord. x Especialidades, Días y Turnos Actualizado con las SolicitudesTurnos.
  // Cerrar todos los archivos return 0;
  return 0;
}
