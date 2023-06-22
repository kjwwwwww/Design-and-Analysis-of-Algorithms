//#include<string>
//#include<iostream>
//using namespace std;
//
//class MyArray
//{
//	int size;
//	int* ptr;
//public:
//	MyArray():size(0),ptr(NULL) {}
//	MyArray(int n) :size(n) { ptr = new int[size]; }
//	MyArray(MyArray& arr)
//	{
//		size = arr.size;
//		ptr = new int[arr.size];
//		for (int i = 0; i < size; i++)
//		{
//			ptr[i] = arr[i];
//		}
//	}
//	int& operator[](int i)
//	{
//		return ptr[i];
//	}
//	int getSize()
//	{
//		return size;
//	}
//	int*& getPtr()
//	{
//		return ptr;
//	}
//	
//	void operator=(MyArray& arr)
//	{
//		size = arr.size;
//		ptr = new int[arr.size];
//		for (int i = 0; i < size; i++)
//		{
//			ptr[i] = arr[i];
//		}
//		
//	}
//	
//	~MyArray()
//	{
//		if (ptr != NULL)
//		{
//			delete[]ptr;
//			ptr = NULL;
//		}
//
//	}
//};
//ostream& operator<<(ostream& cout, MyArray& arr)
//{
//	int j = 1;
//	for (int i = 0; i < arr.getSize();i++,j++)
//	{
//		cout << arr[i] ;
//		if (j == arr.getSize())
//		{
//			continue;
//		}
//		cout << ',';
//	}
//	cout << endl;
//	return cout;
//}
//MyArray arr11, arr22;
//MyArray& operator+(MyArray& arr1, MyArray& arr2)
//{
//	arr11 = arr1;
//	for (int i = 0; i < arr1.getSize(); i++)
//		arr11[i] += arr2[i];
//	return arr11;
//}
//MyArray& operator-(MyArray& arr1, MyArray& arr2)
//{
//
//	arr22 = arr1;
//	for (int i = 0; i < arr1.getSize(); i++)
//		arr22[i] -= arr2[i];
//	return arr22;
//}
//int  operator*(MyArray& arr1,MyArray &arr2)
//{
//	int sum = 0;
//	for (int i = 0; i < arr1.getSize(); i++)
//	{
//		sum+= arr1[i] * arr2[i];
//	}
//	return sum;
//}
//
//int main() {
//	int n;
//	cin >> n;
//	MyArray arr1(n);
//	for (int i = 0; i < arr1.getSize(); i++)
//		cin >> arr1[i];
//	cout << arr1;
//
//	MyArray arr2(arr1);
//	for (int i = 0; i < arr2.getSize(); i++)
//		arr2[i] += 1;
//	cout << arr2;
//
//	MyArray arr3, arr4;
//	arr3 = arr2 + arr1;
//	cout << arr3;
//	arr4 = arr2 - arr1;
//	cout << arr4;
//
//	cout << arr1 * arr2 << endl;
//	return 0;
//}