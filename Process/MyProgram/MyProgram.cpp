/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Mar/2015


*/

#include <string>
#include <vector>
#include <iostream>
#include <iomanip>

#include "../Information/Information.hpp"
#include "../MyBooleanClass/MyBooleanClass.hpp"
#include "MyProgram.hpp"

/* DANGER: A LOT OF GLOBAL VARIABLES !!! (OBJECTS & STRUCTURES) */

void MyProgram::start(int argc, char *argv[]) {
    myMainList.clear();
    Information::wellcome("C++ Program " + string(argv[0]) + " running!", this->getShortMessageMode()->getStatus());
    process();
    Information::bye(this->getShortMessageMode()->getStatus());
    clearAll();
}

/*
int main(int argc, char* argv[])
{
   this->verifyArguments(argc, argv);
   myMainList.clear();
   Information::wellcome("C++ Program " + string(argv[0]) + " running!", this->getShortMessageMode->getStatus());
   process();
   Information::bye(this->getShortMessageMode->getStatus());
   clearAll();
};
 */
MyProgram::MyProgram() {
    this->verboseMode = new MyBooleanClass();
    this->shortMessageMode = new MyBooleanClass();
};

void MyProgram::process() {
    vector<string> opcoes({"Exit", "List Database", "Insert Items"});
    Menu menu("Main Menu", opcoes);
    int escolha = -1;

    while (escolha) {
        escolha = menu.getEscolha();

        switch (escolha) {
            case 1: {
                listItems();
            };
                break;
            case 2: {
                insertItems();
            };
                break;
        };
    };
};

void MyProgram::clearAll()   // está errada ! corrigir !!!!
{
    myMainList.clear();

    vector<Food *>::iterator scan = myMainList.begin();

    while (scan != myMainList.end()) {
        delete (*scan);
        *scan = NULL;
        scan++;
    };

    delete this->verboseMode;
    delete this->shortMessageMode;
    this->verboseMode = NULL;
    this->shortMessageMode = NULL;
};

void MyProgram::listItems() {
    double total = 0.00;

    cout << "------------------------------\nItems in Database:\n------------------------------\n";
    vector<Food *>::iterator scan = myMainList.begin();

    while (scan != myMainList.end()) {
        cout << "  @ " << setw(20) << (*scan)->getDescricao() << "\n\tUS$ " << fixed << setprecision(2)
             << (*scan)->getValor() << endl;
        total += (*scan)->getValor();
        scan++;
    };
    cout << "  Total cost: US$ " << fixed << setprecision(2) << total << endl;
}

MyBooleanClass *MyProgram::getVerboseMode() const {
    return verboseMode;
}

MyBooleanClass *MyProgram::getShortMessageMode() const {
    return this->shortMessageMode;
}

void MyProgram::setShortMessageMode(MyBooleanClass *shortMessageMode) {
    MyProgram::shortMessageMode = shortMessageMode;
}

void MyProgram::setVerboseMode(MyBooleanClass *verboseMode) {
    MyProgram::verboseMode = verboseMode;
};

void MyProgram::insertItems() {
    Menu menu("Inset New Items:",
              {"Exit", "Bread", "Cheese", "Cottage Cheese", "Cracker", "Filled Wafer", "Ham", "Mortadella", "Milk",
               "Water", "Soda", "Beer"});
    int escolha = -1;

    while (escolha) {
        escolha = menu.getEscolha();

        switch (escolha) {
            case 1: {
                insertBread();
            };
                break;
            case 2: {
                insertCheese();
            };
                break;
            case 3: {
                insertCottageCheese();
            };
                break;
            case 4: {
                insertCracker();
            };
                break;
            case 5: {
                insertFilledWafer();
            };
                break;
            case 6: {
                insertHam();
            };
                break;
            case 7: {
                insertMortadella();
            };
                break;
            case 8: {
                insertMilk();
            };
                break;
            case 9: {
                insertWater();
            };
                break;
            case 10: {
                insertSoda();
            };
                break;
            case 11: {
                insertBeer();
            };
                break;
            default:
                break;
        };
    };
};

