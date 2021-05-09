#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

//int main()
//{
//    
//    string name;
//    int alp[100] = { 0, };
//    cin >> name;
//
//    for (char c : name) {
//        if ('a' <= c) c = c - 32;
//        alp[c]++;
//    }
//
//    int max = 0;
//    char c = '?';
//    for (int alpha = 'A'; alpha <= 'Z'; alpha++) {
//        if (alp[alpha] > max) {
//            max = alp[alpha];
//            c = alpha;
//
//        }
//        else if (alp[alpha] == max) {
//            c = '?';
//        }
//    }
//    cout << c << "\n";
//    return 0;
//
//}

int main() {

    int alp[100] = { 0, };
    string dan;

    cin >> dan;
    for (char c:dan) {
        if ('a ' <= c) {
            c = c - 32;
        }
        alp[c]++;
        
        
    }
    int max = 0; char reg = '?';
    for (int i = 'A'; i <= 'Z'; i++) {
        if (alp[i] > max) {
            max = alp[i];
            reg = i;
        }
        else if (alp[i] == max) {
            reg = '?';
        }
    }
    cout << reg;
    return 0;
}