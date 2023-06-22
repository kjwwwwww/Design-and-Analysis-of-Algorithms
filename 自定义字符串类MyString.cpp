//#include<iostream>
//#include<cstring>
//using namespace std;
//#pragma warning(disable:4996)
//class MyString
//{
//	char* sptr;
//public:
//	MyString() { sptr = NULL; cout << "Object Constructed. No Memory Allocated." << endl; }
//	MyString(const char *s)
//	{
//		
//		sptr = new char[strlen(s) + 1];//记得delete
//		strcpy(sptr, s);
//		cout << "Object Constructed. "<<strlen(sptr)+1<<" Bytes"<<" Allocated." << endl;
//		
//	}
//	//复制构造函数
//	MyString(MyString &ms)
//	{
//		
//		sptr = new char[strlen(ms.sptr) + 1];//记得delete
//		strcpy(sptr, ms.sptr);
//		cout << "Object Constructed. " << strlen(sptr) + 1 << " Bytes" << " Allocated." << endl;
//
//	}
//
//	void printString()
//	{
//		if (sptr==NULL)
//			cout << "No Memory Allocated In This Object." << endl;
//		else
//		{
//			cout << sptr << endl;
//		}
//	}
//	int getSize()
//	{
//		if (sptr == NULL)
//			return 0;
//		else
//			return strlen(sptr);
//	}
//	void stringCopy(MyString &s)
//	{
//		int l = strlen(sptr);
//		cout << "String Copy, " << strlen(s.sptr) + 1 << " Bytes Reallocated";
//		delete[] sptr;
//		sptr = new char[strlen(s.sptr) + 1];
//		strcpy(sptr, s.sptr);
//		cout << " And " << l + 1 << " Bytes Freed." << endl;
//	}
//	void stringCat(MyString &s)
//	{
//		char* p;
//		int l = strlen(sptr);
//		p = new char[l + 1];
//		strcpy(p, sptr);
//		cout << "String Connection, " << strlen(sptr) + strlen(s.sptr)+1 << " Bytes Reallocated";
//		delete[]sptr;
//		sptr = new char[l+ strlen(s.sptr) + 1];
//		strcpy(sptr,p );
//		delete[]p;
//		strcat(sptr, s.sptr);
//		cout << " And " << l + 1 << " Bytes Freed." << endl;
//
//	}
//	~MyString()
//	{
//		if (sptr==NULL)
//			cout << "Object Destructed. No Memory Freed." << endl;
//		else
//		{
//			cout << "Object Destructed. " << strlen(sptr) + 1 << " Bytes" << " Freed." << endl;
//			delete[] sptr;
//		}
//	}
//};
//int main() {
//	MyString s1;
//	MyString s2("Hello");
//	MyString s3(s2);
//
//	s1.printString();
//	s2.printString();
//	s3.printString();
//
//	cout << s1.getSize() << " " << s2.getSize() << " " << s3.getSize() << endl;
//
//	MyString s4("HiChina");
//
//	s2.stringCopy(s4);
//	s2.printString();
//
//	s3.stringCat(s4);
//	s3.printString();
//
//	return 0;
//}