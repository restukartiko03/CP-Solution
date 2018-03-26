import sys

weight = input()
print weight

print ("NO" if (weight % 2 or weight < 4) else "YES")
