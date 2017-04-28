/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Mar/2015


*/

#include "Process/MyProgram/MyProgram.hpp"

int main(int argc, char* argv[]){
    MyProgram *myProgram = new MyProgram;
    myProgram->start(argc, argv);

    return 1;
}
/* fim de arquivo */
