from tkinter import *
from tkinter import ttk
import tkinter as tk
from tkinter.filedialog import askopenfile

app = Tk()
app.title("Student Registration Form")
app.geometry("600x400")
#label widgets
lbl1 = Label(app, text = "ID: ")
lbl2 = Label(app, text = "Name: ")
lbl3 = Label(app, text = "Gender: ")
lbl4 = Label(app, text = "CGPA: ")
lbl1.grid(row = 0, column = 0, sticky = W, pady = 2)
lbl2.grid(row = 1, column = 0, sticky = W, pady = 2)
lbl3.grid(row = 2, column = 0, sticky = W, pady = 2)
lbl4.grid(row = 3, column = 0, sticky = W, pady = 2)

# entry widgets, used to take entry from user
e1 = Entry(app)
e2 = Entry(app)
e3 = Entry(app)
e4 = Entry(app) 
# this will arrange entry widgets
e1.grid(row = 0, column = 1, pady = 2)
e2.grid(row = 1, column = 1, pady = 2)
e3.grid(row = 2, column = 1, pady = 2)
e4.grid(row = 3, column = 1, pady = 2)

btn1 = Button(app, text="Save")
btn2 = Button(app, text="Update")
btn3 = Button(app, text="View")
btn4 = Button(app, text="Close", command = app.destroy)
btn1.grid(row=4, column=0, sticky = W)
btn2.grid(row=4, column=1, sticky = W)
btn3.grid(row=5, column=0, sticky = W)
btn4.grid(row=5, column=1, sticky = W)

#v = StringVar("1")
radioBtn1 = Radiobutton(app, text = "Male")
radioBtn1.grid(row=6, column = 0, sticky=W)

#v = StringVar("2")
radioBtn2 = Radiobutton(app, text = "Female")
radioBtn2.grid(row=6, column = 1, sticky=W)

checkbutton1 = IntVar()  
checkbutton2 = IntVar()  
checkbutton3 = IntVar()
  
checkButton1 = Checkbutton(app, text = "Tutorial",variable = checkbutton1, onvalue = 1,offvalue = 0,height = 2,width = 10)
  
checkButton2 = Checkbutton(app, text = "Student",variable = checkbutton2,onvalue = 1, offvalue = 0,height = 2, width = 10)
  
checkButton3 = Checkbutton(app, text = "Courses",variable = checkbutton3,onvalue = 1,offvalue = 0, height = 2, width = 10)

checkButton1.grid(row=7, column=0, sticky=W)
checkButton2.grid(row=7, column=1, sticky=W)
checkButton3.grid(row=7, column=2, sticky=W)

lblMonth = Label(app, text="Month: ")
lblMonth.grid(row=8, column=0)

# Combobox creation
n = tk.StringVar()
monthchoosen = ttk.Combobox(app, width = 27, textvariable = n)
  
# Adding combobox drop down list
monthchoosen['values'] = ('Choose Month...', ' January', ' February',' March',' April',' May',' June',' July',' August',' September',' October', ' November',' December')
  
monthchoosen.grid(column = 1, row = 8)
monthchoosen.current(0)

msg = Message( app, text = "A computer science portal for geeks")  
    
msg.grid() 


top = Toplevel()
top.geometry("180x100")
top.title("toplevel")
l2 = Label(top, text = "This is toplevel window")
 
l2.pack()


def open_file():
    file = askopenfile(mode ='r', filetypes =[('Python Files', '*.py')])
    if file is not None:
        content = file.read()
        print(content)
  
btn = Button(top, text ='Open', command = lambda:open_file())
btn.pack(side = TOP, pady = 10)


app.mainloop()
