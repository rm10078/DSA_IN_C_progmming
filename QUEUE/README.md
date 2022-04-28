
# 📒📒Algo for linear queue📒📒

A linear queue is a linear data structure that serves the request first, which has been arrived first. It consists of data elements which are connected in a linear fashion. It has two pointers, i.e., front and rear, where the insertion takes place from the front end, and deletion occurs from the front end.

MAX is array length.Queue is a arrya.Rear is a rear pointer.Front is a front pointer.
## Queue 

![App Screenshot](https://github.com/rm10078/DSA_IN_C_progmming/blob/main/QUEUE/images/slide_5.jpg?raw=true)


## Insert Algorithm INSERT()

1.if(rear==max) \
    print("Queue is full.")\
2.else\
    rear=rear+1\
    queue[rear]=item\
    print("Item inserted")\
    if(front=-1)\
      front=front+1\
3.end if\
4.stop\

## Delete Algorithm DELETE()

Queue is a array of max element. \
This algorithm for delete data from queue. 

1.if(front=-1 or front>rear)\
    print("The queue is empty")\
  else\
    rear=rear-1\
    print("rear item removed.")\
3.end if\
4.stop\

## Traverse Algorithm TRAVERSE()

Queue is a array of max element. This algorithm we diplay all item.

1.if(front==-1 or rear<front)\
    print("The queue is element.")\
  else\
    repeat i=front to rear\
        print Queue[rear]\
2.end if\
3.stop\
