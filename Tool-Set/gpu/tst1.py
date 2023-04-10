import tensorflow as tf1
import tensorflow as tf2

with tf1.device('/gpu:0'):
   a = tf1.constant([10.0, 20.0, 30.0, 4.0, 5.0, 6.0], shape=[2, 3], name='a')
   b = tf1.constant([1.0, 2.0, 3.0, 4.0, 5.0, 6.0], shape=[3, 2], name='b')
   c = tf1.matmul(a, b)

with tf1.Session() as sess:
   print (sess.run(c))

with tf2.device('/gpu:1'):
   a1 = tf2.constant([10.0, 20.0, 30.0, 4.0, 5.0, 6.0], shape=[2, 3], name='a')
   b1 = tf2.constant([1.0, 2.0, 3.0, 4.0, 5.0, 6.0], shape=[2, 3], name='b')
   c1 = tf2.matadd(a1, b1)

with tf2.Session() as sess:
   print (sess.run(c1))



