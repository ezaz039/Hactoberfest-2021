from tkinter import *

root = Tk()

# creating  a container
root.geometry("332x354") #main frame
root.minsize(212,224) #minimal width height
root.maxsize(912,924) #max width height
sami= Label(root,bg="grey",  text = "Calculator by samiksha")
sami.pack()


# defining widget functions
# for inputing values the frame get updates automatically whenever the input value is entered
def butt_click(item):
    global expression
    expression = expression + str(item)
    input_text.set(expression)

def butt_clear() :#clears the frame
    global expression
    expression =""
    input_text.set("")

def butt_equal() :#it calculates the expression entered in input field
    global expression
    result =str(eval(expression))
    input_text.set(result)
    expression=""

expression= ""
input_text= StringVar() #StringVar is used to get instance of the input field

#creating a frame
input_frame = Frame(root, width =350, height= 50, bd= 5 ,highlightbackground= "black", highlightcolor ="white" ,bg ="lightgray")
input_frame.pack(side = TOP)

#creating a input field inside a frame
input_field = Entry(input_frame, font =('arial',19,'bold'), textvariable= input_text,bd=0, bg = "#eee", width= 50, justify= RIGHT, )
input_field.grid(row= 0, column= 0)
input_field.pack(ipady= 10)
#ipadytext is a internal padding whch increase height of input field

#frame to include buttons in a linier manner
btns_frames= Frame(root,width= 312,height= 272.5,bg= "grey")
btns_frames.pack()

#buttons
clear =Button(btns_frames,text ="clear",bg="#eee", width= 35, fg="black", height=3, bd=0,cursor="hand2", command= lambda:butt_clear()).grid(row=0, column=0, columnspan= 3, padx= 1,pady= 1)
divide= Button(btns_frames,text=" /  ",height=3, width= 12, fg= "black", bg="#eee", cursor= "hand2", command=lambda:butt_click("/") ,bd= 0).grid(row=0, column=3,columnspan= 1, padx= 1,pady= 1)

seven= Button(btns_frames,text= "7",bg="#fff",fg="black",bd=0,height=3, width=11, cursor="hand2",command=lambda:butt_click(7)).grid(row= 1,column= 0,padx= 1, pady =1)
eight= Button(btns_frames,text= "8",bg="#fff",fg="black",bd=0,height=3, width=11, cursor="hand2",command=lambda:butt_click(8)).grid(row= 1,column= 1,padx= 1, pady =1)
nine= Button(btns_frames,text= "9",bg="#fff",fg="black",bd=0,height=3, width=11, cursor="hand2",command=lambda:butt_click(9)).grid(row= 1,column= 2,padx= 1, pady =1)
mult= Button(btns_frames,text= " *  ",bg="#fff",fg="black",bd=0,height=3, width=12, cursor="hand2",command=lambda:butt_click("*")).grid(row= 1,column= 3,padx= 1, pady =1)

four= Button(btns_frames,text= "4",bg="#fff",fg="black",bd=0,height=3, width=11, cursor="hand2",command=lambda:butt_click(4)).grid(row= 2,column= 0,padx= 1, pady =1)
five= Button(btns_frames,text= "5",bg="#fff",fg="black",bd=0,height=3, width=11, cursor="hand2",command=lambda:butt_click(5)).grid(row= 2,column= 1,padx= 1, pady =1)
six= Button(btns_frames,text= "6",bg="#fff",fg="black",bd=0,height=3, width=11, cursor="hand2",command=lambda:butt_click(6)).grid(row= 2,column= 2,padx= 1, pady =1)
minus= Button(btns_frames,text= " -  ",bg="#fff",fg="black",bd=0,height=3, width=12, cursor="hand2",command=lambda:butt_click("-")).grid(row= 2,column= 3,padx= 1, pady =1)

three= Button(btns_frames,text= "3",bg="#fff",fg="black",bd=0,height=3, width=11, cursor="hand2",command=lambda:butt_click(3)).grid(row= 3,column= 0,padx= 1, pady =1)
two= Button(btns_frames,text= "2",bg="#fff",fg="black",bd=0,height=3, width=11, cursor="hand2",command=lambda:butt_click(2)).grid(row= 3,column= 1,padx= 1, pady =1)
one= Button(btns_frames,text= "1",bg="#fff",fg="black",bd=0,height=3, width=11, cursor="hand2",command=lambda:butt_click(1)).grid(row= 3,column= 2,padx= 1, pady =1)
plus= Button(btns_frames,text= " +  ",bg="#fff",fg="black",bd=0,height=3, width=12, cursor="hand2",command=lambda:butt_click("+")).grid(row= 3,column= 3,padx= 1, pady =1)

zero= Button(btns_frames,text= "0",bg="#fff",fg="black",bd=0,height=3, width=22, cursor="hand2",command=lambda:butt_click(0)).grid(row= 4,column= 0,columnspan= 2,padx= 1, pady =1)
dot= Button(btns_frames,text= ".",bg="#fff",fg="black",bd=0,height=3, width=11, cursor="hand2",command=lambda:butt_click(".")).grid(row= 4,column= 2,padx= 1, pady =1)
eqal= Button(btns_frames,text= "=",bg="#fff",fg="black",bd=0,height=3, width=12, cursor="hand2",command=lambda:butt_equal()).grid(row= 4,column= 3,padx= 1, pady =1)

root.mainloop()
