n = input()
arr = sorted(map( int , input().split()), reverse = True)
jum = sum(arr)
jum1 = idx = 0
while jum1 <= jum/2:
    jum1 += arr[idx]
    idx += 1
print(idx)
