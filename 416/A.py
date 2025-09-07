n, l, r = map(int, input().split())
arr = str(input())

for i in range(n):
  if l-1 <= i and i <= r-1:
    if not arr[i] == 'o':
      print("No")
      break
else:
  print("Yes")
    