while True:
    try:
        n, s = map(int, input().split())
        arr = list(map(int, input().split()))

        l = 0
        acc_sum = 0
        res = 0

        for r in range(n):
            acc_sum += arr[r]
            while acc_sum > s:
                acc_sum -= arr[l]
                l += 1
            res += (r - l + 1)

        print(res)

    except EOFError:
        break
