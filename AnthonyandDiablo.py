import math

A, N = [float(x) for x in input().split()]
if A <= math.pow(N, 2)/(4*math.pi):
    print('Diablo is happy!')
else:
    print('Need more materials!')