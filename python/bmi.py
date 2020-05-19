#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  bez nazwy.py
#  

wzrost = int(input("Poda swój wzrost(cm): "))
if (wzrost < 50 or wzrost > 250):
    wzrost = int(input("Podany wzrost jest nieprawidłowy, podaj go ponownie"))

waga = int(input("Podaj swoją wagę(kg): "))
if (waga < 15 or waga > 250):
    waga = int(input("Podana waga jest nieprawidłowy, podaj ją ponownie: "))
	

bmi = (waga/(wzrost*wzrost))*10000 

print("Twoje BMI wynosi: ", bmi)

if (bmi < 18.5):
   print("Masz niedowage")

elif ( bmi >= 18.5 and bmi < 25):
   print("Twoje BMI jest idealne!")

elif ( bmi >= 25 and bmi < 30):
   print("Masz nadwage!")

elif ( bmi >=30):
   print("Masz otyłość!")