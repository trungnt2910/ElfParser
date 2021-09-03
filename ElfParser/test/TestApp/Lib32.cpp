
thread_local int value = 0;

extern "C"
{
    int GetThreadLocalInt()
    {
        return ++value;
    }
}