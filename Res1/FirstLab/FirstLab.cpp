﻿// Лабараторная работа #1| 
// 6 варинат
// Вычисление площади треугольника по формуле Герона

//Типы  днных в C++
//Целочисленные типы
short sh1 = 32767; // Целое число в диапазоне от  -32768 до 32767
long lng = 58538979;// Целое число в диапазоне от -2^61 до 2^61-1
int num = 573626; // Целое число в диапазоне от -2^31 до 2^31-1
//Все целочисленные типы данных могут иметь псевдоним unsigned, означающий что переменная может иметь только положительные числа
//Весь отрицательный диапазон прибавляется к положительному. К примеру:
unsigned int num1 = 43432;//Целое число в диапазоне от 0 до 2^32
//Числа с плавающей точкой
float fl = 3.14; // Представляет вещественное число одинарной точности с плавающей точкой в диапазоне + / -3.4E-38 до 3.4E+38
double db = 2.9845748;// Вещественное число двойной точности с плавающей точкой в диапазоне +/- 1.7E-308 до 1.7E+308
//Все типы данных(не включая bool) могут иметь псевдоним short/long, long - увеличивает диапазон вдвое, а short соответственно уменьшает в 2 раза


#include <iostream>
#include <math.h>


 int main()
{   
     unsigned short side1, side2, side3; // тип unsigned short, позволяет записать целые числа в диапазоне от 0 до 2^16, чего нам более чем хватает
     std::cin >> side1;
     std::cin >> side2;
     std::cin >> side3;
     double p, area;// для данных значений необходимо выбрать вещественный тип данных диапазон +/- 1.7E-308 до 1.7E+308
     p = (side1 + side2 + side3) / 2.0;
     area = sqrt(p * (p - side1) * (p - side2) * (p - side3));

    std::cout << area << std::endl; // вывод площади треугольника
    return 0;
}