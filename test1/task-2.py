def find_x(n):
    l = n // 100
    m = n % 100
    return (m % 10) * 100 + (m // 10) * 10 + l

n = int(input("Введите трехзначное число n: "))
x = find_x(n)
print(f"Исходное число x: {x}")