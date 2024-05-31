#ifndef _CHAIN_H
#define _CHAIN_H
#include"chain_table.h"

#include<iostream>
using std::string;
struct node {
	double score;
	string name;
	node* next;

	node(double s, string n) : score(s), name(n), next(nullptr) {}
};

class score_table {
public:
	score_table(node* head) :head(head){};
	void insert(double score, string name);
	void delete_node(string stu);
	void print();
private:
	node* head;
};
#endif