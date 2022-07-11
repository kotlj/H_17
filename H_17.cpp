
#include <iostream>
#include <time.h>

using std::cout;
using std::cin;

void task_1()
{
    int numbers[5];
    cout << "enter 5 numbers";
    cin >> numbers[0] >> numbers[1] >> numbers[2] >> numbers[3] >> numbers[4];
    cout << numbers[4] << ", " << numbers[3] << ", " << numbers[2] << ", " << numbers[1] << ", " << numbers[0];
}

void task_2()
{
    int rnumbers[20];
    for (int i = 0; i < 20; i++)
    {
        rnumbers[i] = rand();
        if (i % 2 == 0)
            cout << rnumbers[i] << "\n";
    }
}

void task_3()
{
    int rnumbers[10];
    int sum = 0;
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        int rnum = rand() + 39 & 20;
        if (rand() % 2 == 0)
            rnum *= -1;
        rnumbers[i] = rnum;
    }
    for (int i = 0; i < 10; i++)
    {
        if (rnumbers[i] >= 0)
        {
            sum += rnumbers[i];
            count++;
        }
    }
    cout << "total number pos: " << count << "\nsum: " << sum << "\nmiddle arifmetic: " << sum / count;
}

void task_4()
{
    char rsymb[100];
    int count_symb = 0;
    int count_num = 0;
    int count_pun = 0;
    for (int i = 0; i < 100; i++)
    {
        rsymb[i] = rand() % 257;
        if (isdigit(rsymb[i]))
            count_num++;
        else if (isalpha(rsymb[i]))
            count_symb++;
        else if (rsymb[i] == 0 || rsymb[i] >= 44 && rsymb[i] <= 46 || rsymb[i] == 33 || rsymb[i] == 58 || rsymb[59] == 59 || rsymb[63])
            count_pun++;
    }
    cout << "alpha " << count_symb << "\ndigits " << count_num << "\npuncutation " << count_pun;
}

void task_5()
{
    int num = 0;
    int rnums[100];
    cout << "Enter number\n";
    cin >> num;
    int count = 0;
    for (int i = 0; i < 100; i++)
    {
        rnums[i] = rand() % (num + 1);
        if (rnums[i] == num)
            count++;
    }
    cout << count;
}

void task_6()
{
    int sum = 0;
    int rnums[20];
    bool neg = false;
    for (int i = 0; i < 20; i++)
    {
        rnums[i] = rand() + 39 % 31;
        if (rnums[i] < 11 && rand() % 2 == 0)
            rnums[i] *= -1;
    }
    for (int i = 0; i < 20; i++)
    {
        if (not neg && rnums[i] < 0)
            neg = true;
        else if (neg)
            sum += rnums[i];
    }
    cout << sum;
}

void task_7()
{
    int rnums[20];
    int min = INT_MAX;
    int max = INT_MIN;
    for (int i = 0; i < 20; i++)
    {
        rnums[i] = rand();
        if (rnums[i] < min)
            min = rnums[i];
        if (rnums[i] > max)
            max = rnums[i];
    }
    cout << "min: " << min << "\nmax: " << max;
}
void task_8()
{
    int count[3] = { 0, 0, 0 };
    int rnums[200];
    for (int i = 0; i < 200; i++)
    {
        rnums[i] = rand() % 201;
        if (rnums[i] > 99)
            count[2]++;
        else if (rnums[i] > 9)
            count[1]++;
        else
            count[0]++;
    }
    cout << "0 - 9 : " << count[0] << "\n10 - 99 : " << count[1] << "\n100+ : " << count[2];
}

void task_9()
{
    int rnums[10];
    for (int i = 0; i < 10; i++)
    {
        rnums[i] = rand();
        cout << i << " " << rnums[i];
    }
    for (int i = 0; i < 10; i++)
    {
        rnums[i], rnums[9 - i] = rnums[9 - 1], rnums[i];
        cout << i << " " << rnums[i];
    }
}

void task_10()
{
    int nums_a[5] = { 0, 1, 2, 3, 4 };
    int nums_b[5] = { 0, 1, 2, 3, 4 };
    int nums_c[10];
    int a = 0;
    int b = 0;
    bool turn = true;
    for (int i = 0; i < 10; i++)
    {
        if (turn)
        {
            nums_c[i] = nums_a[a];
            turn = false;
            a++;
            cout << i << " " << nums_c[i];
        }
        else
        {
            nums_c[i] = nums_b[b];
            turn = true;
            b++;
            cout << i << " " << nums_c[i];
        }
    }
}

int main()
{
    srand(time(0));
    system("cls");
    int choise = 0;
    cout << "choose task 1 - 10\n0 - exit;";
    cin >> choise;
    system("cls");
    if (choise == 1)
        task_1();
    else if (choise == 2)
        task_2();
    else if (choise == 3)
        task_3();
    else if (choise == 4)
        task_4();
    else if (choise == 5)
        task_5();
    else if (choise == 6)
        task_6();
    else if (choise == 7)
        task_7();
    else if (choise == 8)
        task_8();
    else if (choise == 9)
        task_9();
    else if (choise == 10)
        task_10();
    else if (choise == 0)
        exit(1);
    cin >> choise;
    main();
}