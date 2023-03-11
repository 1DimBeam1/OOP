#include "ClassModule.h"
Character::Character(int lvl, string nick) {
    nickname = nick;
    Level = lvl;
    HP = lvl * 100;
    MP = lvl * 50;
    XP = 0;
    Gold = lvl * 1000;
    Dimond = 0;
    ID = (rand() % 100000) + 1000000;

}

int Character::get_HP() {
    return this->HP;
}

int Character::get_MP() {
    return this->MP;
}

int Character::get_XP() {
    return this->XP;
}

int Character::get_ID() {
    return this->ID;
}

int Character::get_Gold() {
    return this->Gold;
}

int Character::get_Dimond() {
    return this->Dimond;
}

void Character::set_Gold(int g) {
    this->Gold = g;
}

void Character::set_HP(int h) {
    this->HP = h;
}

void Character::set_MP(int m) {
    this->MP = m;
}

void Character::set_XP(int x) {
    this->XP = x;
}

void Character::print() {
    cout << "HP:" << this->HP << endl;
    cout << "MP:" << this->MP << endl;
    cout << "XP:" << this->XP << endl;
    cout << "Gold:" << this->Gold << endl;
    cout << "Dimond:" << this->Dimond << endl;
}

Administrator::Administrator(string ac) {
    AccessLevel = ac;
}

int Administrator::get_IdCharacter(Character chel) {
    return chel.ID;
}

int Administrator::get_DimondChar(Character chel) {
    return chel.Dimond;
}

void Administrator::set_DimondChar(Character *chel, int num) {
    chel->Dimond += num;
}

void Administrator::GoodBoy(Character *chel, int id) {
    if (get_IdCharacter(*chel) == id && get_DimondChar(*chel) < 1000){
        set_DimondChar(chel,1000);
        cout << chel->nickname <<" is Good Boy!"<< endl;
    }
    else{
        cout << chel->nickname <<" is Bad Boy!"<< endl;
    }

}

void Administrator::LookID(Character chel) {
    cout<<chel.ID<<endl;
}