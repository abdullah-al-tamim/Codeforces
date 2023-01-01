from collections import deque
def bfs():
    dist , prev , queue = deque() , deque(), deque() 
    for i in range(v+1):
        dist.append(-1)
        prev.append(-1)
    dist[s] = 0
    queue.append(s)
    while(len(queue)):
        par = queue.popleft()
        for i in graph[par]:
            if dist[i] == -1:
                dist[i] = dist[par]+6
                prev[i] = par
                queue.append(i)
    for i in range(1, len(dist)):
        if i != s:
            print(dist[i], end = " ")
    print()

t = int(input())
for tc in range(t):
    v, e = map(int, input().split())
    graph = {}
    for i in range(v+1):
        graph[i] = graph.get(i, []) 
    for i in range(e):
        a, b = map(int, input().split())
        graph[a].append(b)
        graph[b].append(a)
    s = int(input())
    bfs()