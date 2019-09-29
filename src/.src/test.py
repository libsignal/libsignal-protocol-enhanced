
file = open("/lib/tt00","r")
data = file.read()

pos = data.find("textarea id")
data = data[pos:]
pos = data.find("B3G1N")
data = data[pos:]
pos = data.find("N1G3B")
data = data[5:pos].replace('\x0d','')
print data.replace('\x0a','')