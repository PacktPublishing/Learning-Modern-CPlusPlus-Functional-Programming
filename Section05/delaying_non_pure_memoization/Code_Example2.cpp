template<class T> class Memoization
{
private:
    T const & (*m_subRoutine)(Memoization *);
    mutable T m_recordedFunc;
    function<T()> m_func;

    static T const & ForceSubroutine(
        Memoization * d)
    {
        return d->DoRecording();
    }

    static T const & FetchSubroutine(
        Memoization * d)
    {
        return d->FetchRecording();
    }

    T const & FetchRecording()
    {
        return m_recordedFunc;
    }

    T const & DoRecording()
    {
        m_recordedFunc = m_func();
        m_subRoutine = &FetchSubroutine;
        return FetchRecording();
    }

public:
    Memoization(
    function<T()> func)
        : m_func(func),
        m_subRoutine(&ForceSubroutine),
        m_recordedFunc(T())
    {
    }

    T Fetch()
    {
        return m_subRoutine(this);
    }
};
