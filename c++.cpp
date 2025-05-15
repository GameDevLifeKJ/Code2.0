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



int main ()
{

    string first_name = "???";
    string second_name = "???";
    string friends_name = "???";
    char friends_sex;


    cout << "이름을 입력해주세요 :";

    cin >> first_name;
    if (first_name != "???")
    {
        cout<< "잘지내시죠?\n" + first_name;
        cout << "편지를 받을 사람의 이름을 알려주세요 : \n";
        cin >> second_name;
    }

    if (second_name != "???")
    {
        cout << "친애하는" << first_name << "잘 지내시죠? 저는 잘지냅니다. 보고싶군요\n"; 
        cout << "다른 친구의 이름과 성을 입력해주세요 : \n";
        cin >> friends_name >> friends_sex;
    }

    
    if (friends_sex == f)
    {
        cout << friends_name << "을 보시거든 그녀에게 저한테 전화좀 해달라고 전해주세요";
    }

    if(friends_sex ==m)
    {
        cout << friends_name << "을 보시거든 그에게 저한테 전화좀 해달라고 전해주세요";
    }

    
}

5/11일날 실습문제 시도 했는데 개같이 실패해서 copilot으로 해답 찾아봄 씨이발~ 
Third edition도 나왔다는데 그건 분량이 절반으로 줄고 초보를 위한내용들이 싹 편집되어서 이거 다읽고
Third 사서 최신부분만 확인해봐야 할듯



int main()
{
    //변수 선언 [먼저 변수들을 선언해준다]
    string first_name;          //편지를 받을 사람의 이름 
    string friend_name;         //친한 친구의 이름
    char friend_sex = 0;        //친구의 성별 ('m' 또는 'f')
    int age = 0;                //받는 사람의 나이 

    //사용자의 입력 받기 
    cout << "편지를 받을 사람의 이름을 입력하세요:";
    cin >> first_name;

    cout << "친구의 이름을 입력하세요:";
    cin >> friend_name;

    cout << "친구의 성별을 입력하세요 (m/f):";
    cin >> friend_sex;

    cout << "편지를 받을 사람의 나이를 입력하세요:";
    cin >> age;

    //나이 값의 유효성 검사 0이하거나 100이상이면 구라치지마셈 나와야함 
    if (age <= 0 || age >= 110)
    cout << "구라치지마세요!";

    //편지 출력 시작
    cout << "\n친애하는" << first_name << ",\n\n";

    cout << "잘지내시죠? 저는 잘지내고 있답니다. 많이 보고싶어요.\n";
    cout << "혹시 최근에 " << friend_name << " 를 본적이 있나요?";

    //친구의 성별에 따른 메세지 선택 
    if (friend_sex == 'm')
        cout << "만약 본적이 있거든 그에게 저한테 전화 해달라고 해주세요.\n";
    else if (friend_sex == 'f')
        cout << "만약 본적이 있거든 그녀에게 저한테 전화 해달라고 해주세요.\n";

    //나이를 기반으로 한 추가 메세지 
    cout << "이제 생일이 지나서 " << age << "살인걸로 알고있어요.\n";

    if(age < 12)
        cout << "내년에는" << age + 1 << "살이 되겠군요. \n";
    else if (age == 17)
        cout << "내년에는 투표를 할수있겐군요.\n";
    else if (age > 70)
        cout << "은퇴를 잘 즐기고 계신가요?\n";
    
    //편지 마무리
    cout << "\n 절실한 친구, \n\n" << "당신의 이름\n";

    return 0;
}



//다음번에 다시한번 안보고 코딩 해볼것 

//연습문제 2.마일을 킬로미터로 변환 하는 프로그램을 작성하기, hint 1마일은 1.609킬로미터다

int main()
{
    int number =1;
    double miles = 1;
    double kilometer = 1.609;
    cout << "아무숫자나 입력해 주세요:\n";
    cin >> number ;
    cout << number << "는" << number *  kilometer << "입니다!";
}



int main() {
    double mile;                              // 사용자로부터 입력받을 마일 값
    const double mileToKilometer = 1.609;       // 1마일 당 킬로미터 변환 상수

    cout << "마일 값을 입력하세요: ";
    if (!(cin >> mile)) {                       // 입력값 검증
        cerr << "입력 형식 오류입니다." << endl;
        return 1;
    }
    
    double kilometers = mile * mileToKilometer;

    cout << mile << " 마일은 " << kilometers << " 킬로미터 입니다." << endl;

    return 0;
}



//연습문제 3.아무일도 하지않고 합법적인 이름과 그렇지 않은 이름 (예 int double = 0;)으로 변수를 몇개 선언하는 프로그램을 만들자.
//연습문제 4.사용자에게 두정수값을 입력하라는 프롬프트를 출력하고. 이값을 val1, val2라는 int변수에 저장하자. 그리고 이둘의
//더작은 값, 큰 값, 둘의 합, 차, 곱, 비율을 구해서 출력하자.

int main()
{
    int val1;
    int val2;

    cout << "두정수값을 입력해주세요" << endl;
    cin >> val1 >> val2;

    int min_val = (val1 < val2) ? val1 : val2;
    int max_val = (val1 > val2) ? val1 : val2;
    int sum = val1 + val2;
    int diff = val1 * val2;
    double ratio = (val2 != 0) ? static_cast<double>(val1) / val2 : 0;
    //0으로 나뉘는경우를 방지 

    cout<< "더 작은 값: " << min_val << std::endl;
    cout<< "더 큰 값: " << max_val << endl;
    cout<< "합: " << sum << endl;
    cout<< "차: " <<diff << endl;
    
    if (val2 != 0)
    {
        cout << "비율: " << ratio << endl;
    }
    else
    {
        cout << "비율을 계산할 수 없습니다" << endl;
    }
    return 0;
}
    


