#include <iostream>
#include <conio.h>
using namespace std;
void rightHalfTriangle(int n);
void leftHalfTriangle(int n);
void fullPyramid(int n);
void reversePyramid(int n);
void kite(int n);
void rotatedTriangle(int n);
void numberCrown(int n);
void binaryTriangle(int n);
void symmetryCrown(int n);
void symmetryCrownVoid(int n);

int main()
{
    int n = 0;
    cout << "==============================================";
    cout << "\n\t\t BEYONDTARUN";
    cout << "\n==============================================";

    cout << "\n\n\tEnter the value on Lines: ";
    cin >> n;
    cout << "\n\tChoice(s)\n\n\t\t1. Right Half Triangle.\n\t\t2. Left Half Triangle.\n\t\t3. Full Pyramid.\n\t\t4. Reverse Pyramid.\n\t\t5. Kite.\n\t\t6. Rotated Triangle.\n\t\t7. Binary Triangle.\n\t\t8. Number Crown.\n\t\t9. Symmetric Crown.\n\t\t10. Symmetric Crown Void.";
    int choice;
    cout << "\n\n\tEnter choice: ";
    cin >> choice;
    cout << "\n+++++++++++++++++++++++++++++++++++++++++++++\n\n";

    switch (choice)
    {
    case 1:
        rightHalfTriangle(n);
        break;
    case 2:
        leftHalfTriangle(n);
        break;
    case 3:
        fullPyramid(n);
        break;
    case 4:
        reversePyramid(n);
        break;
    case 5:
        kite(n);
        break;
    case 6:
        rotatedTriangle(n);
        break;
    case 7:
        binaryTriangle(n);
        break;
    case 8:
        numberCrown(n);
        break;
    case 9:
        symmetryCrown(n);
        break;
    case 10:
        symmetryCrownVoid(n);
        break;

    default:
        cout << "\n\tWrong Choice";
        break;
    }
    cout << "+++++++++++++++++++++++++++++++++++++++++++++\n\n";
    return 0;
}
void rightHalfTriangle(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
void leftHalfTriangle(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int k = n - 1 - i; k > 0; k--)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

void fullPyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int k = n - 1 - i; k > 0; k--)
            cout << " ";
        for (int j = 0; j < (i * 2) + 1; j++)
            cout << "*";
        cout << "\n";
    }
}

void reversePyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < i; k++)
        {
            cout << " ";
        }
        for (int j = i * 2; j < (n * 2) - 1; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

void kite(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int k = n - 1 - i; k > 0; k--)
            cout << " ";
        for (int j = 0; j < (i * 2) + 1; j++)
            cout << "*";
        cout << "\n";
    }
    for (int i = 1; i < n; i++)
    {
        for (int k = 0; k < i; k++)
        {
            cout << " ";
        }
        for (int j = i * 2; j < (n * 2) - 1; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
void rotatedTriangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
void numberCrown(int n)
{
    if (n > 9)
    {
        cout << "Enter a number less than 10\n\n";
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= i; j++)
                cout << j + 1 << " ";
            for (int k = i * 2; k < (n * 2) - 2; k++)
                cout << "  ";
            for (int z = i; z >= 0; z--)
                cout << z + 1 << " ";
            cout << "\n";
        }
    }
}
void binaryTriangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << "1 ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << "\n";
    }
}

void symmetryCrown(int n)
{
    if (n > 9)
    {
        cout << "Enter a number less than 10\n\n";
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= i; j++)
                cout << "* ";
            for (int k = i * 2; k < (n * 2) - 2; k++)
                cout << "  ";
            for (int z = i; z >= 0; z--)
                cout << "* ";
            cout << "\n";
        }
        for (int i = n - 2; i >= 0; i--)
        {
            for (int j = 0; j <= i; j++)
                cout << "* ";
            for (int k = i * 2; k < (n * 2) - 2; k++)
                cout << "  ";
            for (int z = i; z >= 0; z--)
                cout << "* ";
            cout << "\n";
        }
    }
}
void symmetryCrownVoid(int n)
{
    if (n > 9)
    {
        cout << "Enter a number less than 10\n\n";
    }
    else
    {
        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = 0; j <= i; j++)
                cout << "* ";
            for (int k = i * 2; k < (n * 2) - 2; k++)
                cout << "  ";
            for (int z = i; z >= 0; z--)
                cout << "* ";
            cout << "\n";
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= i; j++)
                cout << "* ";
            for (int k = i * 2; k < (n * 2) - 2; k++)
                cout << "  ";
            for (int z = i; z >= 0; z--)
                cout << "* ";
            cout << "\n";
        }
    }
}