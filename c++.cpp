#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
inline void keep_window_open() {char ch; cin>>ch;}

/*
int main() {
    std::cout << "Hello, Programing!\n"  << "Here we go!" << std::endl;
    keep_window_open();
    return 0;
}



int main()
{
    cout << "성을 입력하고 엔터를 누르세요:\n";
    string first_name; //first_name은 string 타입의 변수임
    cin >> first_name; //first_name에 문자열을 읽음
    cout << "안녕하세요" <<first_name << "!\n";
    cout << "first_name"<< " is " << first_name;

    string name = "Annemarie";
    int number_of_steps = 39;

    int number_of_steps = 39;   //정수를 저장하는 int
    double flying_time = 3.5;   //부동소수점 수 (floating-point number)를 저장하는 double
    char decimal_point = '.';   //개별 문자를 저장하는 char
    string name = "Annemarie";  //문자열을 저장하는 string
    bool tap_on = true;         //논리변수 (logical varable)를 저장하는 bool
}



//이름과 나이 입력 1.0
int main ()
{
    cout<<"성과 나이를 입력하세요\n";
    string first_name; //문자열 변수 
    int age;           //정수 변수


    cin >> first_name; //문자열 읽기
    cin >> age;        //정수읽기
    cout <<"안녕하세요," << first_name << "(나이 "<< age << ")\n";
}



//이름과 나이읽기2.0
int main()
{
    cout << " 성 과 나이를 입력해주세요";
    string first_name = "???";          //문자열 변수
    int age = -1;
    cin >> first_name >> age;           //문자열을 읽은후 정수를 읽음
    cout << "안녕하세요," << first_name << "(나이" << age << ")\n";

}



//이름과 나이읽기 도전과제 
//'이름과 나이' 예제를  실행해보고 나이를 개월수로 출력하도록 바꾸기
//입력을 연단위로 받은후에 12를 곱한다 (* 연산자 이용.)
//다른 다섯 살짜리보다 5~6 개월 일찍 태어난 사실을 자랑으로 여기는 어린이를 고려해서 
// 나이를 double 타입으로 받는다

int main()
{
    cout << " 어린친구 이름이랑 개월수를 좀 알려줄래요?";
    string first_name = "???";          //문자열 변수
    double age = -1;
    double age_in_months = age * 12;
    cin >> first_name >> age;           //문자열을 읽은후 정수를 읽음
    cout << "안녕하세요," << first_name << "(나이" << age_in_months / 12  << ")\n";
}


//간단한 연산자 실습용 프로그램
int main()
{
    cout << "부동소수점 값 입력:";
    double n;
    cin >> n;
    cout << "n == " << n
    <<"\nn+1 ==" << n+1
    <<"\n3 곱하기 n ==" << 3*n
    <<"\nn의 두배 ==" <<n+n
    <<"\nn 제곱== " << n*n
    <<"\nn 나누기 2 ==" << n/2
    <<"\nn의 제곱근 ==" << sqrt(n)
    <<'\n'; //출력에서 개행문자("행의 끝")을 뜻하는 특수문자
}


//도전과제 double이 아닌 int를 읽어오도록 고쳐보자/ int 에 대해 sqrt() 가 정의되지 않았으므로, n을 double에 대입해 sqrt()를 적용해야 한다. 더 나아가 다른 연산자도
//연습해보자. int에서 /는 정수 나눗셈이고 %는 나머지 연산임을 기억하자. 즉 5/2 는 (2.5나 3이 아닌) 2이고, 5%2는 1이다. 
//정수에 대한 *와 /, %정의에 따르면 두양의 int a와 b에 대해  a/b * b + a%b == a는 항상 참이다.

int main()
{
    cout << "부동소수점 값 입력:";
    int n;
    cin >> n;
    cout << "n == " << n
    <<"\nn+1 ==" << n+1
    <<"\n3 곱하기 n ==" << 3*n
    <<"\nn의 두배 ==" <<n+n
    <<"\nn 제곱== " << n*n
    <<"\nn 나누기 2 ==" << n/2
    <<"\nn의 제곱근 ==" << sqrt(n)
    <<'\n'; //출력에서 개행문자("행의 끝")을 뜻하는 특수문자
}


//성과 이름 읽기 
 int main()
 {
    cout << "성과 이름을 입력하세요 \n";
    string first;
    string second;
    cin >> first >> second;             //두 문자열 읽기 
    string name = first + second;       //두 문자열 연결
    cout << "안녕하세요," << name <<'\n';
 }

 

 //이름을 읽고 비교 
 int main()
 {
    cout << "이름을 두개 입력하세요 \n";
    string first;
    string second;
    cin >> first >> second; //두문자열 읽기 
    if (first == second) cout <<"두이름이 같습니다\n";
    if (first < second)
        cout << first << "가 알파벳순으로 더 앞에 위치함:" << second <<'\n';
    if (first > second)
        cout << first << "알파벳순으로 더 뒤에 위치함:" << second << '\n';
}



//반복되는 이름 찾기 
int main ()
{
    string previous = " ";          //이전 단어. '단어가 아님'을 나타내는 값으로 초기화
    string current;                 //현재 단어
    while (cin >> current)          //스트림에서 단어를 읽음
    {                               
        if (previous == current)    //현재 단어와 마지막 단어가 같은지 검사
            cout << "반복된 단어: " << current << '\n';
        previous = current;
    }
}



//반복되는 이름 찾기 2.0
int main ()
{
    int number_of_words = 0;
    string previous = " ";          //이전 단어. '단어가 아님'을 나타내는 값으로 초기화
    string current;                 //현재 단어
    while (cin >> current)          //스트림에서 단어를 읽음
    {   
        ++number_of_words;                              
        if (previous == current)    //현재 단어와 마지막 단어가 같은지 검사
            cout << number_of_words << "번 반복되었습니다"
                 << "반복된 단어: " << current << '\n';
        previous = current;
    }
}



int main ()
{
    double x;               //초기화를 되지 않았으므로 x의 값은 정의되지 않음
    double y = x;           //y의 값도 정의되지 않음
    double z = 2.0+x;       //+의 의미도 정의되지 않았으므로, z의값도 알수없음
}



int main()
{
    int a = 20000;
    char c = a;     //큰 int를 작은 char에 우겨넣으려고 시도 
    int b = c;
    if (a !=b)
        cout << "이런!:" << a << "!=" << b << '\n';
    else
        cout << "우와! 문자가 엄청 크네요.\n";
}

*/

int main ()
{
    double d = 0;
    while (cin >>d)     //숫자를 입력받는동안 아래 구문을 반복 
    {
        int i = d;      //double을 int로 축소 변환 
        char c = i;     //int를 char로 축소 변환
        int i2 = c;     //문자의 정수표현을 대입 
        cout << "d=="  << d 
             << "i=="  << i
             << "i2==" <<i2
             <<"char(" << c <<")\n";
    }
}