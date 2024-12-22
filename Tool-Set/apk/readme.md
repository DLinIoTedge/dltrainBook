# HelloWorldApp - Project Setup and Release APK

## Table of Contents

- [Project File Structure](#project-file-structure)
- [KeyStore Setup](#keystore-setup)
- [Building the Release APK](#building-the-release-apk)

---

## Project File Structure

Below is the file structure of the **HelloWorldApp** project:

HelloWorldApp/ │ ├── build.gradle               # Root level Gradle build file ├── gradle.properties          # Project Gradle properties ├── gradle/wrapper/            # Gradle wrapper files ├── app/                       # Main app folder │   ├── build.gradle           # App-level Gradle build file │   ├── src/main/              # Main source directory │   │   ├── AndroidManifest.xml  # Manifest file │   │   ├── java/               # Java source files │   │   │   └── com/helloworld/ │   │   │       └── MainActivity.java # Main activity Java file │   │   ├── res/                # Resources │   │   │   ├── layout/         # Layouts (e.g., activity_main.xml) │   │   │   └── mipmap/         # App icon │   │   └── values/             # Strings, styles ├── release-key.jks            # Keystore file (not included in repo) └── README.md                  # Project description

### Key Folders and Files

1. **`HelloWorldApp/`**: Root folder of your project. Contains the `build.gradle` file for project-level settings and dependencies.
2. **`gradle/wrapper/`**: Contains Gradle wrapper files to ensure you are using the correct version of Gradle.
3. **`app/`**: The main folder for your Android app.
   - **`build.gradle`**: App-level build settings, dependencies, and configurations.
   - **`src/main/`**: Contains the source code, layouts, and manifest files.
   - **`AndroidManifest.xml`**: Specifies app components like activities and services.
   - **`res/`**: Contains resources such as layouts (`activity_main.xml`) and images (`ic_launcher`).
4. **`release-key.jks`**: Your keystore file used for signing the APK.
5. **`README.md`**: A markdown file describing your project.

---

## KeyStore Setup

To build the release version of your APK, you need to sign it with a keystore. This involves creating a **.jks (Java Keystore)** file that contains your private key for signing the APK.

### Step 1: Create the Keystore File

Use the `keytool` command to generate the **release-key.jks** file. Run the following command in your terminal:

```bash
keytool -genkeypair -v -keystore release-key.jks -keyalg RSA -keysize 2048 -validity 10000 -alias my-key-alias

release-key.jks: The name of the keystore file (you can change it).

my-key-alias: The alias you will use to refer to your key.

You will be prompted to enter details such as keystore password and key password. Make sure to note these down.


###  Step 2: Store the Keystore File

After generating the release-key.jks, move it to your project folder:

HelloWorldApp/release-key.jks



---

###  Build the Release APK

Step 1: Configure build.gradle for Signing

In the app/build.gradle file, under the android block, add the signing configuration:

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
            storeFile file("release-key.jks")          // Keystore file
            storePassword "raja4545"                    // Keystore password
            keyAlias "my-key-alias"                     // Key alias
            keyPassword "raja4545"                      // Key password
        }
    }

    buildTypes {
        release {
            minifyEnabled false
            proguardFiles getDefaultProguardFile('proguard-android-optimize.txt'), 'proguard-rules.pro'
            signingConfig signingConfigs.release       // Set signing config to 'release'
        }
    }
}

###  Step 2: Add Keystore to gradle.properties

Create or edit the gradle.properties file in the root directory of your project to enable AndroidX and Jetifier. Add the following lines:

android.useAndroidX=true
android.enableJetifier=true

Step 3: Build the APK

To build the APK in release mode, use the following Gradle command:

./gradlew assembleRelease

This command will create a signed release APK in the app/build/outputs/apk/release/ directory.


---

###  How to Use and Build the APK

1. Ensure Keystore is in the Correct Folder: Make sure the release-key.jks file is located in the root folder of your project (HelloWorldApp/release-key.jks).


2. Configure Gradle Files: The build.gradle and gradle.properties files must be configured as shown above, specifying the keystore credentials and enabling AndroidX.


3. Build the APK: Run the following Gradle command to build the release APK:

./gradlew assembleRelease


4. Locate the APK: Once the build is successful, your release APK will be located in:

HelloWorldApp/app/build/outputs/apk/release/app-release.apk




---

###  Conclusion

By following the above steps, you will be able to create a signed APK for your Android project. Make sure to store your release-key.jks file securely and never commit it to version control systems like Git.
