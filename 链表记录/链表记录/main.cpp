#include <iostream>
#include "chain_table.h"

int main() {
    // ����һ���յĳɼ���
    score_table table(nullptr);

    // ���Բ��빦��
    table.insert(95.5, "����");
    table.insert(88.2, "����");
    table.insert(91.3, "����");

    // ��ӡ��ǰ�ɼ���
    std::cout << "�����ĳɼ���" << std::endl;
    table.print();

    // ����ɾ������
    std::cout << "����ɾ��'����':" << std::endl;
    table.delete_node("����");

    // ��ӡɾ���ڵ��ĳɼ���
    std::cout << "ɾ��'����'��ĳɼ���" << std::endl;
    table.print();

    // �ٴβ���ɾ�������ڵĽڵ�
    std::cout << "����ɾ��'����'�������ڵĽڵ㣩:" << std::endl;
    table.delete_node("����");

    // ����ӡ��ǰ�ɼ���
    std::cout << "��ǰ�ɼ���" << std::endl;
    table.print();

    return 0;
}
