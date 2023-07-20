from cv2 import imread, imwrite
from cv2 import IMREAD_GRAYSCALE, IMREAD_COLOR
import numpy as np
class MyImage(object):
    '''this class helps packing common ImageReading procedure and info'''
    def __init__(self,
                 filename = './data/img1.png',
                 mode = IMREAD_GRAYSCALE,)->None:
        
        try:
            self.data = imread(filename, mode)
        except IOError:
            print("There is an exception occuring when opening {}".format(filename))

        if self.data is None:
            print("There is unexpected error when open the image")
            exit(1)
        else:
            self.shape = self.data.shape
            self.type = self.data.dtype
    def getinfo(self)->tuple:
        return (self.data, self.shape, self.type)

if __name__ == '__main__':
    '''Usage'''
    ImgObj = MyImage()
    info = ImgObj.getinfo()
    print(info[1:])
    
