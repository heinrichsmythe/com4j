#include "stdafx.h"
#include "java_id.h"
#include <oaidl.h>

JClassID* JClassID::init = NULL;
JMethodID_Base* JMethodID_Base::init = NULL;


JClassID javaLangNumber("java/lang/Number");
JMethodID javaLangNumber_intValue(javaLangNumber,"intValue","()I");
JMethodID javaLangNumber_floatValue(javaLangNumber,"floatValue","()F");
JMethodID javaLangNumber_doubleValue(javaLangNumber,"doubleValue","()D");
JMethodID javaLangNumber_shortValue(javaLangNumber,"shortValue","()S");
JMethodID javaLangNumber_longValue(javaLangNumber,"longValue","()J");

JClassID javaLangInteger("java/lang/Integer");
JStaticMethodID javaLangInteger_valueOf(javaLangInteger,"valueOf","(I)Ljava/lang/Integer;");

JClassID javaLangShort("java/lang/Short");
JStaticMethodID javaLangShort_valueOf(javaLangShort,"valueOf","(S)Ljava/lang/Short;");

JClassID javaLangLong("java/lang/Long");
JStaticMethodID javaLangLong_valueOf(javaLangLong,"valueOf","(J)Ljava/lang/Long;");

JClassID javaLangFloat("java/lang/Float");
JStaticMethodID javaLangFloat_valueOf(javaLangFloat,"valueOf","(F)Ljava/lang/Float;");

JClassID javaLangDouble("java/lang/Double");
JStaticMethodID javaLangDouble_valueOf(javaLangDouble,"valueOf","(D)Ljava/lang/Double;");

JClassID javaLangBoolean("java/lang/Boolean");
JMethodID javaLangBoolean_booleanValue(javaLangBoolean,"booleanValue","()Z");
JStaticMethodID javaLangBoolean_valueOf(javaLangBoolean,"valueOf","(Z)Ljava/lang/Boolean;");

JClassID javaLangString("java/lang/String");

JClassID comexception("com4j/ComException");
JMethodID comexception_new(comexception,"<init>","(Ljava/lang/String;I)V");
JClassID com4j_Holder("com4j/Holder");
jfieldID com4j_Holder_value;

