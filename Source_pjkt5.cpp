#include <iostream>
using std::endl;
using std::cout;

class Base
{
public:
	Base() { cout << "Created a base" << endl; }
	virtual ~Base() { cout << "Base destroyed" << endl; }
	virtual void show() { cout << "show Base" << endl; }
};

class Derived : public Base
{
public:
	Derived() { cout << "Created derived" << endl; }
	~Derived() { cout << "Derived destroyed" << endl; }
	void show() { cout << "show Derived" << endl; }
};

void myFunc(void)
{
	Base* bp;

	bp = new Derived;
	bp->show();
	delete bp;

	cout << endl;

	bp = new Base;
	bp->show();
	delete bp;

	return;
}
int main() {
	myFunc();
	return 0;
}