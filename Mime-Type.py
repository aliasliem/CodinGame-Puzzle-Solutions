import sys
import math

# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.

n = int(input())  # Number of elements which make up the association table.
q = int(input())  # Number Q of file names to be analyzed.
dict = {}
for i in range(n):
    # ext: file extension
    # mt: MIME type.
    ext, mt = input().split()
    dict[ext.lower()] = mt
#print(dict,"\n")
for i in range(q):
    fname = input().split(".")  # One file name per line.
    ext = fname[-1].lower()
#    print(fname, len(fname) )
    if len(fname)< 2 or ext == "" or dict.get(ext) == None:
        print("UNKNOWN")
    else:
        print(dict[ext])
