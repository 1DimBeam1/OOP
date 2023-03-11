#include "ClassModule.h"
int main() {
    Character A(1,"BoB"), B(2,"GoGi");
    Administrator god("S+");
    int id;

    A.print();
    cout << "/////////////////////////////////\n";
    id = A.get_ID();
    god.GoodBoy(&A,id);
    cout << "/////////////////////////////////\n";
    A.print();

    return 0;
}
