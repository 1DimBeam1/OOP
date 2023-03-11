#ifndef OOP_TASK1__CLASSMODULE_H
#define OOP_TASK1__CLASSMODULE_H
#include <iostream>
using namespace std;

class Character{
private:
    string nickname;
    int Level;
    int ID;
    int HP;
    int MP;
    int XP;
    int Gold;
    int Dimond;

    friend class Administrator;
public:
    Character(int, string);
    ~Character() = default;

    int get_HP();
    int get_MP();
    int get_XP();
    int get_Gold();
    int get_Dimond();
    int get_ID();

    void set_HP(int);
    void set_MP(int);
    void set_XP(int);
    void set_Gold(int);

    void print();

};

class Administrator{
private:
    string AccessLevel;
public:

    Administrator(string);
    ~Administrator() = default;

    int get_IdCharacter(Character);

    int get_DimondChar(Character);
    void set_DimondChar(Character*, int);

    void GoodBoy(Character*, int);

    void LookID(Character);


};

#endif //OOP_TASK1__CLASSMODULE_H
