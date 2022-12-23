import lex,sys,os

def shell():
    while True:
        query=str(input(os.getcwd()+'>>'))
        lists=query.split(' ')
        lex.check(lists)
def parse(filename):
    file=open(filename,'r')
    contents=file.read()
    topass=contents.split(";")
    for line in topass:
        line=line.replace("\n","")
        tolex=line.split(" ")
        lex.check(tolex)
parse(r"C:\Users\rober\OneDrive\Coding\Python\Rosemary\Rosemary\src\test.rsm")