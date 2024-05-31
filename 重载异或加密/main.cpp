#include"encryption.h"

int main() {
    std::string key;
    std::cout << "请输入密钥：";
    std::getline(std::cin, key);

    // 创建加密类实例
    encryption enc(key);

    // 待加密文本
    std::string originalText; 
    std::cout << "请输入待加密文本:";
    std::getline(std::cin, originalText);

    // 使用加法运算符加密文本
    std::string encryptedText = enc + originalText;

    // 输出加密文本
    std::cout << "加密文本: " << encryptedText << std::endl;

    // 使用减法运算符解密文本
    std::string decryptedText = enc - encryptedText;

    // 输出解密文本
    std::cout << "解密文本: " << decryptedText << std::endl;

    // 测试下标运算符
    std::cout << std::endl<< "测试加密类的下标运算符"<< std::endl;
    std::cout << "密钥: " << enc[0] << std::endl;          // 输出密钥
    std::cout << "描述: " << enc[1] << std::endl;          // 输出描述
    std::cout << "无效索引: " << enc[2] << std::endl; // 测试无效索引

}
