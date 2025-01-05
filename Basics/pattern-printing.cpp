#include <iostream>
using namespace std;

void seperator();
void pt_1(int n);
void pt_2(int n);
void pt_3(int n);
void pt_4(int n);
void pt_5(int n);
void pt_6(int n);
void pt_7(int n);
void pt_8(int n);
void pt_9(int n);
void pt_10(int n);

int main()
{
    system("clear");
    int n = 5;
    // pt_1(n);
    // seperator();
    // pt_2(n);
    // seperator();
    // pt_3(n);
    // seperator();
    // pt_4(n);
    // seperator();
    // pt_5(n);
    // seperator();
    // pt_6(n);
    // seperator();
    // pt_7(n);
    // seperator();
    // pt_8(n);
    // seperator();
    // pt_9(n);
    // seperator();
    pt_10(n);

    return 0;
}

void pt_10(int n)
{
    for (int row = 1; row < 2 * n; row++)
    {
        int col = row <= n ? row : 2 * n - row;
        for (int star = 1; star <= col; star++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pt_9(int n)
{
    pt_7(n);
    pt_8(n);
}

void pt_8(int n)
{
    int stars = 2 * n - 1;
    int spaces = 0;
    for (int row = 1; row <= n; row++)
    {
        for (int i = 1; i <= spaces; i++)
        {
            cout << " ";
        }
        for (int i = 1; i <= stars; i++)
        {
            cout << "*";
        }
        spaces += 1;
        stars -= 2;
        cout << endl;
    }
}

void pt_7(int n)
{
    int stars = 1;
    int spaces = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= spaces; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }

        stars += 2;
        spaces -= 1;
        cout << endl;
    }
}

void pt_6(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pt_5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pt_4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

void pt_3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pt_2(int n)
{
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pt_1(int n)
{
    for (int i = 1; i <= n; i++) // for rows
    {
        // for columns
        for (int j = 1; j <= n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void seperator()
{
    cout << "\n\n-------------------------------------------------------\n\n";
}