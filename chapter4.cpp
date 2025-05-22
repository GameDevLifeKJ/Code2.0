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
/*
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
    */


//여러 케이스를 한구문에 지정할수있다
/*
int main ()
{
    cout << "숫자를 입력하세요\n";
    char a;
    cin >> a;
    switch(a) 
    {
        case'0':case'2':case'4':case'6':case'8':
            cout << "은 짝수\n";
            break;
        case'1':case'3':case'5':case'7':case'9':
            cout << "은 홀수\n";
            break;
        default:
            cout << "은 숫자가 아님\n";
            break;
    }
    return 0;
}
*/

//나쁜코드의 예  (break 누락)
/*
int main()
{
    constexpr double cm_per_inch = 2.54;        //인치당 센티미터
    double length = 1;                          //인치나 센티미터 단위의 길이
    char unit = 'a';
    cout <<"길이 뒤에 단위를 지정하세요 (c나i):\n";
    cin>>length>>unit;
    switch (unit) {
        case 'i':
            cout << length << "in ==" << cm_per_inch*length << "cm\n";
            break;
        case 'c':
            cout<<length<<"cm =="<<length/cm_per_inch<<"in\n";
            break;
    }
}
    */

//도전과제 switch 구문을 이용해서 다시작성하고 위안과 크로네도 추가하기 
/*
int main()
{
    constexpr double JPY = 145.91;
    constexpr double EUR = 1.1146;
    constexpr double GBP = 1.3271;
    constexpr double CNY = 7.23;
    constexpr double NOK = 10.45;
    double USD;
    char u;

    cout << "USD를 (JPY,EUR,GBP,CNY,NOK)중 어느나라돈으로 얼만큼 환전하시겠습니까?\n";
    cin >> USD >> u;

    switch (u)
    {
        case'j': cout << USD << " USD는 " << USD * JPY << " JPY입니다.\n"; break;
        case'e': cout << USD << " USD는 " << USD * EUR << " EUR입니다.\n"; break;
        case'g': cout << USD << " USD는 " << USD * GBP << " GBP입니다.\n"; break;
        case'c': cout << USD << " USD는 " << USD * CNY << " CNY입니다.\n"; break;
        case'n': cout << USD << " USD는 " << USD * NOK << " NOK입니다.\n"; break;
        default: cout <<"단위를 알수없습니다 죄송합니다\n"; break;
    }
    return 0;
}
    */

//0부터 99까지의 각수와 그 제곱을 계산해 표로 출력
/*
int main ()
{
    int i =0;
    while (i<100)
    {
        cout << i << '\t' << pow(i, 2) << '\n';
        ++i;
    }
}
    */

//도전과제 문자 b는 char ('a'+1) 'c' char ('a'+2) 등으로 나타낼수있다. 루프를이용해
//다음과 같이 알파벳 문자와 그에 해당하는 정수를 표로 출력해보자.
//a 97      b 98        ... z 122

//a부터z까지의 알파벳과 순서에 맞는 숫자들을 더해서 표로 출력
/*
int main()
{
    char ch;
    while (ch <= 'z')
    {
        cout << ch << '\t' << static_cast<int>(ch) << endl;
        ++ch;
    }
    return 0;
}
*/

//도전과제 
int main()
{
    for(char ch = 'a'; ch <= 'z'; ++ch )
    {cout << ch << '\t' << static_cast<int>(ch) << endl;}
    cout<<"------------------------------------"<<endl;

    for(char ch ='A'; ch <= 'Z'; ++ch)
    {cout << ch << '\t' << static_cast<int>(ch) << endl;}
    cout<<"------------------------------------"<<endl;

    for(char ch = '0'; ch <= '9'; ++ch)
    {cout << ch << '\t' << static_cast<int>(ch)<<endl;}
    cout<<"------------------------------------"<<endl;

    return 0;
}

    