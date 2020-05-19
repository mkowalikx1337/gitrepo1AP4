def homer_it(stopien,wsp,argument):
	for i in range(stopien+1):
		if i == 0:
			wynik = wsp[i]
		else:
			wynik = argument * wynik + wsp[i]
	print("Wynik:",wynik)

def main(args):
	stopien = int(input("Podaj stopień wielomianu:"))
	argument = int(input("Podaj argument:"))
	wsp = []
	for i in range(stopien+1):
		a = int(input("Podaj współczynnik:"))
		wsp.append(a)
	homer_it(stopien,wsp,argument)
	
	
	return 0
	
if __name__ == '__main__':
	import sys
	sys.exit(main(sys.argv))
