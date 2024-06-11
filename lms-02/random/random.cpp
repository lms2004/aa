#include<iostream>
#include<random>

static double mul_random(int times,double mul,double min, double max) {
	if (!times)
		return mul;
	// 物理噪声作为种子
	std::random_device rd;
	// 设置随机数器
	std::mt19937 gen(rd());
	// 设置范围
	std::uniform_real_distribution<double> dis(min,max);
	
	double random_num = dis(gen);
	mul *= random_num;
	return mul_random(times - 1, mul, min, max);

}

int main(){

	std::cout << mul_random(5,1,1,10);
	return 0;
}
