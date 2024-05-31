#include "chain_table.h" // ��������ͼ������ͷ�ļ�
#include <iostream>
using namespace std;

int main() {
    string_table table;
    int n = 0;
    cout << "��Ҫ���뵥�ʸ�����" << endl;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string temp;
        cout << "�����뵥�ʣ�" << endl;
        cin >> temp;
        table.insert(temp);
    }
    // ��ӡԭʼǰ����������
    cout << "ԭʼǰ����������:" << endl;
    table.print();
    cout << endl;



    // ���ռ�����Կ
    string key;
    cout << "�����������Կ��" << endl;
    cin >> key;

    // ������������
    cout << "������������:" << endl;
    encryption encryptor(key);
    encryptor.encryption_n_words_(table);

    cout << "��ӡ�����������ݣ�" << endl;
    table.print();
    cout << endl;

    // ������������
    cout << "������������" << endl;
    encryptor.disclassify_n_words_(table);

    cout << "��ӡ�����������ݣ�" << endl;
    table.print();
    cout << endl;

    // ɾ������ĩβ�ڵ�
    cout << "ɾ������ĩβ�ڵ�:" << endl;
    table.delete_end_node();
    cout << "ɾ���ڵ�������:" << endl;
    table.print();

    return 0;
}
