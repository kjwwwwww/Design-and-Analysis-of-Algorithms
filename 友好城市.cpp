//#include <iostream>
//#include <string>
//#include <stdlib.h>
//#include <iomanip>
//#include <cmath>
//#include <algorithm>
//using namespace std;
///*
//	����������Ƚ�һ���������Ƚ�������(С����),
//	֮���ٶ���һ����������в�������������г���
//	�����Ƿ�����һ�������겻����������, ˵�����Żύ��
//*/
//
//int main() {
//	int n;
//	cin >> n;
//	// ���ݳ�ʼ��, a����洢�ϰ�����, b����洢��������
//	int a[5005], b[5005];
//	for (int i = 0; i < n; i++) {
//		cin >> a[i] >> b[i];
//	}
//
//	// ����: ���ϰ�����ð������, ����Ӧ�ı����Ѻó���Ҳ��Ҫ����
//	for (int i = 0; i < n; i++) {
//		for (int j = 1; j < n - i; j++) {
//			if (a[j - 1] > a[j]) {
//				swap(a[j - 1], a[j]);
//				swap(b[j - 1], b[j]);
//			}
//		}
//	}
//
//	// ����: ���������������
//	// d����洢����Ӧ�ĵ�, ���������еĳ���
//	int d[5001];
//	for (int i = 0; i < n; i++) {
//		d[i] = 1;
//		for (int j = 0; j < i; j++) {
//			if (b[j] < b[i]) {	// �ҳ�i֮ǰ, ��iλ�õ�����ҪС������
//				d[i] = max(d[i], d[j] + 1);	// ״̬ת�Ʒ���
//			}
//		}
//	}
//
//	// ����: ���������, �����ֵ
//	int max_number = -1;
//	for (int i = 0; i < n; i++) {
//		if (d[i] > max_number) {
//			max_number = d[i];
//		}
//	}
//	cout << max_number;
//	return 0;
//}