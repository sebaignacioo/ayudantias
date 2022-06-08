q_bebidas = int(input())
p_bebidas = int(input())
q_pizzas = int(input())
p_pizzas = int(input())
q_palomitas = int(input())
p_palomitas = int(input())

invitados = int(input())

total_gasto = q_bebidas * p_bebidas + q_pizzas * p_pizzas + q_palomitas * p_palomitas
valor_cuota = round(total_gasto / invitados)
total_items = q_bebidas + q_pizzas + q_palomitas

print(f'Total gasto compra = {total_gasto}')
print(f'Valor cuota por invitado = {valor_cuota}')
print(f'Total items comprados = {total_items}')