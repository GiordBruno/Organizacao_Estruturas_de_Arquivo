
# -*- coding: utf-8 -*-
'''
Created on 30 de jun de 2018
@author: Bruno
'''

fileName = "bolsa.csv"
lineCount = 0
qtdLinhas = 100
f = open(fileName,"r")
fout = open("recorteBolsa.txt", "w")
line = f.readline()
while lineCount < qtdLinhas:
    line = f.readline()
    fout.write(line)
    lineCount += 1
f.close()

print lineCount
