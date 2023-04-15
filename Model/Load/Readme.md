
# Load Deep learning Network Model


          # Load the model
          loaded_model = load_model(
            filepath,
            custom_objects=None,
           compile=True
          )
          
          
---          
model_new = load_model("jj4Model.h5")
---

#Prepare the training dataset as a data generator object
train_datagen=tf.keras.preprocessing.image.ImageDataGenerator(preprocessing_function=tf.keras.applications.mobilenet_v2.preprocess_input) #included in our dependencies
---
---
train_generator=train_datagen.flow_from_directory('data',
                                             	target_size=(224,224),
                                             	color_mode='rgb',
                                             	batch_size=10,
                                             	class_mode='categorical',
                                             	shuffle=True)
---

model_new.compile(loss='binary_crossentropy', optimizer='rmsprop', metrics=['accuracy'])
---
# Mapping labels

label_map = (train_generator.class_indices)
---

