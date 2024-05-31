#include <iostream>
#include "chain_table.h"

int main() {
    // 创建一个空的成绩表
    score_table table(nullptr);

    // 测试插入功能
    table.insert(95.5, "张三");
    table.insert(88.2, "李四");
    table.insert(91.3, "王五");

    // 打印当前成绩表
    std::cout << "插入后的成绩表：" << std::endl;
    table.print();

    // 测试删除功能
    std::cout << "尝试删除'李四':" << std::endl;
    table.delete_node("李四");

    // 打印删除节点后的成绩表
    std::cout << "删除'李四'后的成绩表：" << std::endl;
    table.print();

    // 再次测试删除不存在的节点
    std::cout << "尝试删除'赵六'（不存在的节点）:" << std::endl;
    table.delete_node("赵六");

    // 最后打印当前成绩表
    std::cout << "当前成绩表：" << std::endl;
    table.print();

    return 0;
}
