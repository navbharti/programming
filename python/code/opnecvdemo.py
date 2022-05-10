import cv2

img1 = cv2.imread('addition_image_1-768x807.webp', 1)
#or
#img1 = cv2.imread('C:\\Users\\Admin\\Downloads\\image1_add.jpg', 1)

cv2.imshow('Image 1', img1)

cv2.waitKey(0)
cv2.destroyAllWindows()

img2 = cv2.imread('image2_add.jpg', 1)
#or
#img2 = cv2.imread('C:\\Users\\Admin\\Downloads\\image2_add.jpg', 1)

cv2.imshow('Image 2', img2)
cv2.waitKey(0)
cv2.destroyAllWindows()

# Add the images
added_img = cv2.add(img1, img2)

cv2.imshow('Added Image', added_img)
cv2.waitKey(0)
cv2.destroyAllWindows()
''''