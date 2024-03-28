test_cases = int(input())

for _ in range(test_cases):
  n = int(input())
  a = list(map(int, input().split()))

  even = sorted(a)
  odd = sorted(a, reverse=True)

  for i in range(n // 2):
    if i % 2 == 0:
      a[i*2] = even[i]
      a[i*2+1] = even[n-i-1]
    else:
      a[i*2] = odd[i]  
      a[i*2+1] = odd[n-i-1]

  print(a[0])