//연습문제 5.4번 프로그램을 부동소수점 값을 입력받아 float에 저장하도록 고치고 차이점을 알아보자.

int main ()
{
    float val1 = 0;
    float val2 = 0;

    cout << "두 부동소수점 값을 입력해주세요 : " << endl;
    cin >> val1 >> val2;

    float max_val = (val1 > val2) ? val1 : val2;
    float min_val = (val1 < val2) ? val1 : val2;
    float sum = val1 + val2;
    float diff = val1 - val2;
    double ratio = (val2 != 0) ? static_cast<double>(val1) / val2 : 0;
    //0으로 나뉘는경우를 방지 


    cout<< "더 작은 값: " << min_val << std::endl;
    cout<< "더 큰 값: " << max_val << endl;
    cout<< "합: " << sum << endl;
    cout<< "차: " <<diff << endl;
    
    if (val2 != 0)
    {
        cout << "비율: " << ratio << endl;
    }
    else
    {
        cout << "비율을 계산할 수 없습니다" << endl;
    }
    return 0;

}



//연습문제 6.사용자에게 정수값 3개를 입력하라는 프롬프트를 출력하고, 이값을 쉼표로 구분해서 숫자 순서대로 출력하는 프로그램을 작성하자. 

int main ()
{
    int val1, val2, val3;
    cout << "정수값 3개를 입력해주세요:" << endl;
    cin >> val1 >> val2 >> val3;

    if (val1 < val2) swap (val1, val2);
    if (val2 < val3) swap (val2, val3);
    if (val1 < val2) swap (val1, val2);

    cout << val1 << val2 << val3 << endl;
    return 0;
}
//예를 들어 10 과 4,6이 입력되면 4,6,10을 출력하며 두값이 같으면 서로 인접한 순서대로 출려가자.


//7.6번 문제의 정수3개를 문자열로 바꾼다. 

int main ()
{
    string val1, val2, val3;
    cout << "문자열값 3개를 입력해주세요:" << endl;
    cin >> val1 >> val2 >> val3;

    if (val1 < val2) swap (val1, val2);
    if (val2 < val3) swap (val2, val3);
    if (val1 < val2) swap (val1, val2);

    cout << val1 << val2 << val3 << endl;
    return 0;
}



//8주어진 정수값이 홀수인지 짝수인지 확인하는 프로그램을 완결성을 갖춰서 작성

int main ()
{
    int val =0;
    cout << "값을 입력해주세요" << endl;
    cin >> val;

    //홀수 또는 짝수 판별
    if (val % 2 ==0){
    cout << val << "은 짝수입니다" << endl;
    }
    else{
        cout << val << "은 홀수입니다" << endl;
    } 
    return 0;
}

*/

//9영어  스펠링을 숫자로 바꾸는 프로그램을 작성하자 0~4. 숫자로 표현이 불가능하면 "바보같은 컴퓨터"
/*
int main ()
{
    int num = 0;
    int zero = 0;
    int one = 1;
    int two = 2;
    int three = 3;
    int four = 4;
    string err = "stupid_computer";

    cout << "please type any number in word" << endl;
    cin >> num;
    if (num == zero){cout << "0" << endl;}
    if (num == one){cout << "1" << endl;}
    if (num == two){cout << "2" << endl;}
    if (num == three){cout << "3" << endl;}
    if (num == four){cout << "4" << endl;}
    else {cout << err << endl;}

    return 0;
}
*/


/*
int main() {
    std::string num;  // 사용자 입력을 문자열로 받음

    // 🎯 사용자 입력 받기
    std::cout << "영어로 숫자를 입력해주세요 (zero~four): ";
    std::cin >> num;

    // 🎯 입력된 문자열을 숫자로 변환
    if (num == "zero") {
        std::cout << "0" << std::endl;
    } else if (num == "one") {
        std::cout << "1" << std::endl;
    } else if (num == "two") {
        std::cout << "2" << std::endl;
    } else if (num == "three") {
        std::cout << "3" << std::endl;
    } else if (num == "four") {
        std::cout << "4" << std::endl;
    } else {
        std::cout << "바보같은 컴퓨터" << std::endl;  // 잘못된 입력 시 출력
    }

    return 0;
}
 */

//10다음과 같이 연산자와 두 피연산자를 입력받아 결과를 출력하는 프로그램을 작성하자.
// +100 3.14
// *4 5 
//연산자를 operation 이라는 문자열 변수에 대입하고, if (operation 이라는 문자열 변수에 대입하고,
//if (operation =="+") 와 같은 if 문으로 사용자가 어떤 연산을 원하는지 가려내자. 두 피연산자는 double 
//타입변수에 저장하고, +와 -,*,/,plus,minus,mul,div등의 연산을 의미에 맞게 구현하자. 
//11페니(1센트)와 니켈(5센트), 다임(10센트), 쿼터(25센트), 하프달러(50센트), 달러 (100센트) 개수를
//입력하라는 프롬프트를 출력하는 프로그램을 작성하자. "몇 페니를 가지고 계세요?"처럼 각 단위의 
//동전개수를 따로 물어봐야 한다. 그후에 다음과 같이 출력해야 한다. 
// you have 23 pennies. you have 17 nickles. 등등