M = int(input())

N = 20

max_value = 10

A = [0] * N

for i in range(N):
    A[i] = M % 3
    M //= 3

while N > 1 and A[N-1] == 0:
    N -= 1

print(N)
print(" ".join(map(str, A[:N])))
