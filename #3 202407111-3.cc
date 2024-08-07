#3 PEEC 기출 문제 (빈칸 채우기)
  
 진우는 돈을 모으기 위해 저축을 하려고 합니다. 
목표로 하는 금액은 100만 원이며, 첫 달에 일정 금액을 넣은 뒤 70만 원까지는 
매월 조금씩 저축하다가 70만 원 이후부터는 월 저축량을 늘려 빠르게 목표 금액을 달성하고자 합니다.

 첫 달에 저축하는 금액을 나타내는 정수 start, 
두 번째 달 부터 70만 원 이상 모일 때까지 매월 저축하는 금액을 나타내는 정수 before, 
100만 원 이상 모일 때 까지 매월 저축하는 금액을 나타내는 정수 after가 주어질 때, 
100만 원 이상을 모을 때까지 걸리는 개월 수를 출력하도록 빈칸을 채워 코드를 완성해 주세요.

  제한사항
0 ≤ start ≤ 99
1 ≤ before ≤ after ≤ 25

입출력 예
입력 #1

28
6
8
출력 #1
12

입력 #2

75
8
25
출력 #2

2
입출력 예 설명
입출력 예 #1

매월 저축된 금액은 아래 표와 같습니다. 따라서 12를 출력합니다.
1 	2 	3 	4 	5 	6 	7 	8 	9 	10	11	12
28	34	40	46	52	58	64	70	78	86	94	102
입출력 예 #2
첫 달 저축된 금액이 70이 넘으므로 두 번째 달부터 바로 after= 25 만큼 저축합니다. 따라서 2를 출력합니다.
1  	2
75	100

#include <iostream>

using namespace std;

int main(void) {
    int start;
    int before;
    int after;
    cin >> start >> before >> after;

    int money = start;
    int month = 1;

    while (money < 70) {
        money += before;
        month++;
    }
    while (money< 100) {
        money += after;
        month++;
    }
    cout << month << endl;
    return 0;
}



#2.5 problme


Problem Description
write the code to output something like this:

output #1
!@#$%^&*(\\\'\"<>?:;

//worng:
/**********************
#include <iostream>

using namespace std;

int main(void) {
    string str;
    cin << str << endl;
    return 0;
}
**********************/
//correct:

#include <iostream>
using namespace std;

int main(void){
  cout << "!@#$%^&*(\\\'\"<>?:;";
  return 0;
}

#2.7 problme
two integers a and b, write code that prints the calculation formula.
a + b = c
  input 1#
  4 5
  output 2#
  4 + 5 = 9
  
int main(void) {
    int a, b;
    cin >> a >> b;
    cout << a << " + " <<  b <<" = " << a + b<< endl; //caution, 
  //spacebar in "" output syntex error that correct be like it" ";
    return 0;
}



#2.9 problem
It appears that the string str1 and str2 are split into two and entered.
Write code that prints str1 and str2 as shown in the example

input 1#
apple pen

output 1#
applepen

input 2#
Hello World!

output 2#
HelloWorld!


#include <iostream>
#include <string>

using namespace std;

int main(void) {
  string str1, str2;
  cin >> str1 >> str2;
  cout << str1 << str2; // ????? why did create problem
  return 0;
}

#2.92 problem
When a natural number n is input, write code that outputs "n is an even number"
  if n is an even number, and "n is an odd number" if it is an odd number.

Restrictions:
1 ≤ n ≤ 1,000

input 1#
100

output 1#
100 is even

input 2#
1
  
output 2#
1 is odd // this problems r compiler the type of n is dependent.

#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    if (n%2 == 0) {
        cout << n <<" is even"<< endl;//caution, spacebar
    }
    else if (n%1 == 0){
        cout << n <<" is odd"<< endl;; //caution, spacebar
    }
    return 0;
}

/**************************


other solution on down


**************************/



2
3
4
5
6
7
8
9
10
11
12
13
14
15
#include <iostream>

using namespace std;

int main(void)
{
    int n;

    cin >> n;

    cout << n << " is " << (n & 1 ? "odd" : "even") << endl; // ? keyword

    return 0;
}
