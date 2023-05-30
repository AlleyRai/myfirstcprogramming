english=int(input("Enter the marks of english :"))
science=int(input("Enter the marks of science :"))
math=int(input("Enter the marks of math :"))
if(0<math<100 and 0<science<100 and 0<english<100):
    if(math>=40 and science>=40 and english>=40):
        total=int(english+science+math)
        per=int(total/3)
        if(per>=80 and per<100):
            print("You have secured A grade i.e",per)
        elif(per>=60 and per<80):
            print("You have secured B grade i.e",per)
        elif(per>=40 and per<60):
            print("You have secured C grade i.e",per)
    else:
        print("You have failed your exam.")    
else:
    print("invalid input.")    