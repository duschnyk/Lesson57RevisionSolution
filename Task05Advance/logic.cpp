﻿//	[The Sum of Absolute Values of Negative Elements]
//	Сумма абсолютных значений отрицательных элементов 
//
//	Задан вектор целочисленных значений. Необходимо разработать 
//	функцию, которая с помощью рекурсивного алгоритма вычисляет 
//	сумму отрицательных элементов массива, взятых по модулю, 
//	т.е. по абсолютному значению.
//
//	Если данные вектора заданы некорректно, то функция должна 
//	возвратить 0.

#include "logic.h"

int sum_absolute_values_of_negative_elements(int* array, int size) {
	if (array == nullptr || size <= 0)
	{
		return 0;
	}
	
	return *(array + (size - 1)) < 0
		? sum_absolute_values_of_negative_elements(array, size - 1) + -*(array + (size - 1))
		: sum_absolute_values_of_negative_elements(array, size - 1);
}
