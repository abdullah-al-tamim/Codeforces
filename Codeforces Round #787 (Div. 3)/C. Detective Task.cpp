#include <stdio.h>
#include <stdbool.h>

#define MAX 1000

int store[MAX], n;

int graph[MAX][MAX];

int d[MAX];

bool is_clique(int b)
{

    for (int i = 1; i < b; i++)
    {
        for (int j = i + 1; j < b; j++)
        {
            if (graph[store[i]][store[j]] == 0)
                return false;
        }
    }
    return true;
}

void print(int n)
{
    for (int i = 1; i < n; i++)
        printf("%d ", store[i]);
    printf(", ");
}

void findCliques(int i, int l, int s)
{
    for (int j = i + 1; j <= n - (s - l); j++)
    {
        if (d[j] >= s - 1)
        {
            store[l] = j;
            if (is_clique(l + 1))
            {
                if (l < s)
                    findCliques(j, l + 1, s);
                else
                    print(l + 1);
            }
        }
    }
}

int main()
{
    int size, k;
    printf("Enter the number of Vertex: ");
    scanf("%d", &n);
    printf("Enter the number of Edges: ");
    scanf("%d", &size);

    int edges[size][2];

    printf("Enter the Edges: ");

    for (int i = 0; i < size; i++)
        scanf("%d %d", &edges[i][0], &edges[i][1]);

    printf("Enter the clique size k: ");
    scanf("%d", &k);

    for (int i = 0; i < size; i++)
    {
        graph[edges[i][0]][edges[i][1]] = 1;
        graph[edges[i][1]][edges[i][0]] = 1;
        d[edges[i][0]]++;
        d[edges[i][1]]++;
    }

    // int k = 3;

    findCliques(0, 1, k);

    return 0;
}
 