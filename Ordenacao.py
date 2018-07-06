#coding: utf-8

import struct

qtdLinhas = input("\n\nDigite a quantidade de registros por bloco\n\n")
cepColumn = 5
registroCEP = struct.Struct("72s72s72s72s2s8s2s")

f = open("cep.dat", "r")
f2 = open("cep2.dat", "w")

lista = list()
cont = 0

def compara(a, b):
    if a[cepColumn] == b[cepColumn]: return 0
    if a[cepColumn] > b[cepColumn]: return 1
    return -1

line = f.read(registroCEP.size)

while line != "":

    while line != "" and cont < qtdLinhas:
        cont = cont+1
        var = registroCEP.unpack(line)
        lista.append(var)
        line = f.read(registroCEP.size)

    lista.sort(compara)

    for l in lista:
        f2.write(registroCEP.pack(*l))

    lista = []
    cont = 0

f.close()
f2.close()

print "FIM"
