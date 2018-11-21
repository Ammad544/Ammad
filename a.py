f=open("Ammad.txt","r")
process =0
v = 0
j = 1

for text in f:

        data = text.split()
        if process == 0:
            process = {data[0]:{"Arrival Time": data[1], "Burst Time":data[2]}}
        elif data[0] not in process:
            process[data[0]]= {"Arrival Time":data[1],"Burst Time":data[2]}
while len(process)>0:
    a = list(process.keys())[0]
    for i in process:
        if process.get(i).get("Arrival Time") < process.get(a).get("Arrival Time"):
            a = i
    x = int(process.get(a).get("Arrival Time"))
    b = int(process.get(a).get("Burst Time"))

    while v < x:
            print(".")
            v +=1
    for i in range(b):
         print("-")
         v += 1

    process.pop(a)
    print ("|"+ a)





























