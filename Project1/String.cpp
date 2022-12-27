#include "String.h"
#include <cstring>
#include<iostream>

String::String(const char* data) : _data(new char[strlen(data) + 1]) {
    std::cout << "String()constructor;" << std::endl;
    strcpy(_data, data);
}

String::~String() {
    std::cout << "~String ()destructor" << std::endl;
    if (_data != nullptr)
        delete[] _data;
}

String::String(String& other) : _data(new char[strlen(other._data) + 1])
{
    std::cout << "Copy constructor was called" << std::endl;
    strcpy(_data, other._data);
}



String& String::operator=(String& other) {
    std::cout << "Operator = was calles!" << std::endl;
    if (this != &other) {
        if (_data != nullptr) {
            delete[] _data;
        }
        _data = new char[strlen(other._data) + 1];
        strcpy(_data, other._data);
    }
    return *this;
}



char String::operator[](size_t index)
{

    return _data[index];
}

//Если работаем с указателями, нужно делать проверки на nullptr

/*String String::operator+(String& other)
{
    std::cout << "Operator + was called" << std::endl;
    char* newData = new char[strlen(_data) + strlen(other._data) + 1]; // + 1 добавляем потому что есть .
    strcpy(newData, _data);// в newData положит _data and /0
   
    strcat(newData, other._data); // убирает из конца newData /0 затем дописывает other._data ( в other._data уже лежит /0)
    String resStr(newData);
    delete[] newData;
    return resStr;
}*/

