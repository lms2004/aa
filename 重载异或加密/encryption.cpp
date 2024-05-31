#include"encryption.h"

// 下标运算符重载
std::string encryption::operator[](int size) {
    if (size == 0) {
        return key;
    }
    else if (size == 1) {
        return describe;
    }
    else {
        return "不存在当前下标的元素";
    }
}

// 赋值运算符重载
encryption encryption::operator=(encryption other) {
    encryption temp(other.key);
    return temp;
}

// 解密减法运算符重载
std::string operator-(const encryption& enc,const std::string& text) {
    return enc + text;
}

// 加密加法运算符重载
std::string operator+(const encryption& enc,const std::string& text)
{
    std::string encryptedText = text;
    std::string key = enc.key;
    int len = text.size() - enc.key.size();
    for (int i = 0; i < abs(len); i++) {
        key += "@";
    }

    for (size_t i = 0; i < text.size(); i++) {
        encryptedText[i] ^= (1221923 + key[i]);
    }
    return encryptedText;
}
