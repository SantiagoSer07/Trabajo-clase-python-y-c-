# -*- coding: utf-8 -*-
"""Copia de Te damos la bienvenida a Colaboratory

Automatically generated by Colab.

Original file is located at
    https://colab.research.google.com/drive/1XcjX4v9XfMh8g4sA0k9Dt4itogriI8sr
"""

print("Dame 2 numeros enteros para poder sumarlos")
a=int(input ("Ingresa primer numero:"))
b=int(input ("Ingresa segundo numero:"))
print("Resultado:",a+b)

print("Dame 2 numeros decimales para poder restarlos")
c=float(input("Ingresa primer numero:"))
d=float(input("Ingresa segundo numero:"))
print("Resultado:",c-d)

print("Dame 2 numeros de 3 cifras para multipicarlo")
e=int(input("Ingresa el primer numero:"))
f=int(input("Ingresa el segundo numero:"))
print("Resultado:",e*f)

print("Dame 2 numeros de 4 cifras para poder dividirlo y mostrate el modulo")
g=int(input("Ingrese el primer numero:"))
h=int(input("Ingresa el segundo numero:"))
print("Resultado:",g%h)

precio = float(input("Ingresa el precio del artículo: "))
descuento = 15

precio_final = precio - (precio * descuento / 100)

print("El precio final después de aplicar el descuento del 15% es: ", precio_final)

variable = float(input("Ingresa el valor inicial de la variable: "))

variable += 5

variable -= 3

variable *= 2

variable /= 4

print("El resultado final es:", variable)