from MyImage import MyImage
import numpy as np
import torch

def broadcast(img = np.array([]), channel_after = 3, axis = 0, axis_pos = 0):
    '''This function broadcast original image (ex grayscale image)
        to specified channel image (ex rgb image)'''
    # preprocess
    shape_len = len(img.shape)
    if shape_len == 2:
        img = np.expand_dims(img, axis = axis)
    elif shape_len == 3:
        img = img[axis_pos,:,:]
    # kernel
    img = np.repeat(img, channel_after, axis = axis)

    return img
if __name__ == '__main__':
    '''Usage'''
    imgobj = MyImage()
    info = imgobj.getinfo()
    img = info[0]
    print(img.shape)
    img = broadcast(img = img, channel_after = 3, axis = 0, axis_pos = 0)
    print(img.shape)
