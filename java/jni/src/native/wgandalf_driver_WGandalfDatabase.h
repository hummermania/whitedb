/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class wgandalf_driver_WGandalfDatabase */

#ifndef _Included_wgandalf_driver_WGandalfDatabase
#define _Included_wgandalf_driver_WGandalfDatabase
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     wgandalf_driver_WGandalfDatabase
 * Method:    getDatabase
 * Signature: ()Lwgandalf/holder/Database;
 */
JNIEXPORT jobject JNICALL Java_wgandalf_driver_WGandalfDatabase_getDatabase
  (JNIEnv *, jobject);

/*
 * Class:     wgandalf_driver_WGandalfDatabase
 * Method:    deleteDatabase
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_wgandalf_driver_WGandalfDatabase_deleteDatabase
  (JNIEnv *, jobject);

/*
 * Class:     wgandalf_driver_WGandalfDatabase
 * Method:    createRecord
 * Signature: (Lwgandalf/holder/Database;I)Lwgandalf/holder/Record;
 */
JNIEXPORT jobject JNICALL Java_wgandalf_driver_WGandalfDatabase_createRecord
  (JNIEnv *, jobject, jobject, jint);

/*
 * Class:     wgandalf_driver_WGandalfDatabase
 * Method:    setRecordIntField
 * Signature: (Lwgandalf/holder/Database;Lwgandalf/holder/Record;II)I
 */
JNIEXPORT jint JNICALL Java_wgandalf_driver_WGandalfDatabase_setRecordIntField
  (JNIEnv *, jobject, jobject, jobject, jint, jint);

/*
 * Class:     wgandalf_driver_WGandalfDatabase
 * Method:    getFirstRecord
 * Signature: (Lwgandalf/holder/Database;)Lwgandalf/holder/Record;
 */
JNIEXPORT jobject JNICALL Java_wgandalf_driver_WGandalfDatabase_getFirstRecord
  (JNIEnv *, jobject, jobject);

/*
 * Class:     wgandalf_driver_WGandalfDatabase
 * Method:    getNextRecord
 * Signature: (Lwgandalf/holder/Database;Lwgandalf/holder/Record;)Lwgandalf/holder/Record;
 */
JNIEXPORT jobject JNICALL Java_wgandalf_driver_WGandalfDatabase_getNextRecord
  (JNIEnv *, jobject, jobject, jobject);

/*
 * Class:     wgandalf_driver_WGandalfDatabase
 * Method:    getIntFieldValue
 * Signature: (Lwgandalf/holder/Database;Lwgandalf/holder/Record;I)I
 */
JNIEXPORT jint JNICALL Java_wgandalf_driver_WGandalfDatabase_getIntFieldValue
  (JNIEnv *, jobject, jobject, jobject, jint);

#ifdef __cplusplus
}
#endif
#endif
