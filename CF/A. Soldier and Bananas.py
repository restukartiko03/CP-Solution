k, n, w = map(int,input().split(' '))
ans = (((w*(w+1)//2)*k)-n )
if ans > 0:
    print(ans)
else:
    print('0')
