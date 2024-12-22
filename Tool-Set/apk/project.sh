#!/bin/bash

# Define the project directory
PROJECT_DIR="HelloWorldApp"
APP_DIR="$PROJECT_DIR/app"
SRC_DIR="$APP_DIR/src/main/java/com/helloworld"
RES_DIR="$APP_DIR/src/main/res/layout"
MIPMAP_DIR="$APP_DIR/src/main/res/mipmap"
MANIFEST_DIR="$APP_DIR/src/main"
GRADLE_WRAPPER="$PROJECT_DIR/gradle/wrapper"

# Create the directory structure
mkdir -p $SRC_DIR
mkdir -p $RES_DIR
mkdir -p $MIPMAP_DIR
mkdir -p $MANIFEST_DIR
mkdir -p $APP_DIR
mkdir -p $GRADLE_WRAPPER

# Create the settings.gradle file
cat <<EOL > $PROJECT_DIR/settings.gradle
rootProject.name = "HelloWorldApp"
include ':app'
EOL

# Create the root build.gradle file
cat <<EOL > $PROJECT_DIR/build.gradle
buildscript {
    repositories {
        google()
        mavenCentral()
    }
    dependencies {
        classpath 'com.android.tools.build:gradle:8.1.1'
    }
}

allprojects {
    repositories {
        google()
        mavenCentral()
    }
}
EOL

# Create the app-level build.gradle file
cat <<EOL > $APP_DIR/build.gradle
plugins {
    id 'com.android.application'
}

android {
    namespace "com.helloworld"
    compileSdk 33

    defaultConfig {
        applicationId "com.helloworld"
        minSdk 21
        targetSdk 33
        versionCode 1
        versionName "1.0"
    }

    signingConfigs {
        release {
            storeFile file("release-key.jks")
            storePassword "raja4545"
            keyAlias "my-key-alias"
            keyPassword "raja4545"
        }
    }

    buildTypes {
        release {
            signingConfig signingConfigs.release
            minifyEnabled false
            proguardFiles getDefaultProguardFile('proguard-android-optimize.txt'), 'proguard-rules.pro'
        }
    }
}

dependencies {
    implementation 'androidx.appcompat:appcompat:1.4.0'
    implementation 'androidx.constraintlayout:constraintlayout:2.1.4'
}
EOL

# Create the MainActivity.java file
cat <<EOL > $SRC_DIR/MainActivity.java
package com.helloworld;

import android.os.Bundle;
import androidx.appcompat.app.AppCompatActivity;

public class MainActivity extends AppCompatActivity {
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }
}
EOL

# Create the activity_main.xml file
cat <<EOL > $RES_DIR/activity_main.xml
<?xml version="1.0" encoding="utf-8"?>
<androidx.constraintlayout.widget.ConstraintLayout xmlns:android="http://schemas.android.com/apk/res/android"
    xmlns:app="http://schemas.android.com/apk/res-auto"
    xmlns:tools="http://schemas.android.com/tools"
    android:layout_width="match_parent"
    android:layout_height="match_parent"
    tools:context=".MainActivity">

    <TextView
        android:id="@+id/textView"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:text="Hello, World!"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent" />
</androidx.constraintlayout.widget.ConstraintLayout>
EOL

# Create the AndroidManifest.xml file
cat <<EOL > $MANIFEST_DIR/AndroidManifest.xml
<?xml version="1.0" encoding="utf-8"?>
<manifest xmlns:android="http://schemas.android.com/apk/res/android">

    <application
        android:allowBackup="true"
        android:icon="@mipmap/ic_launcher"
        android:label="HelloWorld"
        android:theme="@style/Theme.AppCompat.DayNight">
        <activity android:name=".MainActivity"
                  android:exported="true">
            <intent-filter>
                <action android:name="android.intent.action.MAIN" />
                <category android:name="android.intent.category.LAUNCHER" />
            </intent-filter>
        </activity>
    </application>

</manifest>
EOL

# Create gradle-wrapper.properties file
cat <<EOL > $GRADLE_WRAPPER/gradle-wrapper.properties
distributionUrl=https\://services.gradle.org/distributions/gradle-8.1.1-all.zip
EOL

# Create gradle.properties file
cat <<EOL > $PROJECT_DIR/gradle.properties
android.useAndroidX=true
android.enableJetifier=true
EOL

# Create a placeholder for the launcher icon in mipmap
echo "Creating placeholder launcher icon..."
cat <<EOL > $MIPMAP_DIR/ic_launcher.xml
<vector xmlns:android="http://schemas.android.com/apk/res/android"
    android:width="108dp"
    android:height="108dp"
    android:viewportWidth="108"
    android:viewportHeight="108">
    <path
        android:fillColor="#FF5722"
        android:pathData="M0,0h108v108h-108z"/>
    <path
        android:fillColor="#FFFFFF"
        android:pathData="M20,54l68,-40v80z"/>
</vector>
EOL

# Notify the user
echo "Project setup complete! You can now build the project using Gradle."
