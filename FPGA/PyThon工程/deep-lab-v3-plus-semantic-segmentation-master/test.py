from PIL import Image
import numpy as np
def voc_cmap(N=256, normalized=False):
    def bitget(byteval, idx):
        return ((byteval & (1 << idx)) != 0)

    dtype = 'float32' if normalized else 'uint8'
    cmap = np.zeros((N, 3), dtype=dtype)
    for i in range(N):
        r = g = b = 0
        c = i
        for j in range(8):
            r = r | (bitget(c, 0) << 7-j)
            g = g | (bitget(c, 1) << 7-j)
            b = b | (bitget(c, 2) << 7-j)
            c = c >> 3

        cmap[i] = np.array([r, g, b])

    cmap = cmap/255 if normalized else cmap
    return cmap

lena = Image.open(r'E:\PY_project\data\VOCdevkit\VOC2012\SegmentationClassAug\\2008_000062.png') # 读取和代码处于同一目录下的 lena.png
Image._show(Image.fromarray(voc_cmap()[np.array(lena).astype(np.uint8)]))
