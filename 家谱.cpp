//#include<bits/stdc++.h>
//using namespace std;
//
//map <string, string> Father;
//string Find(string s)
//{
//    if (Father[s] == s)
//        return s;
//    return Father[s] = Find(Father[s]);
//}
//int main()
//{
//    string str;
//    string temp1, temp2, temp3;
//    while (cin >> str && str != "$")
//    {
//        if (str[0] == '#')
//        {
//            temp1 = str.substr(1);
//            if (Father[temp1] == "")
//                Father[temp1] = temp1;
//        }
//        else if (str[0] == '+')
//        {
//            temp2 = str.substr(1);
//            Find(temp1);
//            Father[temp2] = Father[temp1];
//        }
//        else if (str[0] == '?')
//        {
//            temp3 = str.substr(1);
//            Find(temp3);
//            cout << temp3 << " " << Father[temp3] << endl;
//        }
//    }
//    return 0;
//}