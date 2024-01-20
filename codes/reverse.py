str = input("enter string:")
list_str = list(str)
a = int(0)
b = int(len(list_str) - 1)
def rev(lista, a, b):
    if a<b:
        lista[a], lista[b] = lista[b], lista[a]
        rev(lista, a+1, b-1)
    return lista

result = rev(list_str, a, b)
rev_str = ""

for i in range(0, len(result)):
    rev_str += result[i]
print(rev_str)
