#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_dev_nativedemo_MainActivity_stringFromJNI(JNIEnv* env,jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

extern "C" JNIEXPORT jint JNICALL
Java_com_dev_nativedemo_MainActivity_answerFromJNI(JNIEnv* env,jobject) {
    int answer = 42;
    return answer;
}