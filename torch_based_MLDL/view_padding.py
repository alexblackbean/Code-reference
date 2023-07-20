from MyImage import MyImage
from broadcast_channel import broadcast
from cv2 import imwrite
import torch
import torch.nn.functional as F
import numpy as np
if __name__ == '__main__':
    channel_after = 3
    '''Open an Image'''
    imgobj = MyImage()
    info = imgobj.getinfo()
    img, imgshape, imgdtype = info
    img = broadcast(img = img, channel_after = channel_after, axis = 2, axis_pos = 0)
    '''Setting'''
    B = 1
    C = channel_after
    H,W = imgshape
    window_size = 7
    '''Numpy to tensor & example of view'''
    img_tensor = torch.from_numpy(np.array([img]))
    img_tensor = img_tensor.float()
    print(img_tensor.size())
    img_tensor = img_tensor.view(B, H*W, C)
    print(img_tensor.size())

    '''padding example: padding image to  multiples of window size'''

    img_tensor = img_tensor.view(B, H, W, C)

    pad_r = (window_size - W % window_size) % window_size
    pad_b = (window_size - H % window_size) % window_size

    # pad: (channel_dir1, channel_dir2, left, top, right, bottom)
    img_tensor = F.pad(img_tensor, (0, 0, 0, pad_r, 0, pad_b))
    H_pad, W_pad = img_tensor.shape[1], img_tensor.shape[2]
    
    print(img_tensor.size())
    print(H_pad, W_pad)    

    '''write image'''
    write = 0
    if write:
        I = img_tensor.numpy()
        imwrite('test.png', I[0])
    
