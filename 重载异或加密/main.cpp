#include"encryption.h"

int main() {
    std::string key;
    std::cout << "��������Կ��";
    std::getline(std::cin, key);

    // ����������ʵ��
    encryption enc(key);

    // �������ı�
    std::string originalText; 
    std::cout << "������������ı�:";
    std::getline(std::cin, originalText);

    // ʹ�üӷ�����������ı�
    std::string encryptedText = enc + originalText;

    // ��������ı�
    std::cout << "�����ı�: " << encryptedText << std::endl;

    // ʹ�ü�������������ı�
    std::string decryptedText = enc - encryptedText;

    // ��������ı�
    std::cout << "�����ı�: " << decryptedText << std::endl;

    // �����±������
    std::cout << std::endl<< "���Լ�������±������"<< std::endl;
    std::cout << "��Կ: " << enc[0] << std::endl;          // �����Կ
    std::cout << "����: " << enc[1] << std::endl;          // �������
    std::cout << "��Ч����: " << enc[2] << std::endl; // ������Ч����

}