void MyProgram::insertBread() {
    Bread *bread;
    string buffer;
    string type;
    float weight;
    double cost;

    cout << "------------------------------\nInsert Bread:\n------------------------------\n";
    cout << "Type ......: ";
    getline(cin, buffer);
    type = buffer;
    cout << "Weight ....: ";
    getline(cin, buffer);
    weight = stof(buffer);
    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);
    cin.clear();

    bread = new Bread(type, weight, cost);
    myMainList.insert(myMainList.end(), bread);

    cout << endl << bread->getDescricao() << " - US$ " << fixed << setprecision(2) << bread->getValor() << endl;
};

void MyProgram::insertCheese() {
    Cheese *cheese;
    string buffer;

    float weight;
    double cost;

    cout << "------------------------------\nInsert Cheese:\n------------------------------\n";
    cout << "Weight ....: ";
    getline(cin, buffer);
    weight = stof(buffer);
    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);
    cin.clear();

    cheese = new Cheese(weight, cost);
    myMainList.insert(myMainList.end(), cheese);

    cout << endl << cheese->getDescricao() << " - US$ " << fixed << setprecision(2) << cheese->getValor() << endl;
};

void MyProgram::insertCottageCheese() {
    CottageCheese *cottageCheese;
    string buffer;
    float weight;
    double cost;

    cout << "------------------------------\nInsert  Cottage Cheese:\n------------------------------\n";

    cout << "Weight ....: ";
    getline(cin, buffer);
    weight = stof(buffer);
    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);
    cin.clear();

    cottageCheese = new CottageCheese(weight, cost);
    myMainList.insert(myMainList.end(), cottageCheese);

    cout << endl << cottageCheese->getDescricao() << " - US$ " << fixed << setprecision(2) << cottageCheese->getValor()
         << endl;
};

void MyProgram::insertHam() {
    Ham *ham;
    string buffer;
    string type;
    float weight;
    double cost;

    cout << "------------------------------\nInsert Ham:\n------------------------------\n";
    cout << "Type ......: ";
    getline(cin, buffer);
    type = buffer;
    cout << "Weight ....: ";
    getline(cin, buffer);
    weight = stof(buffer);
    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);
    cin.clear();

    ham = new Ham(type, weight, cost);
    myMainList.insert(myMainList.end(), ham);

    cout << endl << ham->getDescricao() << " - US$ " << fixed << setprecision(2) << ham->getValor() << endl;
};

void MyProgram::insertMortadella() {
    Mortadella *mortadella;
    string buffer;
    string type;
    float weight;
    double cost;

    cout << "------------------------------\nInsert Mortadella:\n------------------------------\n";
    cout << "Type ......: ";
    getline(cin, buffer);
    type = buffer;
    cout << "Weight ....: ";
    getline(cin, buffer);
    weight = stof(buffer);
    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);
    cin.clear();

    mortadella = new Mortadella(type, weight, cost);
    myMainList.insert(myMainList.end(), mortadella);

    cout << endl << mortadella->getDescricao() << " - US$ " << fixed << setprecision(2) << mortadella->getValor()
         << endl;
};

void MyProgram::insertMilk() {
    Mortadella *mortadella;
    string buffer;
    string type;
    float weight;
    double cost;

    cout << "------------------------------\nInsert Milk:\n------------------------------\n";
    cout << "Type ......: ";
    getline(cin, buffer);
    type = buffer;
    cout << "Weight ....: ";
    getline(cin, buffer);
    weight = stof(buffer);
    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);
    cin.clear();

    mortadella = new Mortadella(type, weight, cost);
    myMainList.insert(myMainList.end(), mortadella);

    cout << endl << mortadella->getDescricao() << " - US$ " << fixed << setprecision(2) << mortadella->getValor()
         << endl;
};

