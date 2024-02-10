// Лабараторная работа #2 "Битовые операции"
// 3 вариант


#include <iostream>

int main()
{   
    unsigned char x = 98; //0b01100010
    //unsigned char x = 221; //0b11011101
    //unsigned char x= 76; //0b01001100
    //unsigned char x = 6; //0b00000110
    short i;
    std::cin >> i;
    unsigned char mask = ~(0b00000001 << i);
    unsigned char result = x & mask;
    std::cout << int(x) << std::endl;
    std::cout << int(result) << std::endl;
}



