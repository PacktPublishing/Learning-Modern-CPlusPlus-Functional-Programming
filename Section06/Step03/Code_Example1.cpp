template<typename T, typename U>
 class BaseClass
 {
    public:
      virtual U InvokeFunction(
        const std::shared_ptr<T>&) = 0;
 };

 class CustomerName :
    public BaseClass<Customer, std::string>
 {
    public:
            virtual std::string InvokeFunction(
             const std::shared_ptr<Customer> &customer)
             {
               return customer->name;
             }
 };

 class CustomerAddress :
    public BaseClass<Customer, std::string>
 {
    public:
            virtual std::string InvokeFunction(
              const std::shared_ptr<Customer> &customer)
              {
                return customer->address;
              }
 };
 class CustomerPhoneNumber :
    public BaseClass<Customer, std::string>
 {
    public:
            virtual std::string InvokeFunction(
              const std::shared_ptr<Customer> &customer)
              {
                return customer->phoneNumber;
              }
 };
 class CustomerEmail :
    public BaseClass<Customer, std::string>
 {
    public:
            virtual std::string InvokeFunction(
              const std::shared_ptr<Customer> &customer)
              {
                return customer->email;
              }
 };

 template<typename T>
 static std::vector<T> GetActiveCustomerByFunctionField(
   const std::shared_ptr<BaseClass<Customer, T>>
      &classField);
