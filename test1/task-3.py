def funk(x):
    if -1<x and x<=0:
        return -0.5*x + 0.5
    if 0<x and x<=1:
        return -0.5*x + 0.5
    else:
        return 1

x = float(input('Введите x '))
res = funk(x)
print(f'F = {res}')