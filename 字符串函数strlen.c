#include <stdio.h>
#include <string.h>

size_t mylen(const char *s)
{
    int idx = 0;
    while (s[idx] != '\0')
    {
        idx++;
    }
    return idx;
}
int main()
{
    char line[] = "Hello";
    printf("strlen = %lu\n", mylen(line));
    printf("strlen = %lu\n", strlen(line));
    printf("sizeof %lu", sizeof(line));
    return 0;
}