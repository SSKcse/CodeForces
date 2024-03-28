def solve(n, m, b):
    d = []
    j = 0
    for i in range(1, n + 1):
        if j < m and i == b[j]:
            j += 1
        else:
            d.append(i)
    return d

def main():
    t = int(input())  
    for _ in range(t):
        n, m = map(int, input().split())  
        b = list(map(int, input().split()))  
        result = solve(n, m, b)  
        print(" ".join(str(x) for x in result))  # Adjusted print statement

if __name__ == "__main__":
    main()
