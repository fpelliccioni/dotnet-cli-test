using System;
using Native;

namespace Idiomatic
{
    public static class Fooer
    {
        public static void Foo(string bar)
        {
            FooerNative.foo(bar);
        }
    }
}