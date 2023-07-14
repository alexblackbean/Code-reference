'''
author: Kuo Yu Liao
email: alexgreenbean6092@gmail.com
code content: example for catching exception (python)
'''
class MyClass():
    def __init__(self)->None:
        self.height = 185
        self.weight = 77
        
def AssertExample():
    '''
    AssertionError
    assert statement fails
    ''' 
    try:
        one = 1
        one2 = 2
        assert one == one2
        print("assert sucess")
    except AssertionError:
        print("one2 setting failed")

def AttributeExample():
    '''
    AttributeError
    attribute reference, assignment fails
    '''
    try:
        obj = MyClass()
        print(obj.gender)
    except AttributeError:
        print("there is no attribute \"gender\" in MyClass")
if __name__ == '__main__':
    '''Usage'''
    AssertExample()
    AttributeExample()

