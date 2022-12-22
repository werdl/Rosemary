import sys
def lstpr(lst):
    step1=str(lst)
    step2=step1.replace('[','')
    step2=step2.replace(']','')
    step2=step2.replace('\'','')
    toprint=step2.replace(',',' ')
    print(toprint)

def check(args):
    if isinstance(args, list):
        pass
    else:
        sys.exit()
    argsd=list(args)
    if args[0]=="print":
        print(args[1])