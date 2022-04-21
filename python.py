#%%
import numpy as np
def f(x):
    return x*(abs(1-2*x)**(2/3))
x_1 = np.linspace(start=-3, stop=4, num=100)

y_1 = f(x_1)
graph.plot(x_1, y_1) #vẽ từng điểm 
graph.xlim(-3,4) #giới hạn trục x
graph.ylim(-10, 10) #giới hạn trục y
graph.xlabel('x', fontsize=16) #tên trục x
graph.ylabel('y', fontsize=16)   #tên trục y
graph.grid() #hiện ô lưới
graph.show()