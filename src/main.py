import lex,sys,os
debug=True
while True:
    query=str(input(os.getcwd()+'>>'))
    lists=query.split(' ')
    lex.check(lists)