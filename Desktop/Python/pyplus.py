exp = ['34', '45', '+', '44', '-', '3', '*']
stack = []

for token in exp:
    if token.isdigit():
        stack.append(int(token))
        print(f"Pushed {int(token)} onto the stack.")
    else:
        op2 = stack.pop()
        op1 = stack.pop()
        print(f"Popped {op2} and {op1} from the stack.")
        if token == '+':
            result = op1 + op2
        elif token == '-':
            result = op1 - op2
        elif token == '*':
            result = op1 * op2
        elif token == '/':
            result = op1 / op2
        else:
            raise ValueError(f"Invalid operator: {token}")
        stack.append(result)
        print(
            f"Performed {op1} {token} {op2} and pushed {result} onto the stack.")

if len(stack) != 1:
    raise ValueError("Invalid postfix expression.")
else:
    print(f"The result is {stack.pop()}.")
