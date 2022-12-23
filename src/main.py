import lex,sys,os

def shell():
    while True:
        query=str(input(os.getcwd()+'>>'))
        lists=query
        blob=query.split(' ')
        if blob[0]!='£':
            lex.check(lists)
        else:
            parse(blob[1])
def parse(filename):
    try:
        file=open(filename,'r')
        contents=file.read()
        topass=contents.split(";")
        for x in range(len(topass)):
            line=topass[x]
            line=line.replace("\n",'')
            lex.check(line)
        i+=1
    except:
        pass
shell()