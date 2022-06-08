from math import pow

lado = float(input())

area = 6 * pow(lado, 2)
# area = 6 * (lado * lado)

volumen = pow(lado, 3)
# volumen = lado * lado * lado

print(f'area del cubo = {area}')
print(f'volumen del cubo = {volumen}')