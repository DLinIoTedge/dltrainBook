#include <jni.h>
#include <string>
#include <math.h>

float **bias;
float **activations;
float ***weights;
int num_layers;
int *sizes;

extern "C" JNIEXPORT jstring JNICALL
Java_c_r_fighte_j7_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

extern "C" JNIEXPORT void JNICALL
Java_c_r_fighte_j7_MainActivity_initNet(JNIEnv *env, jobject obj, jint num, jintArray siz, jfloatArray bia, jfloatArray we) {
    num_layers = num;
    sizes = new int[num_layers + 1];
    sizes[0] = 784;
    jint *p = env->GetIntArrayElements(siz, 0);
    for(int i = 1; i <= num_layers; i++) {
        sizes[i] = p[i - 1];
    }

    jfloat  *pp = env->GetFloatArrayElements(bia, 0);
    int j = 0;
    bias = new float*[num_layers];
    activations = new float*[num_layers];
    for(int i = 0; i < num_layers; i++) {
        bias[i] = new float[sizes[i + 1]];
        activations[i] = new float[sizes[i + 1]];
        for(int k = 0; k < sizes[i + 1]; k++) {
            bias[i][k] = pp[j++];
            activations[i][k] = 0;
        }
    }

    pp = env->GetFloatArrayElements(we, 0);
    j = 0;
    weights = new float**[num_layers];
    for(int i = 0; i < num_layers; i++) {
        weights[i] = new float*[sizes[i + 1]];
        for(int k = 0; k < sizes[i + 1]; k++) {
            weights[i][k] = new float[sizes[i]];
            for(int h = 0; h < sizes[i]; h++) {
                weights[i][k][h] = pp[j++];
            }
        }
    }
}

float sigmoid(float x) {
    float xi = 1.0 / (1 + exp(-x));
    if(xi == 1) {
        return float(0.999);
    } else if(xi == 0) {
        return float(0.001);
    } else {
        return xi;
    }
}

extern "C" JNIEXPORT jfloatArray JNICALL Java_c_r_fighte_j7_MainActivity_inference(JNIEnv *env, jobject job, jfloatArray farr){
    float sum;
    jfloat *in = env->GetFloatArrayElements(farr, 0);
    jfloatArray result = env->NewFloatArray(sizes[num_layers]);
    for(int k = 0; k < num_layers; k++) {
        for(int i = 0; i < sizes[k + 1]; i++) {
            sum = 0;
            for(int j = 0; j < sizes[k]; j++) {
                if(k == 0) {
                    sum += (in[j]) * weights[k][i][j]; // First layer
                } else {
                    sum += activations[k - 1][j] * weights[k][i][j];
                }
            }
            sum += bias[k][i];
            activations[k][i] = sigmoid(sum);
        }
    }
    env->SetFloatArrayRegion(result, 0, sizes[num_layers], activations[num_layers - 1]);
    return result;
}