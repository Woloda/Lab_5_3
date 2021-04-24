#include <iostream>

#include "B.h"	//підключає також файл "A.h"


int main() {
	A a(1);
	B b(2, 3);

	try {
		a = b.Create_Obj_Class_A();
		std::cout << "\nContinue";
	}
	catch (A) {
		std::cout << "\nCatch(A)";
		exit(2);
	}
	std::cout << "\n\nEnd";

	return 0;
}