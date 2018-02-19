using System;
using System.Runtime.InteropServices;

namespace Native
{
    public static class FooerNative
    {
        [DllImport("libnative")]
        public static extern void foo([MarshalAs(UnmanagedType.LPStr)]string bar);
    }
}