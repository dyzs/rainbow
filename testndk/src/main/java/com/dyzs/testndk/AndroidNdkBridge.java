package com.dyzs.testndk;

public class AndroidNdkBridge {

    static {
        System.loadLibrary("my-native-lib");

    }

    public String getString() {
        return getNativeStr();
    }

    public static native String getNativeStr();

    public static native String getNativeStr2();

    public static native int getNativeIntValue();
}
