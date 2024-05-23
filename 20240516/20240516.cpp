#include <iostream>
using namespace std;

#include <cstdlib>

int main()
{
    
    //Q.1
    cout << "初めてのC++プログラム\n";
    cout << "画面に出力しています。\n";


    //Q.2
    char name[] = "iguchi"; 

    //　各文字を1行ずつ出力するループ
    //　NULLが終端にあるのでそれまでループするように
    for (int i = 0; name[i] != NULL; ++i) {
        cout << name[i] << endl;
    }

    //Q.3
    int a = 63;
    int b = 18;

    float sum = a + b;

    float average = sum / 2;

    // 結果を表示
    cout << "合計値は" << sum << endl;
    cout << "平均値は" << average << endl;


    //Q.4

    int Q4;
    cout << "好きな整数を入力" << endl;
    cin >> Q4;
    cout << "入力した整数は" << Q4 << endl;

    //Q.5
    int Q5 = Q4 % 10;
    cout << "最下位桁は" << Q5 << endl;


    //Q.6
    float Q6a, Q6b;
    cout << "好きな整数を2回入力" << endl;
    cin >> Q6a;
    cin >> Q6b;

    float Q6sum = Q6a + Q6b;

    float Q6average = Q6sum / 2;

    cout << "入力した二つの合計値は" << Q6sum << endl;
    cout << "入力した二つの平均値は" << Q6average << endl;


    //Q.7
    float Q7a, Q7b;
    cout << "底辺を入力" << endl;
    cin >> Q7a;
    cout << "高さを入力" << endl;
    cin >> Q7b;

    float Q7c = Q7a * Q7b / 2;
    cout << "三角形の面積は" << Q7c << endl;


    //Q.8
    srand(time(NULL));
    int randomNum = rand() % 5 + 1;
    int Q8a;
    cin >> Q8a;
    Q8a = +randomNum;
    cout <<  Q8a << endl;

    //Q.9
    int Q9a;
    cin >> Q9a;
    cout << "絶対値を求めたい値を入力" << Q9a << endl;
    int Q9a = (Q9a < 0) ? -Q9a : Q9a;
    cout << "入力した値の絶対値は" << Q9a << endl;
    

    //Q.10
    int Q10a;
    cin >> Q10a;
    if (Q10a > 0)
    {
        cout << "負" << endl;
    }
    else if(Q10a == 0)
    {
        cout << "0" << endl;
    }
    else
    {
        cout << "正" << endl;
    }

    //Q.11
    float Q11a, Q11b;
    cout << "二つの値を入力" << endl;
    cin >> Q11a;
    cin >> Q11b;

    if (Q11a == Q11b)
    {
        cout << "二つの値は等しい" << endl;
    }
    else if (Q11a > Q11b)
    {
        cout << "一つ目の値の方が大きい" << endl;
    }
    else
    {
        cout << "二つ目の値の方が大きい" << endl;
    }

    //Q.12
    int Q12a;
    cout << "正の整数を入力" << endl;
    cin >> Q12a;
    if (Q12a < 0)
    {
        cout << "負の値が入力されています" << endl;
    }
    else if (Q12a % 3 == 0)
    {
        cout << "3で割り切れます" << endl;
    }
    else 
    {
        cout << "3で割り切れません" << endl;
    }
    
    //Q.13 似た問題なのでカット
    //Q.14似た問題なのでカット
    
    //Q.15
    int Q15a, Q15b, Q15c;
    cin >> Q15a;
    cin >> Q15b;
    cin >> Q15c;
    if (Q15a > Q15b)
    {
        Q15a = Q15b;
    }
    if (Q15a > Q15c)
    {
        Q15a = Q15c;
    }
    cout << "一番小さい値は" << Q15a << endl;


    //Q.16
    int Q16a, Q16b;
    cin >> Q16a;
    cin >> Q16b;

    if (Q16a > Q16b)
    {
        cout << Q16a << " " << Q16b << endl;
    }
    else
    {
        cout << Q16b << " " << Q16a << endl;
    }
    
    //Q.17
    //Q.18
    //Q.19

srand(time(NULL));
    int Q19 = rand() % 7 + 1;


    switch (Q19) {
    case 1:
        cout << "大吉" << endl;
        break;
    case 2:
        cout << "中吉" << endl;
        break;
    case 3:
        cout << "小吉" << endl;
        break;
    case 4:
        cout << "吉" << endl;
        break;
    case 5:
        cout << "末吉" << endl;
        break;
    case 6:
        cout << "凶" << endl;
        break;
    case 7:
        cout << "大凶" << endl;
        break;
    default:
        cerr << "Error" << endl;
        break;
    }










}

