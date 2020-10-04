class Stack():

    def __init__(self,items=[]):
        self.items = []

    def push(self,data):
        i = self.items.append(data)
        return i

    def pop(self):
        i = self.items.pop()
        return i
    
    def is_empty(self):
        return len(self.items)==0

    def peek(self):
        if not self.is_empty():
            return self.items[-1]

    def get_stack(self):
        return self.items
