#include "B.h"


B::B(int x, int y) : A(x) {		//конструктор ініціалізації(параметри за умовчанням)
	this->y = y;
}

A B::Create_Obj_Class_A() {	//метод створення об'єкта класу А
	throw A();	//генерування винятка типу "A"
}