import lex,sys,os

def shell():
    while True:
        query=str(input(os.getcwd()+'>>'))
        lists=query.split(' ')
        if lists[0]!='£':
            lex.check(lists)
        else:
            parse(lists[1])
def parse(filename):
    try:
        file=open(filename,'r')
        contents=file.read()
        topass=contents.split(";")
        for line in topass:
            line=line.replace("\n","")
            tolex=line.split(" ")
            lex.check(tolex)
    except:
        pass
shell()