myfile=open(r'C:\Users\pc\Desktop\Python programs\Poem.txt','r')
s=myfile.readlines()
linecounts=len(s)
print("No.of lines in the Poem ",linecounts)
myfile.close()
