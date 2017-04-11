/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "../Cheese/Cheese.hpp"
#include "CottageCheese.hpp"

using namespace std;

CottageCheese::CottageCheese(float peso, double valor) : Cheese(peso,valor)
   {

   };

string CottageCheese::getDescricao()
   {
   return ("Cottage Cheese - " + to_string(this->peso) + " Kg.");
   };

/* fim de arquivo */