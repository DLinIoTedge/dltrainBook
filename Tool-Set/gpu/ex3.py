import tensorflow as tf1


# Force execution on CPU
print("On CPU:")
with tf1.device("CPU:0"):
 a = tf1.constant([10.0, 20.0, 30.0, 4.0, 5.0, 6.0], shape=[2, 3], name='a')
 b = tf1.constant([1.0, 2.0, 3.0, 4.0, 5.0, 6.0], shape=[3, 2], name='b')
 assert a.device.endswith("CPU:0")
 assert b.device.endswith("CPU:0")
 c = tf1.matmul(a, b)
 print(c) 


On CPU:
tf.Tensor(
[[220. 280.]
 [ 49.  64.]], shape=(2, 2), dtype=float32)
