class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age


class Professor(Person):
    def __init__(self, name, age, grade):
        super().__init__(name, age)
        self.grade = grade


class Actor(Person):
    def __init__(self, name, age, face_color, is_handsome):
        super().__init__(name, age)
        self.face_color = face_color
        self.is_handsome = is_handsome


professor_wang = Professor("Wang", 50, "supervisor")
actor_zhang = Actor("Zhang", 25, "milky color", True)

print(f"{professor_wang.name}: How are you?")
print(f"{actor_zhang.name}: How are you?")

if professor_wang.age > actor_zhang.age:
    print(f"{professor_wang.name} is older")
else:
    print(f"{actor_zhang.name} is older")
