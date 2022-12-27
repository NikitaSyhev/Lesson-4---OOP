#pragma once
#include <iostream>
class String
{
public:
    String(const char* data);// ����������������� �����������
   ~String();// ����������
    String(String& other); // ����������� �����������
    String& operator=(String& other);//���������� ��������� ������������
   


    //String& operator=(const char* other);
    //���������� ��������� ����� �������� ������ � string  ( ������ � ������� ������� string )  s[i] = s.operator[];
    char operator[](size_t index);
    friend std::ostream& operator<<(std::ostream& os, String& s) {
        for (size_t i = 0; i < strlen(s._data); i++) {
            os << s[i];    // s[i] = s._data[i] - �� ����� �������� ����� ���������� ��������� [] 
        }
        return os;
    }

   // String operator+(String& other);

private:
    char* _data = nullptr;
};

