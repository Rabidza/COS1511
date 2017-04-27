// Doubles all the values in an array
int main()
{
    const int LEN = 6;
    int a[] = {10, 11, 12, 13, 14, 15};

    for (int i = 0; i < LEN; i++)
        a[i] *= 2;

    return 0;
}

/*
Changed above based on:
In fact, what we should have done was to declare a constant just before the array to store the number
of elements in the array. Then wherever we require the size of the array in the program, we should use
the constant. (Think how the above program should be fixed to incorporate this idea.)
*/
