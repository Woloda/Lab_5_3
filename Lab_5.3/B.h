﻿#pragma once

#include "A.h"


class B : public A {	//клас "B"(нащадок) успадковує від класу "A"(батько): поля і метода
	int y;	//поле "y" --- характеристика об'єкта класу "B"
public:
	B(int x = 0, int y = 0);		//конструктор ініціалізації(параметри за умовчанням)
	A Create_Obj_Class_A();		//метод створення об'єкта класу А
};