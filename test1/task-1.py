from math import *

def funk(e, f, g, h):
    return [ sqrt(abs(e - 3/f)**3 + g), sin(e) + (cos(h)**3), 33*g/(e*f-3) ]

e = float(input('Введите e '))
f = float(input('Введите f '))
g = float(input('Введите g '))
h = float(input('Введите h '))

res = funk(e, f, g, h)

print(f'a = {res[0]}')
print(f'b = {res[1]}')
print(f'c = {res[2]}')