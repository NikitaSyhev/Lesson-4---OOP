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

//���� �������� � �����������, ����� ������ �������� �� nullptr

/*String String::operator+(String& other)
{
    std::cout << "Operator + was called" << std::endl;
    char* newData = new char[strlen(_data) + strlen(other._data) + 1]; // + 1 ��������� ������ ��� ���� .
    strcpy(newData, _data);// � newData ������� _data and /0
   
    strcat(newData, other._data); // ������� �� ����� newData /0 ����� ���������� other._data ( � other._data ��� ����� /0)
    String resStr(newData);
    delete[] newData;
    return resStr;
}*/

