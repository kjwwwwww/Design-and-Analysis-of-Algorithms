//#include <iostream>
//#include <string>
//#include <stdlib.h>
//#include <iomanip>
//#include <cmath>
//#include <algorithm>
//using namespace std;
///*
//	该问题可以先将一岸的坐标先进行排序(小到大),
//	之后再对另一岸的坐标进行查找最长升序子序列长度
//	当我们发现另一岸的坐标不是升序排序, 说明有桥会交叉
//*/
//
//int main() {
//	int n;
//	cin >> n;
//	// 数据初始化, a数组存储南岸坐标, b数组存储北岸坐标
//	int a[5005], b[5005];
//	for (int i = 0; i < n; i++) {
//		cin >> a[i] >> b[i];
//	}
//
//	// 功能: 对南岸进行冒泡排序, 所对应的北岸友好城市也需要排序
//	for (int i = 0; i < n; i++) {
//		for (int j = 1; j < n - i; j++) {
//			if (a[j - 1] > a[j]) {
//				swap(a[j - 1], a[j]);
//				swap(b[j - 1], b[j]);
//			}
//		}
//	}
//
//	// 功能: 计算最长升序子序列
//	// d数组存储所对应的点, 升序子序列的长度
//	int d[5001];
//	for (int i = 0; i < n; i++) {
//		d[i] = 1;
//		for (int j = 0; j < i; j++) {
//			if (b[j] < b[i]) {	// 找出i之前, 比i位置的坐标要小的坐标
//				d[i] = max(d[i], d[j] + 1);	// 状态转移方程
//			}
//		}
//	}
//
//	// 功能: 求最长子序列, 即最大值
//	int max_number = -1;
//	for (int i = 0; i < n; i++) {
//		if (d[i] > max_number) {
//			max_number = d[i];
//		}
//	}
//	cout << max_number;
//	return 0;
//}