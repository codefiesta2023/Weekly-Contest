def main():
    str_input = input()
    n = len(str_input)
    l = [0] * n

    l[0] = 1 if str_input[0] == 'L' else 0

    for i in range(1, n):
        if str_input[i] == 'L':
            l[i] = l[i - 1] + 1
        else:
            l[i] = l[i - 1]

    ans = 0
    for i in range(n - 2):
        for j in range(i + 2, n):
            if str_input[i] == 'M' and str_input[j] == 'M':
                ans += (l[j] - l[i])

    print(ans)

if __name__ == "__main__":
    main()

