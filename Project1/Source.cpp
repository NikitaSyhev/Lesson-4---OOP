#include<iostream>
#include "String.h"

//������� ����� String

//��, ��� ����������� ���������, ��� �������� �������� ���� std::string � ��� ����� �������� ���� int, � ����������� �������� ��� int �\��� std::string ( �� ����� ���������� )
//�������, ����� ��� ��������� ��������� ����� ����������
int main () {


    String str("abc");

    std::cout << "1 st str " << str << std::endl;
   // String str1("str");
    String str2("Bob");
    str = str2;

    std::cout << "2 nd str" << str << std::endl;

    String str3("Alice");

    String str4("af");


  
    // str = str1;
    // str = "abc";
    //std::cout << str << std::endl;





   
}