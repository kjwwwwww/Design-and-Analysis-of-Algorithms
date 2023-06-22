//#include<iostream>
//#include<string>
//#pragma warning(disable:4996)
//using namespace std;
//class MyString {
//	char* ptr;
//public:
//	int size()const {
//		return strlen(ptr);
//	}
//	MyString() {
//		ptr = new char[1];
//		ptr[0] = '\0';
//	}
//	MyString(const char* p) {
//		ptr = new char[strlen(p) + 1];
//		strcpy(ptr, p);
//	}
//	MyString(const MyString& str) {
//		ptr = new char[str.size() + 1];
//		strcpy(ptr, str.ptr);
//	}
//	~MyString() {
//		delete[]ptr;
//	}
//	friend ostream& operator<<(ostream& out, const MyString& str);
//	friend MyString operator+(const MyString& s1, const MyString& s2);
//	friend int operator==(const MyString& s1, const MyString& s2);
//	friend int operator!=(const MyString& s1, const MyString& s2);
//	friend int operator<(const MyString& s1, const MyString& s2);
//	friend int operator<=(const MyString& s1, const MyString& s2);
//	friend int operator>(const MyString& s1, const MyString& s2);
//	friend int operator>=(const MyString& s1, const MyString& s2);
//	MyString& operator=(const MyString& s);
//	MyString& operator+=(const MyString& s);
//	char operator[](int i);
//};
//ostream& operator<<(ostream& out, const MyString& str)
//{
//	cout << str.ptr;
//	return cout;
//}
//MyString str1;
//MyString operator+(const MyString& s1, const MyString& s2)
//{
//	strcpy(str1.ptr, s1.ptr);
//	strcat(str1.ptr, s2.ptr);
//	return str1;
//}
//int operator==(const MyString& s1, const MyString& s2)
//{
//	if (strcmp(s1.ptr, s2.ptr) == 0)
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//int operator!=(const MyString& s1, const MyString& s2)
//{
//	if (strcmp(s1.ptr, s2.ptr) != 0)
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//int operator<(const MyString& s1, const MyString& s2)
//{
//	if (strcmp(s1.ptr, s2.ptr) < 0)
//	{
//		return 1;
//	}
//	else 
//		return 0;
//}
//int operator<=(const MyString& s1, const MyString& s2)
//{
//	if (strcmp(s1.ptr, s2.ptr) <= 0)
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//int operator>(const MyString& s1, const MyString& s2)
//{
//	if (strcmp(s1.ptr, s2.ptr) > 0)
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//int operator>=(const MyString& s1, const MyString& s2)
//{
//	if (strcmp(s1.ptr, s2.ptr) >= 0)
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//char MyString::operator[](int i)
//{
//	return this->ptr[i];
//}
//MyString& MyString:: operator=(const MyString& s)
//{
//	strcpy(this->ptr, s.ptr);
//	return *this;
//}
//MyString& MyString:: operator+=(const MyString& s)
//{
//	strcat(this->ptr, s.ptr);
//	return *this;
//}
//int main() {
//
//	MyString s1("Hello"), s2("World"), s3("China");
//	cout << (s1 > s2) << " " << (s1 >= s2) << " " << (s1 <= s2) << " " << (s2 < s3) << endl;
//	cout << (s1 == s2) << " " << (s1 != s3) << endl;
//	MyString s4 = s1 + s2;
//	cout << s4 << endl;
//	s1 = s2 = s3;
//	cout << s1 << " " << s2 << " " << s3 << endl;
//	s4 += s3;
//	cout << s4 << endl;
//	for (int i = s4.size() - 1; i >= 0; i--)
//		cout << s4[i];
//	cout << endl;
//	return 0;
//}