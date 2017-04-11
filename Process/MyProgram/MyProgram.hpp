/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Mar/2016
*/

using namespace std;

#ifndef A02EX03
#define A02EX03

#include <string>
#include <vector>
#include <iostream>
#include <iomanip>

#include "../Information/Information.hpp"
#include "../MyBooleanClass/MyBooleanClass.hpp"
#include "../Menu/Menu.hpp"
#include "../../Itens/Food/Food.hpp"
#include "../../Itens/Bread/Bread.hpp"
#include "../../Itens/Cracker/Cracker.hpp"
#include "../../Itens/FilledWafer/FilledWafer.hpp"
#include "../../Itens/Cheese/Cheese.hpp"
#include "../../Itens/CottageCheese/CottageCheese.hpp"
#include "../../Itens/Ham/Ham.hpp"
#include "../../Itens/Mortadella/Mortadella.hpp"

class MyProgram{
    private:

    MyBooleanClass * verboseMode;

    MyBooleanClass * shortMessageMode;

    vector<Food *> myMainList;

    void process(void);

    void verifyArguments(int, char* []);

    void clearAll(void);

    void listItems(void);

    void insertItems(void);

    void insertBread(void);

    void insertCheese(void);

    void insertCottageCheese(void);

    void insertCracker(void);

    void insertFilledWafer(void);

    void insertHam(void);

    void insertMortadella(void);

    void insertMilk(void);

    void insertWater(void);

    void insertSoda(void);

    void insertBeer(void);

    public:

    MyProgram(void);

    void start(int argc, char* argv[]);

    MyBooleanClass *getVerboseMode() const;

    void setVerboseMode(MyBooleanClass *verboseMode);

    MyBooleanClass *getShortMessageMode() const;

    void setShortMessageMode(MyBooleanClass *shortMessageMode);

};

#endif

/* fim de arquivo */
