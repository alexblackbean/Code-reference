'''
author: Kuo Yu Liao
email: alexgreenbean6092@gmail.com
code content: Command line argument parser for python
'''
import argparse

class MyParser:
    ''' You can modify constructor to specify the argument you use
        get_args will return the parser args
    '''
    def __init__(self)->None:
        self.parser = argparse.ArgumentParser()
        self.parser.add_argument('-c', '--content', help = "type something")
    def get_args(self):
        return self.parser.parse_args()

if __name__ == '__main__':
    '''Usage'''
    parser = MyParser() # instantiation
    args = parser.get_args() # get args
    print(args)
