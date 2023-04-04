import tensorflow as tf2


def jmatadd(a,b):
 return tf2.add(a,b)


# Force execution on CPU
print("On CPU:")
with tf2.device("CPU:0"):
 a1 = tf2.constant([10.0, 20.0, 30.0, 4.0, 5.0, 6.0], shape=[2, 3], name='a')
 b1 = tf2.constant([1.0, 2.0, 3.0, 4.0, 5.0, 6.0], shape=[2, 3], name='b')
 assert a1.device.endswith("CPU:0")
 assert b1.device.endswith("CPU:0")
 c2 = jmatadd(a1,b1)
 print(c2)
