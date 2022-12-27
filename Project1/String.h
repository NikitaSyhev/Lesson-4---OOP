#pragma once
#include <iostream>
class String
{
public:
    String(const char* data);// параметризованный конструктов
   ~String();// деструктор
    String(String& other); // конструктор копирования
    String& operator=(String& other);//перегрузка оператора присваивания
   


    //String& operator=(const char* other);
    //перегрузка оператора чтобы получить доступ в string  ( доступ к каждому символу string )  s[i] = s.operator[];
    char operator[](size_t index);
    friend std::ostream& operator<<(std::ostream& os, String& s) {
        for (size_t i = 0; i < strlen(s._data); i++) {
            os << s[i];    // s[i] = s._data[i] - мы этого добились через перегрузку оператора [] 
        }
        return os;
    }

   // String operator+(String& other);

private:
    char* _data = nullptr;
};

