//#include<bits/stdc++.h>
//#include<string>
//using namespace std;
//int AX, BX, CX, DX;
////�ַ���ת����
//int StrToInt(string str) {
//	int l = str.size()-1;
//	int a=0;
//	for (int i = 0; i < str.size();i++) {
//		a += int(str[i] - '0')*pow(10, l--);
//	}
//	return a;
//}
//
//int selectV(string str) {
//	if (str == "AX")
//		return 1;
//	else if (str == "BX")
//		return 2;
//	else if (str == "CX")
//		return 3;
//	else if (str == "DX")
//		return 4;
//}
//int selectO(string str) {
//	if (str == "IN")return 1;
//	else if (str == "MOV")return 2;
//	else if (str == "ADD")return 3;
//	else if (str == "SUB")return 4;
//	else if (str == "MUL")return 5;
//	else if (str == "DIV")return 6;
//	else if (str == "OUT")return 7;
//}
//int main() {
//	string str;
//	
//	int i;
//	string s1="0", s2="0", s3 = "0";
//	while (getline(cin, str)) {
//		for (i = 0;; i++)
//			if (str[i] == ' ')
//				break;
//		s1 = str.substr(0, i);
//		s2 = str.substr(i + 1, 2);
//		if(s1!="OUT")
//		s3 = str.substr(i + 4);
//		
//
//		switch (selectO(s1))
//		{
//
//		
//		//��ΪIN
//		case 1:
//			switch (selectV(s2))
//			{
//			//��Ϊs2ΪAX
//			case 1:  
//				AX = StrToInt(s3); break;
//			//��Ϊs2ΪBX
//			case 2:  
//				BX = StrToInt(s3); break;
//			//��Ϊs2ΪCX
//			case 3:  
//				CX = StrToInt(s3); break;
//			 //��Ϊs2ΪDX
//			case 4:  
//				DX = StrToInt(s3); break;
//			}break;
//		//��ΪMOV
//		case 2:
//			switch (selectV(s2))
//			{
//			//��Ϊs2ΪAX
//			case 1:  
//				switch (selectV(s3))
//				{//��s3ΪBX
//				case 2:AX = BX; break;
//				//��s3ΪCX
//				case 3:AX = CX; break;
//				//��s3ΪDX
//				case 4:AX = DX; break;
//				}break;
//			//��Ϊs2ΪBX
//			case 2:  
//				switch (selectV(s3))
//				{//��s3ΪAX
//				case 1:BX = AX; break;
//					//��s3ΪCX
//				case 3:BX = CX; break;
//					//��s3ΪDX
//				case 4:BX = DX; break;
//				} break;
//			//��Ϊs2ΪCX
//			case 3: 
//				switch (selectV(s3))
//				{//��s3ΪAX
//				case 1:CX = AX; break;
//					//��s3ΪBX
//				case 2:CX = BX; break;
//					//��s3ΪDX
//				case 4:CX = DX; break;
//				}break;
//			//��Ϊs2ΪDX
//			case 4: 
//				switch (selectV(s3))
//				{//��s3ΪAX
//				case 1:DX = AX; break;
//					//��Ds3ΪBX
//				case 2:DX = BX; break;
//					//��Ds3ΪCX
//				case 3:DX = CX; break;
//				}break;
//			}break;
//		//��ΪADD
//		case 3:
//			switch (selectV(s2))
//			{
//			//��Ϊs2ΪAX
//			case 1:
//				switch (selectV(s3))
//				{
//				//��s3ΪBX
//				case 2:AX += BX; break;
//					//��s3ΪCX
//				case 3:AX += CX; break;
//					//��s3ΪDX
//				case 4:AX += DX; break;
//				}break;
//				//��Ϊs2ΪBX
//			case 2:
//				switch (selectV(s3))
//				{//��s3ΪAX
//				case 1:BX += AX; break;
//					//��s3ΪCX
//				case 3:BX += CX; break;
//					//��s3ΪDX
//				case 4:BX += DX; break;
//				} break;
//				//��Ϊs2ΪCX
//			case 3:
//				switch (selectV(s3))
//				{//��s3ΪAX
//				case 1:CX += AX; break;
//					//��s3ΪBX
//				case 2:CX += BX; break;
//					//��s3ΪDX
//				case 4:CX += DX; break;
//				}break;
//				//��Ϊs2ΪDX
//			case 4:
//				switch (selectV(s3))
//				{//��s3ΪAX
//				case 1:DX += AX; break;
//					//��Ds3ΪBX
//				case 2:DX += BX; break;
//					//��Ds3ΪCX
//				case 3:DX += CX; break;
//				}break;
//			}break;
//		//��ΪSUB
//		case 4:
//			switch (selectV(s2))
//			{
//				//��Ϊs2ΪAX
//			case 1:
//				switch (selectV(s3))
//				{
//					//��s3ΪBX
//				case 2:AX -= BX; break;
//					//��s3ΪCX
//				case 3:AX -= CX; break;
//					//��s3ΪDX
//				case 4:AX -= DX; break;
//				}break;
//				//��Ϊs2ΪBX
//			case 2:
//				switch (selectV(s3))
//				{//��s3ΪAX
//				case 1:BX -= AX; break;
//					//��s3ΪCX
//				case 3:BX -= CX; break;
//					//��s3ΪDX
//				case 4:BX -= DX; break;
//				} break;
//				//��Ϊs2ΪCX
//			case 3:
//				switch (selectV(s3))
//				{//��s3ΪAX
//				case 1:CX -= AX; break;
//					//��s3ΪBX
//				case 2:CX -= BX; break;
//					//��s3ΪDX
//				case 4:CX -= DX; break;
//				}break;
//				//��Ϊs2ΪDX
//			case 4:
//				switch (selectV(s3))
//				{//��s3ΪAX
//				case 1:DX -= AX; break;
//					//��Ds3ΪBX
//				case 2:DX -= BX; break;
//					//��Ds3ΪCX
//				case 3:DX -= CX; break;
//				}break;
//			}break;
//		//��ΪMUL
//		case 5:
//			switch (selectV(s2))
//			{
//				//��Ϊs2ΪAX
//			case 1:
//				switch (selectV(s3))
//				{
//					//��s3ΪBX
//				case 2:AX *= BX; break;
//					//��s3ΪCX
//				case 3:AX *= CX; break;
//					//��s3ΪDX
//				case 4:AX *= DX; break;
//				}break;
//				//��Ϊs2ΪBX
//			case 2:
//				switch (selectV(s3))
//				{//��s3ΪAX
//				case 1:BX *= AX; break;
//					//��s3ΪCX
//				case 3:BX *= CX; break;
//					//��s3ΪDX
//				case 4:BX *= DX; break;
//				} break;
//				//��Ϊs2ΪCX
//			case 3:
//				switch (selectV(s3))
//				{//��s3ΪAX
//				case 1:CX *= AX; break;
//					//��s3ΪBX
//				case 2:CX *= BX; break;
//					//��s3ΪDX
//				case 4:CX *= DX; break;
//				}break;
//				//��Ϊs2ΪDX
//			case 4:
//				switch (selectV(s3))
//				{//��s3ΪAX
//				case 1:DX *= AX; break;
//					//��Ds3ΪBX
//				case 2:DX *= BX; break;
//					//��Ds3ΪCX
//				case 3:DX *= CX; break;
//				}break;
//			}break;
//		//��ΪDIV
//		case 6:
//			switch (selectV(s2))
//			{
//				//��Ϊs2ΪAX
//			case 1:
//				switch (selectV(s3))
//				{
//					//��s3ΪBX
//				case 2:AX /= BX; break;
//					//��s3ΪCX
//				case 3:AX /= CX; break;
//					//��s3ΪDX
//				case 4:AX /= DX; break;
//				}break;
//				//��Ϊs2ΪBX
//			case 2:
//				switch (selectV(s3))
//				{//��s3ΪAX
//				case 1:BX /= AX; break;
//					//��s3ΪCX
//				case 3:BX /= CX; break;
//					//��s3ΪDX
//				case 4:BX /= DX; break;
//				} break;
//				//��Ϊs2ΪCX
//			case 3:
//				switch (selectV(s3))
//				{//��s3ΪAX
//				case 1:CX /= AX; break;
//					//��s3ΪBX
//				case 2:CX /= BX; break;
//					//��s3ΪDX
//				case 4:CX /= DX; break;
//				}break;
//				//��Ϊs2ΪDX
//			case 4:
//				switch (selectV(s3))
//				{//��s3ΪAX
//				case 1:DX /= AX; break;
//					//��Ds3ΪBX
//				case 2:DX /= BX; break;
//					//��Ds3ΪCX
//				case 3:DX /= CX; break;
//				}break;
//			}break;
//	    //��ΪOUT
//		case 7:
//			switch (selectV(s2))
//			{
//				//��Ϊs2ΪAX
//			case 1:
//				cout << AX << endl; break;
//				//��Ϊs2ΪBX
//			case 2:
//				cout << BX << endl; break;
//				//��Ϊs2ΪCX
//			case 3:
//				cout << CX << endl; break;
//				//��Ϊs2ΪDX
//			case 4:
//				cout << DX << endl; break;
//			}break;
//			
//		}
//
//
//		}
//		
//
//
//
//
//
//		return 0;
//	}
//	
