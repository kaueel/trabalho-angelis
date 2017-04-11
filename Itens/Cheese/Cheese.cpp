/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "../Food/Food.hpp"
#include "Cheese.hpp"

using namespace std;

Cheese::Cheese(float peso, double valor) : Food(valor)
   {
   this->peso = peso;
   };
   
string Cheese::getDescricao()
   { 
   return ("Cheese - " + to_string(peso) + " Kg.");
   };
   
/* fim de arquivo */