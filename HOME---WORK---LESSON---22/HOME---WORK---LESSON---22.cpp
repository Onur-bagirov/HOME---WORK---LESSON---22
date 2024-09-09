#include <iostream>

using namespace std;

// Funksiyalar

int bigSmallNumber(int* num_1, int* num_2)
{
    if (*num_1 > *num_2)
    {
        return *num_1;
    }
    else
    {
        return *num_2;
    }
}

int negPos(int* num_1)
{
    if (*num_1 > 0)
    {
        return true;
    }
    else if (*num_1 < 0)
    {
        return false;
    }
    else if (*num_1 == 0)
    {
        return true;
    }
}

void change(int* num_1, int* num_2)
{
    int temp = *num_1;
    *num_1 = *num_2;
    *num_2 = temp;
}

int additionNumber(int* num_1, int* num_2)
{
    return *num_1 + *num_2;
}

int minusNumber(int* num_1, int* num_2)
{
    return *num_1 - *num_2;
}

int hitNumber(int* num_1, int* num_2)
{
    return *num_1 * *num_2;
}

int divideNumber(int* num_1, int* num_2)
{
    return *num_1 / *num_2;
}

int calculator(int* num_1, int* num_2, char* choose)
{
    if (*choose == '+')
    {
        return additionNumber(num_1, num_2);
    }
    else if (*choose == '-')
    {
        return minusNumber(num_1, num_2);
    }
    else if (*choose == '*')
    {
        return hitNumber(num_1, num_2);
    }
    else if (*choose == '/')
    {
        return divideNumber(num_1, num_2);
    }
}


int arrayNumberAdd(int array[], int size)
{
    int num = 0;

    srand(time(NULL));

    for (int i = 0; i < size; i++)
    {
        array[i] = rand() % 101;
        num += array[i];
    }

    return num;
}

int* randomArray(int* array, int size) 
{
    for (int i = 0; i < size; i++) {
        *(array + i) = rand() % 100;
    }
    return array;
}

int* copyArray(int* num_1, int* num_2, int size) 
{
    srand(time(NULL));

    for (int i = 0; i < size; i++) 
    {
        *(num_2 + i) = *(num_1 + i);
    }
    return num_2;
}

void fillArrayWithRandom(int* array, int size)
{
    srand(time(NULL));

    for (int i = 0; i < size; i++)
    {
        array[i] = rand() % 101;
    }
}

void reverseArray(int* array, int size)
{
    int* start = array;
    int* end = array + size - 1;

    while (start < end)
    {
        int revers = *start;
        *start = *end;
        *end = revers;

        start++;
        end--;
    }
}

void MaxMinNumber(int arrayd[], int size, int* min_num, int* max_num) 
{
    *min_num = arrayd[0];
    *max_num = arrayd[0];

    for (int i = 0; i < size; i++)
    {
        if (arrayd[i] > *max_num) 
        {
            *max_num = arrayd[i];
        }
        if (arrayd[i] < *min_num) 
        {
            *min_num = arrayd[i];
        }
    }
}

