#pragma once
#include<iostream>
using std::endl;
using std::cout;
class Ledger {
  public:
      Ledger(int n = 0) { setV(n); }
      ~Ledger() { cout << "Closed Ledger " << getV() << endl; }
      void setV(int n) { vnum = (n > 3) ? n : 1; }
      int getV() const { return vnum; }
  private:
      int vnum;
  };