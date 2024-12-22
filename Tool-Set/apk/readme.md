# HelloWorldApp - Project Setup and Release APK

## Table of Contents

- [Project File Structure](#project-file-structure)
- [KeyStore Setup](#keystore-setup)
- [Building the Release APK](#building-the-release-apk)

---

# Project File Structure

Here is the structure of the **HelloWorldApp** project:

- **HelloWorldApp/** (Root folder of the project)
  - **build.gradle**  
    - Root level Gradle build file that configures the entire project.
  - **gradle.properties**  
    - Gradle properties file for project-wide settings.
  - **gradle/wrapper/**  
    - Contains Gradle wrapper files to manage Gradle versions.
  
- **app/** (Main app folder containing the Android application)
  - **build.gradle**  
    - App-level Gradle build file that configures the app.
  - **src/main/** (Main source directory for the app)
    - **AndroidManifest.xml**  
      - The manifest file that defines essential app configuration.
    - **java/**  
      - Contains the Java source files for the app.
        - **com/helloworld/**  
          - **MainActivity.java**  
            - The main activity file where app logic starts.
    - **res/**  
      - Contains resources like layouts, icons, etc.
        - **layout/**  
          - Contains layout files like `activity_main.xml`.
        - **mipmap/**  
          - Contains app icon files like `ic_launcher`.
        - **values/**  
          - Contains XML files for strings, colors, styles, etc.
  
- **release-key.jks**  
  - Keystore file used to sign the APK in release mode. (Not included in the repo)

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

# KeyStore Setup

To build the release version of your APK, you need to sign it with a keystore. This involves creating a **.jks (Java Keystore)** file that contains your private key for signing the APK.

### Step 1: Create the Keystore File

Use the `keytool` command to generate the **release-key.jks** file. Run the following command in your terminal:

      keytool -genkeypair -v -keystore release-key.jks -keyalg RSA -keysize 2048 -validity 10000 -alias my-key-alias

release-key.jks: The name of the keystore file (you can change it).

my-key-alias: The alias you will use to refer to your key.

User will be prompted to enter details such as keystore password and key password. Make sure to note these down.


###  Step 2: Store the Keystore File

After generating the release-key.jks, move it to your project folder:

  HelloWorldApp/release-key.jks





###  Build the Release APK

Step 1: Configure build.gradle for Signing

In the app/build.gradle file, under the android block, add the signing configuration:


###  Step 2: Add Keystore to gradle.properties

Create or edit the gradle.properties file in the root directory of your project to enable AndroidX and Jetifier. Add the following lines:

  android.useAndroidX=true
  android.enableJetifier=true

Step 3: Build the APK

To build the APK in release mode, use the following Gradle command:
  
  gradle assembleRelease

This command will create a signed release APK in the app/build/outputs/apk/release/ directory.




###  How to Use and Build the APK

1. Ensure Keystore is in the Correct Folder: Make sure the release-key.jks file is located in the root folder of your project (HelloWorldApp/release-key.jks).


2. Configure Gradle Files: The build.gradle and gradle.properties files must be configured as shown above, specifying the keystore credentials and enabling AndroidX.


3. Build the APK: Run the following Gradle command to build the release APK:

  gradle assembleRelease


4. Locate the APK: Once the build is successful, your release APK will be located in:

HelloWorldApp/app/build/outputs/apk/release/app-release.apk

###  Conclusion

By following the above steps, you will be able to create a signed APK for your Android project. Make sure to store your release-key.jks file securely and never commit it to version control systems like Git.
