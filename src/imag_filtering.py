import numpy as np
import cv2


image=cv2.imread("images/tennisball01.jpeg",cv2.IMREAD_COLOR)
cv2.imshow("Image",image)


HSV=cv2.cvtColor(image,cv2.COLOR_BGR2HSV)
cv2.imshow("HSV Image",HSV)

mask=cv2.inRange(HSV,(30,200,10),(60,255,255))
cv2.imshow("HSV Image",mask)



cv2.waitKey()
cv2.destroyAllWindows