int main()
{
    cout << "================================";
    cout << "\n\n";
    cout << "Tap - 1";
    cout << "\n\n\n\n";

    int NumOneOne;
    int NumOneTwo;

    cout << "Enter number one : ";
    cin >> NumOneOne;

    cout << "Enter number two : ";
    cin >> NumOneTwo;

    int AnswerOne = bigSmallNumber(&NumOneOne, &NumOneTwo);
    cout << "Big number : " << AnswerOne;

    cout << "\n\n\n";
    system("pause");
    cout << "\n\n\n";
    cout << "================================";
    cout << "\n\n";
    cout << "Tap - 2";
    cout << "\n\n\n\n";

    int NumTwo;

    cout << "Enter number : ";
    cin >> NumTwo;

    int AnswerTwo = negPos(&NumTwo);
    cout << "Answer : " << AnswerTwo;

    cout << "\n\n\n";
    system("pause");
    cout << "\n\n\n";
    cout << "================================";
    cout << "\n\n";
    cout << "Tap - 3";
    cout << "\n\n\n\n";

    int NumThreeOne;
    int NumThreeTwo;

    cout << "Enter number one : ";
    cin >> NumThreeOne;

    cout << "Enter number two : ";
    cin >> NumThreeTwo;

    change(&NumThreeOne, &NumThreeTwo);


    cout << "\n\n\n";

    cout << "Enter number one : " << NumThreeOne << endl;
    cout << "Enter number two : " << NumThreeTwo << endl;
    cout << "\n\n\n";
    system("pause");
    cout << "\n\n\n";
    cout << "================================";
    cout << "\n\n";
    cout << "Tap - 4";
    cout << "\n\n\n\n";

    int NumberFourOne;
    int NumberFourTwo;
    char operatorOne;

    cout << "Enter number one : ";
    cin >> NumberFourOne;

    cout << "Enter number two : ";
    cin >> NumberFourTwo;

    cout << "Enter operator : ";
    cin >> operatorOne;

    int AnswerFour = calculator(&NumberFourOne, &NumberFourTwo, &operatorOne);
    cout << "Answer : " << AnswerFour;

    cout << "\n\n\n";
    system("pause");
    cout << "\n\n\n";
    cout << "================================";
    cout << "\n\n";
    cout << "Tap - 5";
    cout << "\n\n\n\n";

    int ArrayFive[10] = {};

    int sum_ = arrayNumberAdd(ArrayFive, 10);

    cout << "Array : ";
    for (int i = 0; i < 10; i++) {
        cout << ArrayFive[i] << " ";
    }
    cout << endl;

    cout << "Total :  " << sum_ << endl;

    cout << "\n\n\n";
    system("pause");
    cout << "\n\n\n";
    cout << "================================";
    cout << "\n\n";
    cout << "Tap - 6";
    cout << "\n\n\n\n";

    const int size = 5;
    int arraySixOne[size] = {};
    int arraySixTwo[size];


    randomArray(arraySixOne, size);

    copyArray(arraySixOne, arraySixTwo, size);

    cout << "Orginal array : ";

    for (int i = 0; i < size; i++) 
    {
        cout << arraySixOne[i] << " ";
    }
    cout << endl;

    cout << "Copy array : ";

    for (int i = 0; i < size; i++) 
    {
        cout << arraySixTwo[i] << " ";
    }

    cout << "\n\n\n";
    system("pause");
    cout << "\n\n\n";
    cout << "================================";
    cout << "\n\n";
    cout << "Tap - 7 - 8";
    cout << "\n\n\n\n";

    const int sizeSeven = 10;
    int arraySeven[sizeSeven] = {};

    fillArrayWithRandom(arraySeven, size);

    cout << "Original array : ";
    for (int i = 0; i < size; i++)
    {
        cout << arraySeven[i] << " ";
    }

    cout << endl;

    reverseArray(arraySeven, size);

    cout << "Reversed array : ";
    for (int i = 0; i < size; i++)
    {
        cout << arraySeven[i] << " ";
    }

    cout << endl;

    cout << "\n\n\n";
    system("pause");
    cout << "\n\n\n";
    cout << "================================";
    cout << "\n\n";
    cout << "Tap - 9";
    cout << "\n\n\n\n";

    const int sized = 10;
    int arrayd[sized];

    cout << "Array : ";

    for (int i = 0; i < sized; i++) 
    {
        arrayd[i] = rand() % 101;
        cout << arrayd[i] << " ";
    }

    cout << endl;

    int min;
    int max;

    MaxMinNumber(arrayd, sized, &min, &max);

    cout << "Min num : " << min << endl;
    cout << "Max num : " << max << endl;

    cout << "\n\n\n";
    system("pause");
    cout << "\n\n\n";
    cout << "================================";

}
