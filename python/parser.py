import argparse

class MyParser:
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
