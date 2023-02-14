// Lab13.cpp
// Jacob Branson
// COSC 1030
// Lab 13
//20 Apr. 2022

#include <iostream>
using std::cout;
using std::endl;
using std::ostream;
class VBase
{
public:
    VBase(int vs = 0) { setStuff(vs); }
    virtual int getStuff() const { return stuff; }
    virtual void setStuff(int s) { stuff = (s >= 0) ? s : 0; }
    virtual void makeAbs() const = 0;
protected:
    int stuff;
};
class VDerived : public VBase
{
public:
   
    VDerived(int vs = 0) { setStuff(vs); }
    void makeAbs() const { }
    // changed this here{
    virtual void setStuff(int s){
        stuff = (s >= 0) ? s : 0;
        weight = stuff*2;
    }
    
    int getStuff() const { return stuff*weight; }
    //}
private:
    int weight;
    
};
ostream& operator<<(ostream& out, const VBase& right)
{
    out << "Object(" << right.getStuff() << ")";
    return out;
}
int main()
{
    VDerived A(3);
    cout << A << endl;
    A.setStuff(4);
    cout << A << endl;
    return 0;
}