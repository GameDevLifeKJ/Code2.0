#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
inline void keep_window_open() {char ch; cin>>ch;}

/*
//인치를 센티미터로, 센티미터를 인치로 변환
//접미사'i' 와 'c'로 입력의 단위를 지정함
//그외의 접미사는 오류
int main()
{
    constexpr double cm_per_inch = 2.54;    //인치당 센티미터
    double length = 1;                      //인치나 센티미터 단위의 길이
    char unit = ' ';                        //공백은 단위가 아님
    cout <<"길이 뒤에 단위를 지정하세요 (c 나 i):\n";
    cin>>length>>unit;

    if (unit == 'i') cout <<length << "in ==" << cm_per_inch*length<<"cm\n";
    else if (unit == 'c') cout <<length << "in ==" << length/cm_per_inch<<"cm\n";
    else cout << "죄송합니다. '" << unit << "'라는 단위는 모르겠군요. \n";
}
*/

/*
//도전과제. 위 프로그램을 참고해서 엔,유로,파운드를 달러로 변환하는 프로그램을 작성

//JPY, EUR, GBP 를 입력하면 달러로 변환하는 프로그램
#include <iostream>
using namespace std;

int main() {
    constexpr double JPY = 145.91;
    constexpr double EUR = 1.1146;
    constexpr double GBP = 1.3271;
    double USD = 1;
    string unit;

    cout << "얼만큼의 현금을 (JPY, EUR, GBP) 중 어느 나라 돈으로 환전하시겠습니까? \n";
    cin >> USD >> unit;

    if (unit == "JPY") 
        cout << USD << " USD는 " << USD * JPY << " JPY입니다.\n";
    else if (unit == "EUR") 
        cout << USD << " USD는 " << USD * EUR << " EUR입니다.\n";
    else if (unit == "GBP") 
        cout << USD << " USD는 " << USD * GBP << " GBP입니다.\n";
    else 
        cout << "죄송합니다. '" << unit << "'라는 단위는 모르겠군요.\n";

    return 0;
}
*/


//Switch 구문을 활용한 앞예시 바꾸기
int main()
{
    constexpr double cm_per_inch = 2.54;        //인치당 센티미터
    double length = 1;                          //인치나 센티미터 단위의 길이
    char unit = 'a';
    cout << "길이 뒤에 단위를 지정하세요 (c 나 i):\n";
    cin >> length >> unit;
    switch (unit)
    {
        case 'i':
        cout << length << "in =="<< cm_per_inch*length << "cm\n";
        break;
        case 'c':
        cout << length << "cm =="<< length/cm_per_inch << "cm\n";
        break;
        default:
        cout<<"죄송합니다.'" << unit << "'라는 단위는 모르겠군요.\n";
        break;
    }
}