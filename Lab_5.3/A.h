﻿#pragma once

class A {	//клас "A"
protected:
	int x;	//поле "x" --- характеристика об'єкта класу "A"
public:
	int Get_x()const;	//гетер --- для отримання значення поля "x"
	A(int x = 0);		//конструктор ініціалізації(параметри за умовчанням)
};