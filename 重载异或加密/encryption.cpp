#include"encryption.h"

// �±����������
std::string encryption::operator[](int size) {
    if (size == 0) {
        return key;
    }
    else if (size == 1) {
        return describe;
    }
    else {
        return "�����ڵ�ǰ�±��Ԫ��";
    }
}

// ��ֵ���������
encryption encryption::operator=(encryption other) {
    encryption temp(other.key);
    return temp;
}

// ���ܼ������������
std::string operator-(const encryption& enc,const std::string& text) {
    return enc + text;
}

// ���ܼӷ����������
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
