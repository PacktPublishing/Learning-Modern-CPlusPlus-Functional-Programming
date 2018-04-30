template<class T> class Delay
{
private:
    function<T()> m_func;

public:
    Delay(
        function<T()> func)
        : m_func(func)
    {
    }

    T Fetch()
    {
        return m_func();
    }
};
