import tensorflow as tf2


# Force execution on CPU
print("On CPU:")
with tf2.device("CPU:0"):
 a1 = tf2.constant([10.0, 20.0, 30.0, 4.0, 5.0, 6.0], shape=[2, 3], name='a')
 b1 = tf2.constant([1.0, 2.0, 3.0, 4.0, 5.0, 6.0], shape=[2, 3], name='b')
 assert a1.device.endswith("CPU:0")
 assert b1.device.endswith("CPU:0")
 c1 = tf2.add(a1, b1)
 print(c1)


On CPU:
tf.Tensor(
[[11. 22. 33.]
 [ 8. 10. 12.]], shape=(2, 3), dtype=float32)
