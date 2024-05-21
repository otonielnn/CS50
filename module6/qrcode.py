import os
import qrcode

img = qrcode.make("https://github.com/otonielnn/CS50")
img.save("qr.png")
os.system("open qr.png")
