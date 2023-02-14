#include "Sourc.h"
int main() {
    Ledger Main;
cout << " (1) Main is " << Main.getV() << endl;
{
    Ledger Expense(3);
    cout << " (2) Expense is " << Expense.getV() << endl;
    Main.setV(9);
}
cout << " (3) Main is now " << Main.getV() << endl;
return 0;
}