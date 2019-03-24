a = 100
b = 1000.0
c = "John"
d,e,f = 100, 1000.0, "John"
del d,e,f

g = 'abcdef'
print(g[1:5])
print(g[2:])
print(g*2)
print(g[1:4:2])

h = ['a','b','c','d','e']
print(h[:3])

i = ('John', 742, 43.01, 243j)
print(i[:3])

j = {'name': 'John', 'no': 742, 'score': 43.01}
print(j['name'])
print(j.keys())
print(j.values())

if a == 100:
    print("true")
elif b == 100:
    pass
else:
    print(b)

while a <= 105:
    print(a)
    a += 1

for k in 'Python':
    print(k)

def function(str, *vartuple):
    print(str,) #不换行
    #print(age)
    for l in vartuple:
        print(l)
    return

def function2(*vartuple, **dic):
    print(vartuple)
    print(dic)

function("string", 30,60,70)
function2(35,67, car=23, bus=12)

m = lambda n,o : n+o
print(m(2,4))