void MyProgram::insertWater() {
    Mortadella *mortadella;
    string buffer;
    string type;
    float weight;
    double cost;

    cout << "------------------------------\nInsert Water:\n------------------------------\n";
    cout << "Type ......: ";
    getline(cin, buffer);
    type = buffer;
    cout << "Weight ....: ";
    getline(cin, buffer);
    weight = stof(buffer);
    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);
    cin.clear();

    mortadella = new Mortadella(type, weight, cost);
    myMainList.insert(myMainList.end(), mortadella);

    cout << endl << mortadella->getDescricao() << " - US$ " << fixed << setprecision(2) << mortadella->getValor()
         << endl;
};

void MyProgram::insertSoda() {
    Mortadella *mortadella;
    string buffer;
    string type;
    float weight;
    double cost;

    cout << "------------------------------\nInsert Soda:\n------------------------------\n";
    cout << "Type ......: ";
    getline(cin, buffer);
    type = buffer;
    cout << "Weight ....: ";
    getline(cin, buffer);
    weight = stof(buffer);
    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);
    cin.clear();

    mortadella = new Mortadella(type, weight, cost);
    myMainList.insert(myMainList.end(), mortadella);

    cout << endl << mortadella->getDescricao() << " - US$ " << fixed << setprecision(2) << mortadella->getValor()
         << endl;
};

void MyProgram::insertBeer() {
    Menu menu("Inset Beer type:", {"Exit", "Dortmunder", "Stout", "Pilsen", "Porter"});
    int escolha = -1;

    while (escolha) {
        escolha = menu.getEscolha();

        switch (escolha) {
            case 1: {
            };
                break;
                2
            case 2: {
            };
                break;
            case 3: {
            };
                break;
            case 4: {
            };
                break;
            default:
                break;
        };
    };
};

void MyProgram::insertCracker() {
    Cracker *cracker;
    string buffer;
    string type;
    int amount;
    double cost;

    cout << "------------------------------\nInsert Cracker:\n------------------------------\n";
    cout << "Type ......: ";
    getline(cin, buffer);
    type = buffer;
    cout << "Amount ....: ";
    getline(cin, buffer);
    amount = stoi(buffer);
    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);
    cin.clear();

    cracker = new Cracker(type, amount, cost);
    myMainList.insert(myMainList.end(), cracker);

    cout << endl << cracker->getDescricao() << " - US$ " << fixed << setprecision(2) << cracker->getValor() << endl;
};

void MyProgram::insertFilledWafer() {
    FilledWafer *filledWafer;
    string buffer;
    string type;
    string filling;
    int amount;
    double cost;

    cout << "------------------------------\nInsert Filled Wafer:\n------------------------------\n";
    cout << "Type ......: ";
    getline(cin, type);
    cout << "Filling ...: ";
    getline(cin, filling);
    cout << "Amount ....: ";
    getline(cin, buffer);
    amount = stoi(buffer);
    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);
    cin.clear();

    filledWafer = new FilledWafer(type, filling, amount, cost);
    myMainList.insert(myMainList.end(), filledWafer);

    cout << endl << filledWafer->getDescricao() << " - US$ " << fixed << setprecision(2) << filledWafer->getValor()
         << endl;
};

void MyProgram::verifyArguments(int argc, char *argv[]) {
    if (this->verboseMode) { delete this->verboseMode; };
    if (this->shortMessageMode) { delete this->shortMessageMode; };

    verboseMode = NULL;
    this->shortMessageMode = NULL;

    for (int count = 1; count < argc; count++) {
        if (string(argv[count]) == "-v") { verboseMode = new MyBooleanClass(true); };
        if (string(argv[count]) == "-s") { this->shortMessageMode = new MyBooleanClass(true); };
    };

    if (!this->verboseMode) { verboseMode = new MyBooleanClass(); };  // default is false
    if (!this->shortMessageMode) { this->shortMessageMode = new MyBooleanClass(); };  // default is false
}

/* fim de arquivo */
