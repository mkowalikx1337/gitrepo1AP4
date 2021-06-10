
def wersja1(n):
    for i in range(1, n+1, 2):
        print(i)
        
        
def wersja2(n):
    i = 1
    while(i<=n):
        if(i%2!=0):
            print(i)
        i+=1

n = int(input("Podaj liczbę: "))
wersja1(n)
print(" ")
print(" ")
print(" ")
wersja2(n)
