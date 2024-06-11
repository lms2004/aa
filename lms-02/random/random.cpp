#include<iostream>
#include<random>

static double mul_random(int times,double mul,double min, double max) {
	if (!times)
		return mul;
	// ����������Ϊ����
	std::random_device rd;
	// �����������
	std::mt19937 gen(rd());
	// ���÷�Χ
	std::uniform_real_distribution<double> dis(min,max);
	
	double random_num = dis(gen);
	mul *= random_num;
	return mul_random(times - 1, mul, min, max);

}

int main(){

	std::cout << mul_random(5,1,1,10);
	return 0;
}
