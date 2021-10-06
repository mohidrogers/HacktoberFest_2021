class Stack:
    def __init__(self):
        self.items = []
 
    def is_empty(self):
        return self.items == []
 
    def push(self, data):
        self.items.append(data)
 
    def pop(self):
        return self.items.pop()
s = Stack()
text = input()
for character in text:
    s.push(character)
rev = ''
while not s.is_empty():
    rev = rev + s.pop()
 
if text == rev:
    print('palindrome.')
else:
    print('not a palindrome.')
