#include "chain_table.h" // 包含链表和加密类的头文件
#include <iostream>
using namespace std;

int main() {
    string_table table;
    int n = 0;
    cout << "需要输入单词个数：" << endl;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string temp;
        cout << "请输入单词：" << endl;
        cin >> temp;
        table.insert(temp);
    }
    // 打印原始前插链表内容
    cout << "原始前插链表内容:" << endl;
    table.print();
    cout << endl;



    // 接收加密密钥
    string key;
    cout << "请输入加密密钥：" << endl;
    cin >> key;

    // 加密整个链表
    cout << "加密整个链表:" << endl;
    encryption encryptor(key);
    encryptor.encryption_n_words_(table);

    cout << "打印加密链表内容：" << endl;
    table.print();
    cout << endl;

    // 解密整个链表
    cout << "解密整个链表" << endl;
    encryptor.disclassify_n_words_(table);

    cout << "打印解密链表内容：" << endl;
    table.print();
    cout << endl;

    // 删除链表末尾节点
    cout << "删除链表末尾节点:" << endl;
    table.delete_end_node();
    cout << "删除节点后的链表:" << endl;
    table.print();

    return 0;
}
