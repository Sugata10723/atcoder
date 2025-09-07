t = int(input())

for _ in range(t):
    n, m = map(int, input().split())
    arr = list(map(int, input().split()))
    brr = list(map(int, input().split()))

    modms = {int}
    for i in range(n):
        if (arr[i] % m) in modms:
            modms[arr[i] % m] = modms[arr[i] % m] + 1
        else:
            modms[arr[i] % m] = 1

        if (brr[i] % m) == 0:
            pass
        elif m - (brr[i] % m) in modms:
            modms[m - (brr[i] % m)] = modms[m - (brr[i] % m)] - 1
        else:
            modms[m - (brr[i] % m)] = -1

    cnt = 0
    for key in modms.keys():
        value = modms[key]
        if value < 0:
            cnt += (m - key) * -value
        else:
            cnt += (key) * value
    print(cnt)
