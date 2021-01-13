


"""
img=cv2.imread("images/tree.png")
cv2.namedWindow("iMAGEE",cv2.WINDOW_NORMAL)
cv2.line(img,(500,500),(400,400),(237,152,56),4)
cv2.circle(img,(500,500),100,(237,152,56))

pts=np.array([[3,4],[10,78],[23,30],[10,20]])
print(pts.shape)

o=pts.reshape(-1,1,2)
print(o.shape)
print(o)
cv2.polylines(img,[o],True,(0,255,255))
print(img.size,'     ',img.shape)
cv2.imshow("iMAGEE",img)
cv2.waitKey(0)
""""""
cap =cv2.VideoCapture(0)

while(True):
	ret,frame=cap.read()

	cv2.imshow("Frame",frame)
	if cv2.waitKey(1) & 0xFF ==ord('q'):
		break
		
cap.release()
cv2.destroyAllWindows()



import rospy
import cv2
from std_msgs.msg import String
from sensor_msgs.msg import Image
from cv_bridge import CvBridge, CvBridgeError
import sys

bridge = CvBridge()

def image_callback(ros_image):
  print ('got an image')
  global bridge
  #convert ros_image into an opencv-compatible image
  try:
    cv_image = bridge.imgmsg_to_cv2(ros_image, "bgr8")
  except CvBridgeError as e:
      print(e)
  #from now on, you can work exactly like with opencv
  (rows,cols,channels) = cv_image.shape
  
  cv2.circle(cv_image, (100,100),90, 255)
  font = cv2.FONT_HERSHEY_SIMPLEX
  cv2.putText(cv_image,'Webcam Activated with ROS & OpenCV!',(10,350), font, 1,(255,255,255),2,cv2.LINE_AA)
  cv2.imshow("Image window", cv_image)
  cv2.waitKey(3)

  
def main(args):
  rospy.init_node('image_converter', anonymous=True)
  #for turtlebot3 waffle
  #image_topic="/camera/rgb/image_raw/compressed"
  #for usb cam
  #image_topic="/usb_cam/image_raw"
  image_sub = rospy.Subscriber("/usb_cam/image_raw",Image, image_callback)
  try:
    rospy.spin()
  except KeyboardInterrupt:
    print('Shutting down')
  cv2.destroyAllWindows()

if __name__ == '__main__':
    main(sys.argv)"""
import numpy as np
import cv2
    
    
    
def read_image(image_name, as_gray):
    if as_gray: 
        image = cv2.imread(image_name,cv2.IMREAD_GRAYSCALE)
    else:
        image = cv2.imread(image_name,cv2.IMREAD_COLOR)
    cv2.imshow("Image",image)
    return image



def basic_thresholding(gray_image, threshol_value):
    ret, thresh_basic = cv2.threshold(gray_image,
                                    threshol_value,
                                    255,
                                    cv2.THRESH_BINARY)
    cv2.imshow("Basic Binary Image",thresh_basic)

def adaptive_thresholding(gray_image, threshol_value):
    adaptive_threshold_image = cv2.adaptiveThreshold(gray_image, 
                                        255, 
                                        cv2.ADAPTIVE_THRESH_MEAN_C, 
                                        cv2.THRESH_BINARY_INV, 
                                        threshol_value, 
                                        2)
    cv2.imshow("Adaptive Threshold Image",adaptive_threshold_image)


def main():
    #image_name = "images/tree.png"
    image_name = "images/tree.png"
    as_gray = True
    threshol_value=5
    gray_image = read_image(image_name,as_gray)
    #basic_thresholding(gray_image, threshol_value)
    adaptive_thresholding(gray_image, threshol_value)
    cv2.waitKey(0)
    cv2.destroyAllWindows()
    

if __name__ == '__main__':
    main()


