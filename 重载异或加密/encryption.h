#pragma once
#ifndef ENCRYPTION_H
#define ENCRYPTION_H
#include<string>
#include<iostream>

class encryption {
public:
    // 构造函数
    encryption(std::string key) : key(key), describe("异或加密类") {}
 
    // 赋值运算符重载
    encryption operator=(encryption other);

    // 下标运算符重载
    std::string operator[](int size);

    // 加密加法运算符重载
    friend std::string operator+ (const encryption & enc,const std::string & text);

    // 解密减法运算符重载
    friend std::string operator- (const encryption& enc,const std::string& text);
private:
    std::string key;
    std::string describe;
};
#endif // !1