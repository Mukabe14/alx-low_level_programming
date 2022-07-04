1  #include <stdlib.h>
2  #include <time.h>
3  #include <stdio.h>
4
5  /**
6   * main - Entry point
7   *
8   * Return: 0 (Success)
9   */
10 int main(void)
11 {
12         int n;
13 
14         srand(time(0));
15         n = rand() - RAND_MAX / 2;
16         printf("%d is %s\n", n, n == 0 ? "zero" : n < 0 ? "negative" : "positive"); 
17         return (0);
18 }
