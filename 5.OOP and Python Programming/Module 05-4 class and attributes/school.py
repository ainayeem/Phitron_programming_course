class Student:
    def __init__(self,name,cls,id):
        self.name=name
        self.cls=cls
        self.id=id
    def __repr__(self) -> str:
        return f'student name: {self.name}, cls: {self.cls}, id: {self.id}'

class Teacher:
    def __init__(self,name,sub,id):
        self.name=name
        self.sub=sub
        self.id=id
    def __repr__(self):
        return f'Teacher: {self.name}, sub: {self.sub}, id: {self.id}'

class School:
    def __init__(self,name):
        self.name=name
        self.teachers=[]
        self.students=[]
    
    def add_teacher(self,name,sub):
        id=len(self.teachers)+101
        teacher=Teacher(name,sub,id)
        self.teachers.append(teacher)

    def enroll(self,name,fee):
        if fee<6500:
            return 'not enough fee'
        else:
            id=len(self.students)+1
            student=Student(name,'C',id)
            self.students.append(student)
            return f'{name} is enrolled with id: {id}, extra money {fee-6500}'
    
    def __repr__(self) -> str:
        print('welcome to', self.name)
        print('--------OUR Teachers--------')
        for teacher in self.teachers:
            print(teacher)
        print('--------OUR STUDENTS--------')
        for student in self.students:
            print(student)
        return 'All Done for now'




# alia=Student('Alia',9,1)
# print(alia)
# tusher=Teacher('Tusher','ict',3)
# print(tusher)

phitron = School('Phitron')
phitron.enroll('alia', 5200)
phitron.enroll('rani', 8000)
phitron.enroll('aishwaraiya', 7000)
phitron.enroll('vaijaan', 90000)

phitron.add_teacher('Tom Cruise', 'Algo')
phitron.add_teacher('Decap', 'DS')
phitron.add_teacher('AJ', 'Database')

print(phitron)