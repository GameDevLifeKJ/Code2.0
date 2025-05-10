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

*/

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
    //다시 풀어야 함 5/10 
}