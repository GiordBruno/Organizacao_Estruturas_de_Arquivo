# -*- coding: utf-8 -*-
'''
Created on 15 de jun de 2018
@author: Bruno Ferreira:.
'''
fileName = "bolsa.csv"
import time

lineCount = 0
qtdLinhas = 3

f = open(fileName,"r")
while lineCount < qtdLinhas:
    line = f.readline()
    print line
    print line.split("\t")
    lineCount += 1
f.close()

print lineCount
print time.strftime('%X')
