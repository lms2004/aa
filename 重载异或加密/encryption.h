#pragma once
#ifndef ENCRYPTION_H
#define ENCRYPTION_H
#include<string>
#include<iostream>

class encryption {
public:
    // ���캯��
    encryption(std::string key) : key(key), describe("��������") {}
 
    // ��ֵ���������
    encryption operator=(encryption other);

    // �±����������
    std::string operator[](int size);

    // ���ܼӷ����������
    friend std::string operator+ (const encryption & enc,const std::string & text);

    // ���ܼ������������
    friend std::string operator- (const encryption& enc,const std::string& text);
private:
    std::string key;
    std::string describe;
};
#endif // !1