''' Rao2 Algorithm code for Sphere function ''' 
import random #import random module
import math #import math module requiured for floor function
import numpy as np #import numpy to use its NDArrays

run,Runs = 0,10 #set number of Runs required
best_val = np.zeros(Runs) #to store best score of each run
while run<Runs:
    maxfes = 10000 #max function evaluations
    dim = 30 #number of dimensions/design variables
    pop_size = 10 #population size or sample size
    max_iter = math.floor(maxfes/pop_size) #maximum number of iterations
    ub = 100*np.ones(dim) #upper bound

def fitness(particle): #definition of function required 
    y=0
    for i in range(dim):
        y = y + particle[i]**2 #sphere function
    return y

Positions = np.zeros((pop_size,dim)) #define variable with required size
best_pos = np.zeros(dim) #define population's best position with required size
worst_pos = np.zeros(dim) #population's worst position with required size
finval = np.zeros(max_iter) #store best value for each iteration
f1 = np.zeros(pop_size) #function value of current population
f2 = np.zeros(pop_size) #function value of updated population

#assign random values to the population within the bounds
for i in range(dim):
    Positions[:,i] = np.random.uniform(0,1,pop_size)*(ub[i]-lb[i])+lb[i]

for k in range(0,max_iter):
    best_score = float("inf")
    worst_score = float("-inf")
    for i in range(0,pop_size):
        #Return back the population that go beyond the bounds to the bounds
        for j in range(dim):
            Positions[i,j] = np.clip(Positions[i,j],lb[j],ub[j])
        f1[i] = fitness(Positions[i,:]) #applying sphere function on population
        #update best and worst score and positions
        if f1[i] < best_score: #change the sign when using for maximization
            best_score = f1[i].copy();
            best_pos = Positions[i,:].copy()
        if f1[i] > worst_score: #change the sign when using for maximization
            worst_score = f1[i].copy();
            worst_pos = Positions[i,:].copy()
            #adding best_st score to the finval variable
            
    finval[k] = best_score
    #print the best value for every 500th iteration 48  

    if ((k+1)%500==0):
        print("For run",run+1,"the best solution is:",best_score,"in iteration number: ",k+1)

    Positioncopy = Positions.copy() #copying the values to compare later

    for i in range(0,pop_size):
        r = np.random.randint(pop_size,size=1) #generate random integer for comparison
        #check for ensuring the populatoin is not compared with itself
        while(r==i):
            r = np.random.randint(pop_size,size=1)
            #Use Rao Algorithm to find new values
        
        if f1[i]<f1[r]:
            for j in range(0,dim):
                r1 = random.random() #random value between 0 to 1
                r2 = random.random() #random value between 0 to 1
                Positions[i,j] = Positioncopy[i,j] + r1*(best_pos[j]-worst_pos[j]) + r2*(np.abs(Positioncopy[i,j])-np.abs(Positioncopy[r,j]))
                
                Positions[i,j] = np.clip(Positions[i,j],lb[j],ub[j])
        else:
            for j in range(0,dim):
                r1 = random.random() #random value between 0 to 1
                r2 = random.random() #random value between 0 to 1
                
                Positions[i,j] = Positioncopy[i,j] + r1*(best_pos[j]-worst_pos[j]) + r2*(np.abs(Positioncopy[r,j])-np.abs(Positioncopy[i,j]))
                
                Positions[i,j] = np.clip(Positions[i,j],lb[j],ub[j])
                
                f2[i] = fitness(Positions[i,:])
            
#compare new values with old ones and use better ones            
for i in range(0,pop_size):
    if (f1[i] < f2[i]): #change the sign when using for maximization
        Positions[i,:] = Positioncopy[i,:]
        best_score = np.amin(finval) #find the minimum of all the best_score
        print("The best solution for run",run+1,"is:",best_score)
        best_val[run] = best_score #store best score for run
        run+=1 #increment run
            
print("The Best solution is:",np.min(best_val))
print("The Worst solution is:",np.max(best_val))
print("The Mean is:",np.mean(best_val))
print("The Standard Deviation is:",np.std(best_val))
