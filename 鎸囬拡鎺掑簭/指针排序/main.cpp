#include<iostream>
int main() {
	int arr[10][10] = { 0 };
	int temp[101] = { 0 };
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			arr[i][j] = j * 9 + i - 12;
			temp[i * 10 + j] = arr[i][j];
		}
	}

	for (int i = 0; i < 100; i++) {
		int j = i;
		while (j>=0&&temp[j] > temp[j + 1]) {
			int t = temp[j];
			temp[j] = temp[j + 1];
			temp[j + 1] = t;
			j--;
		}
	}
	// ��������һά����Ԫ�ظ��ƻض�ά����
	for (int i = 0; i < 100; i++) {
		arr[i / 10][i % 10] = temp[i];
	}

	// ��ӡ�����Ķ�ά����
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}

}