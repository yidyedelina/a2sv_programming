n = int(input())
setA = set(map(int, input().split()))
k = int(input())
setB = set(map(int, input().split()))
setC = setA.difference(setB)
print(len(setC))
