#include <stdio.h>

int mx_strlen(const char *s);
int mx_strcmp(const char *s1, const char *s2);

int mx_selection_sort(char **arr, int size)
{
    int c, d, position;
    char *t;
    int count = 0;
    for (c = 0; c < (size - 1); c++)
    {
        position = c;
        for (d = c + 1; d < size; d++)
        {
            if (mx_strcmp(arr[position], arr[d]) > 0)
                position = d;
            if (mx_strlen(arr[position]) == mx_strlen(arr[d]))
            {
                if (mx_strlen(arr[position]) > mx_strlen(arr[d]))
                {
                    t = arr[c];
                    arr[c] = arr[position];
                    arr[position] = t;
                    count++;
                }
            }
        }
        if (position != c)
        {
            t = arr[c];
            arr[c] = arr[position];
            arr[position] = t;
            count++;
        }
    }
    return count;
}

int main()
{
    char *arr[] = {"Abcd", "a", "aBc", "abc", "Z", "z", "AbCd"};
    int size = 7;
    printf("%d\n", mx_selection_sort(arr, size));
    for (int i = 0; i < size; i++)
    {
        printf("%s\n", arr[i]);
    }
}


// (mx_strcmp(arr[position], arr[d]) > 0)
// (mx_strlen(arr[position]) > mx_strlen(arr[d])
