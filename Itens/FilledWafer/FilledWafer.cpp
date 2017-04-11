/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "../Cracker/Cracker.hpp"
#include "FilledWafer.hpp"

using namespace std;

FilledWafer::FilledWafer(string tipo, string recheio, int unidades, double valor) : Cracker(tipo, unidades, valor)
   {
   this->recheio = recheio;
   };
   
string FilledWafer::getDescricao()
   { 
   return ("Cracker Recheada com " + recheio + " - " + Cracker::getDescricao());
   };
   
/* fim de arquivo */