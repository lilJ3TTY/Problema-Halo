print("Seleccione el numero del tipo de mapa en el cual desea jugar:")
print("1. Tierra")
print("2. Luna")
print("3. Halo")
m = float(input())
print("Ingresa los segundos de caida:")
t = float(input())
print("Escoge si quieres jugar con evento especial (1) o sin evento especial (0)")
print("0. Sin evento especial")
print("1. Con evento especial")
e= float(input())
#formula de distancia es d = 0.5* gravedad * tiempo²
if m == 1 and e == 0:
    d = (0.5*9.8*t*t)
    print("La distancia maxima recorrida es: ",d," metros.")
elif m == 1 and e == 1:
    d = (0.5*5*t*t)
    print("La distancia maxima recorrida es: ",d," metros.")
elif m == 2 and e == 0:
    d = (0.5*1.6*t*t)
    print("La distancia maxima recorrida es: ",d," metros.")
elif m == 2 and e == 1:
    d = (0.5*3*t*t)
    print("La distancia maxima recorrida es: ",d," metros.")
elif m == 3 and e == 0:
    d = (0.5*7*t*t)
    print("La distancia maxima recorrida es: ",d," metros.")
elif m == 3 and e == 1 and t > 10:
    d = 300
    print("La distancia maxima recorrida es: ",d," metros.")
elif m == 3 and e == 1 and t <= 10:
   d = (0.5*7*t*t)
   print("La distancia maxima recorrida es: ",d," metros.")
