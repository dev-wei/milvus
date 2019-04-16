/**
 * Autogenerated by Thrift Compiler (0.12.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef VecService_H
#define VecService_H

#include <thrift/TDispatchProcessor.h>
#include <thrift/async/TConcurrentClientSyncInfo.h>
#include "VectorService_types.h"



#ifdef _MSC_VER
  #pragma warning( push )
  #pragma warning (disable : 4250 ) //inheriting methods via dominance 
#endif

class VecServiceIf {
 public:
  virtual ~VecServiceIf() {}

  /**
   * group interfaces
   * 
   * @param group
   */
  virtual void add_group(const VecGroup& group) = 0;
  virtual void get_group(VecGroup& _return, const std::string& group_id) = 0;
  virtual void del_group(const std::string& group_id) = 0;

  /**
   * vector interfaces
   * 
   * 
   * @param group_id
   * @param tensor
   */
  virtual int64_t add_vector(const std::string& group_id, const VecTensor& tensor) = 0;
  virtual void add_vector_batch(VecTensorIdList& _return, const std::string& group_id, const VecTensorList& tensor_list) = 0;

  /**
   * search interfaces
   * if time_range_list is empty, engine will search without time limit
   * 
   * @param group_id
   * @param top_k
   * @param tensor
   * @param time_range_list
   */
  virtual void search_vector(VecSearchResult& _return, const std::string& group_id, const int64_t top_k, const VecTensor& tensor, const VecTimeRangeList& time_range_list) = 0;
  virtual void search_vector_batch(VecSearchResultList& _return, const std::string& group_id, const int64_t top_k, const VecTensorList& tensor_list, const VecTimeRangeList& time_range_list) = 0;
};

class VecServiceIfFactory {
 public:
  typedef VecServiceIf Handler;

  virtual ~VecServiceIfFactory() {}

  virtual VecServiceIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(VecServiceIf* /* handler */) = 0;
};

class VecServiceIfSingletonFactory : virtual public VecServiceIfFactory {
 public:
  VecServiceIfSingletonFactory(const ::apache::thrift::stdcxx::shared_ptr<VecServiceIf>& iface) : iface_(iface) {}
  virtual ~VecServiceIfSingletonFactory() {}

  virtual VecServiceIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(VecServiceIf* /* handler */) {}

 protected:
  ::apache::thrift::stdcxx::shared_ptr<VecServiceIf> iface_;
};

class VecServiceNull : virtual public VecServiceIf {
 public:
  virtual ~VecServiceNull() {}
  void add_group(const VecGroup& /* group */) {
    return;
  }
  void get_group(VecGroup& /* _return */, const std::string& /* group_id */) {
    return;
  }
  void del_group(const std::string& /* group_id */) {
    return;
  }
  int64_t add_vector(const std::string& /* group_id */, const VecTensor& /* tensor */) {
    int64_t _return = 0;
    return _return;
  }
  void add_vector_batch(VecTensorIdList& /* _return */, const std::string& /* group_id */, const VecTensorList& /* tensor_list */) {
    return;
  }
  void search_vector(VecSearchResult& /* _return */, const std::string& /* group_id */, const int64_t /* top_k */, const VecTensor& /* tensor */, const VecTimeRangeList& /* time_range_list */) {
    return;
  }
  void search_vector_batch(VecSearchResultList& /* _return */, const std::string& /* group_id */, const int64_t /* top_k */, const VecTensorList& /* tensor_list */, const VecTimeRangeList& /* time_range_list */) {
    return;
  }
};

typedef struct _VecService_add_group_args__isset {
  _VecService_add_group_args__isset() : group(false) {}
  bool group :1;
} _VecService_add_group_args__isset;

class VecService_add_group_args {
 public:

  VecService_add_group_args(const VecService_add_group_args&);
  VecService_add_group_args& operator=(const VecService_add_group_args&);
  VecService_add_group_args() {
  }

  virtual ~VecService_add_group_args() throw();
  VecGroup group;

  _VecService_add_group_args__isset __isset;

  void __set_group(const VecGroup& val);

  bool operator == (const VecService_add_group_args & rhs) const
  {
    if (!(group == rhs.group))
      return false;
    return true;
  }
  bool operator != (const VecService_add_group_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const VecService_add_group_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class VecService_add_group_pargs {
 public:


  virtual ~VecService_add_group_pargs() throw();
  const VecGroup* group;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _VecService_add_group_result__isset {
  _VecService_add_group_result__isset() : e(false) {}
  bool e :1;
} _VecService_add_group_result__isset;

class VecService_add_group_result {
 public:

  VecService_add_group_result(const VecService_add_group_result&);
  VecService_add_group_result& operator=(const VecService_add_group_result&);
  VecService_add_group_result() {
  }

  virtual ~VecService_add_group_result() throw();
  VecException e;

  _VecService_add_group_result__isset __isset;

  void __set_e(const VecException& val);

  bool operator == (const VecService_add_group_result & rhs) const
  {
    if (!(e == rhs.e))
      return false;
    return true;
  }
  bool operator != (const VecService_add_group_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const VecService_add_group_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _VecService_add_group_presult__isset {
  _VecService_add_group_presult__isset() : e(false) {}
  bool e :1;
} _VecService_add_group_presult__isset;

class VecService_add_group_presult {
 public:


  virtual ~VecService_add_group_presult() throw();
  VecException e;

  _VecService_add_group_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _VecService_get_group_args__isset {
  _VecService_get_group_args__isset() : group_id(false) {}
  bool group_id :1;
} _VecService_get_group_args__isset;

class VecService_get_group_args {
 public:

  VecService_get_group_args(const VecService_get_group_args&);
  VecService_get_group_args& operator=(const VecService_get_group_args&);
  VecService_get_group_args() : group_id() {
  }

  virtual ~VecService_get_group_args() throw();
  std::string group_id;

  _VecService_get_group_args__isset __isset;

  void __set_group_id(const std::string& val);

  bool operator == (const VecService_get_group_args & rhs) const
  {
    if (!(group_id == rhs.group_id))
      return false;
    return true;
  }
  bool operator != (const VecService_get_group_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const VecService_get_group_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class VecService_get_group_pargs {
 public:


  virtual ~VecService_get_group_pargs() throw();
  const std::string* group_id;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _VecService_get_group_result__isset {
  _VecService_get_group_result__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _VecService_get_group_result__isset;

class VecService_get_group_result {
 public:

  VecService_get_group_result(const VecService_get_group_result&);
  VecService_get_group_result& operator=(const VecService_get_group_result&);
  VecService_get_group_result() {
  }

  virtual ~VecService_get_group_result() throw();
  VecGroup success;
  VecException e;

  _VecService_get_group_result__isset __isset;

  void __set_success(const VecGroup& val);

  void __set_e(const VecException& val);

  bool operator == (const VecService_get_group_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(e == rhs.e))
      return false;
    return true;
  }
  bool operator != (const VecService_get_group_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const VecService_get_group_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _VecService_get_group_presult__isset {
  _VecService_get_group_presult__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _VecService_get_group_presult__isset;

class VecService_get_group_presult {
 public:


  virtual ~VecService_get_group_presult() throw();
  VecGroup* success;
  VecException e;

  _VecService_get_group_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _VecService_del_group_args__isset {
  _VecService_del_group_args__isset() : group_id(false) {}
  bool group_id :1;
} _VecService_del_group_args__isset;

class VecService_del_group_args {
 public:

  VecService_del_group_args(const VecService_del_group_args&);
  VecService_del_group_args& operator=(const VecService_del_group_args&);
  VecService_del_group_args() : group_id() {
  }

  virtual ~VecService_del_group_args() throw();
  std::string group_id;

  _VecService_del_group_args__isset __isset;

  void __set_group_id(const std::string& val);

  bool operator == (const VecService_del_group_args & rhs) const
  {
    if (!(group_id == rhs.group_id))
      return false;
    return true;
  }
  bool operator != (const VecService_del_group_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const VecService_del_group_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class VecService_del_group_pargs {
 public:


  virtual ~VecService_del_group_pargs() throw();
  const std::string* group_id;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _VecService_del_group_result__isset {
  _VecService_del_group_result__isset() : e(false) {}
  bool e :1;
} _VecService_del_group_result__isset;

class VecService_del_group_result {
 public:

  VecService_del_group_result(const VecService_del_group_result&);
  VecService_del_group_result& operator=(const VecService_del_group_result&);
  VecService_del_group_result() {
  }

  virtual ~VecService_del_group_result() throw();
  VecException e;

  _VecService_del_group_result__isset __isset;

  void __set_e(const VecException& val);

  bool operator == (const VecService_del_group_result & rhs) const
  {
    if (!(e == rhs.e))
      return false;
    return true;
  }
  bool operator != (const VecService_del_group_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const VecService_del_group_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _VecService_del_group_presult__isset {
  _VecService_del_group_presult__isset() : e(false) {}
  bool e :1;
} _VecService_del_group_presult__isset;

class VecService_del_group_presult {
 public:


  virtual ~VecService_del_group_presult() throw();
  VecException e;

  _VecService_del_group_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _VecService_add_vector_args__isset {
  _VecService_add_vector_args__isset() : group_id(false), tensor(false) {}
  bool group_id :1;
  bool tensor :1;
} _VecService_add_vector_args__isset;

class VecService_add_vector_args {
 public:

  VecService_add_vector_args(const VecService_add_vector_args&);
  VecService_add_vector_args& operator=(const VecService_add_vector_args&);
  VecService_add_vector_args() : group_id() {
  }

  virtual ~VecService_add_vector_args() throw();
  std::string group_id;
  VecTensor tensor;

  _VecService_add_vector_args__isset __isset;

  void __set_group_id(const std::string& val);

  void __set_tensor(const VecTensor& val);

  bool operator == (const VecService_add_vector_args & rhs) const
  {
    if (!(group_id == rhs.group_id))
      return false;
    if (!(tensor == rhs.tensor))
      return false;
    return true;
  }
  bool operator != (const VecService_add_vector_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const VecService_add_vector_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class VecService_add_vector_pargs {
 public:


  virtual ~VecService_add_vector_pargs() throw();
  const std::string* group_id;
  const VecTensor* tensor;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _VecService_add_vector_result__isset {
  _VecService_add_vector_result__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _VecService_add_vector_result__isset;

class VecService_add_vector_result {
 public:

  VecService_add_vector_result(const VecService_add_vector_result&);
  VecService_add_vector_result& operator=(const VecService_add_vector_result&);
  VecService_add_vector_result() : success(0) {
  }

  virtual ~VecService_add_vector_result() throw();
  int64_t success;
  VecException e;

  _VecService_add_vector_result__isset __isset;

  void __set_success(const int64_t val);

  void __set_e(const VecException& val);

  bool operator == (const VecService_add_vector_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(e == rhs.e))
      return false;
    return true;
  }
  bool operator != (const VecService_add_vector_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const VecService_add_vector_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _VecService_add_vector_presult__isset {
  _VecService_add_vector_presult__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _VecService_add_vector_presult__isset;

class VecService_add_vector_presult {
 public:


  virtual ~VecService_add_vector_presult() throw();
  int64_t* success;
  VecException e;

  _VecService_add_vector_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _VecService_add_vector_batch_args__isset {
  _VecService_add_vector_batch_args__isset() : group_id(false), tensor_list(false) {}
  bool group_id :1;
  bool tensor_list :1;
} _VecService_add_vector_batch_args__isset;

class VecService_add_vector_batch_args {
 public:

  VecService_add_vector_batch_args(const VecService_add_vector_batch_args&);
  VecService_add_vector_batch_args& operator=(const VecService_add_vector_batch_args&);
  VecService_add_vector_batch_args() : group_id() {
  }

  virtual ~VecService_add_vector_batch_args() throw();
  std::string group_id;
  VecTensorList tensor_list;

  _VecService_add_vector_batch_args__isset __isset;

  void __set_group_id(const std::string& val);

  void __set_tensor_list(const VecTensorList& val);

  bool operator == (const VecService_add_vector_batch_args & rhs) const
  {
    if (!(group_id == rhs.group_id))
      return false;
    if (!(tensor_list == rhs.tensor_list))
      return false;
    return true;
  }
  bool operator != (const VecService_add_vector_batch_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const VecService_add_vector_batch_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class VecService_add_vector_batch_pargs {
 public:


  virtual ~VecService_add_vector_batch_pargs() throw();
  const std::string* group_id;
  const VecTensorList* tensor_list;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _VecService_add_vector_batch_result__isset {
  _VecService_add_vector_batch_result__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _VecService_add_vector_batch_result__isset;

class VecService_add_vector_batch_result {
 public:

  VecService_add_vector_batch_result(const VecService_add_vector_batch_result&);
  VecService_add_vector_batch_result& operator=(const VecService_add_vector_batch_result&);
  VecService_add_vector_batch_result() {
  }

  virtual ~VecService_add_vector_batch_result() throw();
  VecTensorIdList success;
  VecException e;

  _VecService_add_vector_batch_result__isset __isset;

  void __set_success(const VecTensorIdList& val);

  void __set_e(const VecException& val);

  bool operator == (const VecService_add_vector_batch_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(e == rhs.e))
      return false;
    return true;
  }
  bool operator != (const VecService_add_vector_batch_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const VecService_add_vector_batch_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _VecService_add_vector_batch_presult__isset {
  _VecService_add_vector_batch_presult__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _VecService_add_vector_batch_presult__isset;

class VecService_add_vector_batch_presult {
 public:


  virtual ~VecService_add_vector_batch_presult() throw();
  VecTensorIdList* success;
  VecException e;

  _VecService_add_vector_batch_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _VecService_search_vector_args__isset {
  _VecService_search_vector_args__isset() : group_id(false), top_k(false), tensor(false), time_range_list(false) {}
  bool group_id :1;
  bool top_k :1;
  bool tensor :1;
  bool time_range_list :1;
} _VecService_search_vector_args__isset;

class VecService_search_vector_args {
 public:

  VecService_search_vector_args(const VecService_search_vector_args&);
  VecService_search_vector_args& operator=(const VecService_search_vector_args&);
  VecService_search_vector_args() : group_id(), top_k(0) {
  }

  virtual ~VecService_search_vector_args() throw();
  std::string group_id;
  int64_t top_k;
  VecTensor tensor;
  VecTimeRangeList time_range_list;

  _VecService_search_vector_args__isset __isset;

  void __set_group_id(const std::string& val);

  void __set_top_k(const int64_t val);

  void __set_tensor(const VecTensor& val);

  void __set_time_range_list(const VecTimeRangeList& val);

  bool operator == (const VecService_search_vector_args & rhs) const
  {
    if (!(group_id == rhs.group_id))
      return false;
    if (!(top_k == rhs.top_k))
      return false;
    if (!(tensor == rhs.tensor))
      return false;
    if (!(time_range_list == rhs.time_range_list))
      return false;
    return true;
  }
  bool operator != (const VecService_search_vector_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const VecService_search_vector_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class VecService_search_vector_pargs {
 public:


  virtual ~VecService_search_vector_pargs() throw();
  const std::string* group_id;
  const int64_t* top_k;
  const VecTensor* tensor;
  const VecTimeRangeList* time_range_list;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _VecService_search_vector_result__isset {
  _VecService_search_vector_result__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _VecService_search_vector_result__isset;

class VecService_search_vector_result {
 public:

  VecService_search_vector_result(const VecService_search_vector_result&);
  VecService_search_vector_result& operator=(const VecService_search_vector_result&);
  VecService_search_vector_result() {
  }

  virtual ~VecService_search_vector_result() throw();
  VecSearchResult success;
  VecException e;

  _VecService_search_vector_result__isset __isset;

  void __set_success(const VecSearchResult& val);

  void __set_e(const VecException& val);

  bool operator == (const VecService_search_vector_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(e == rhs.e))
      return false;
    return true;
  }
  bool operator != (const VecService_search_vector_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const VecService_search_vector_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _VecService_search_vector_presult__isset {
  _VecService_search_vector_presult__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _VecService_search_vector_presult__isset;

class VecService_search_vector_presult {
 public:


  virtual ~VecService_search_vector_presult() throw();
  VecSearchResult* success;
  VecException e;

  _VecService_search_vector_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _VecService_search_vector_batch_args__isset {
  _VecService_search_vector_batch_args__isset() : group_id(false), top_k(false), tensor_list(false), time_range_list(false) {}
  bool group_id :1;
  bool top_k :1;
  bool tensor_list :1;
  bool time_range_list :1;
} _VecService_search_vector_batch_args__isset;

class VecService_search_vector_batch_args {
 public:

  VecService_search_vector_batch_args(const VecService_search_vector_batch_args&);
  VecService_search_vector_batch_args& operator=(const VecService_search_vector_batch_args&);
  VecService_search_vector_batch_args() : group_id(), top_k(0) {
  }

  virtual ~VecService_search_vector_batch_args() throw();
  std::string group_id;
  int64_t top_k;
  VecTensorList tensor_list;
  VecTimeRangeList time_range_list;

  _VecService_search_vector_batch_args__isset __isset;

  void __set_group_id(const std::string& val);

  void __set_top_k(const int64_t val);

  void __set_tensor_list(const VecTensorList& val);

  void __set_time_range_list(const VecTimeRangeList& val);

  bool operator == (const VecService_search_vector_batch_args & rhs) const
  {
    if (!(group_id == rhs.group_id))
      return false;
    if (!(top_k == rhs.top_k))
      return false;
    if (!(tensor_list == rhs.tensor_list))
      return false;
    if (!(time_range_list == rhs.time_range_list))
      return false;
    return true;
  }
  bool operator != (const VecService_search_vector_batch_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const VecService_search_vector_batch_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class VecService_search_vector_batch_pargs {
 public:


  virtual ~VecService_search_vector_batch_pargs() throw();
  const std::string* group_id;
  const int64_t* top_k;
  const VecTensorList* tensor_list;
  const VecTimeRangeList* time_range_list;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _VecService_search_vector_batch_result__isset {
  _VecService_search_vector_batch_result__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _VecService_search_vector_batch_result__isset;

class VecService_search_vector_batch_result {
 public:

  VecService_search_vector_batch_result(const VecService_search_vector_batch_result&);
  VecService_search_vector_batch_result& operator=(const VecService_search_vector_batch_result&);
  VecService_search_vector_batch_result() {
  }

  virtual ~VecService_search_vector_batch_result() throw();
  VecSearchResultList success;
  VecException e;

  _VecService_search_vector_batch_result__isset __isset;

  void __set_success(const VecSearchResultList& val);

  void __set_e(const VecException& val);

  bool operator == (const VecService_search_vector_batch_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(e == rhs.e))
      return false;
    return true;
  }
  bool operator != (const VecService_search_vector_batch_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const VecService_search_vector_batch_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _VecService_search_vector_batch_presult__isset {
  _VecService_search_vector_batch_presult__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _VecService_search_vector_batch_presult__isset;

class VecService_search_vector_batch_presult {
 public:


  virtual ~VecService_search_vector_batch_presult() throw();
  VecSearchResultList* success;
  VecException e;

  _VecService_search_vector_batch_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

class VecServiceClient : virtual public VecServiceIf {
 public:
  VecServiceClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  VecServiceClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void add_group(const VecGroup& group);
  void send_add_group(const VecGroup& group);
  void recv_add_group();
  void get_group(VecGroup& _return, const std::string& group_id);
  void send_get_group(const std::string& group_id);
  void recv_get_group(VecGroup& _return);
  void del_group(const std::string& group_id);
  void send_del_group(const std::string& group_id);
  void recv_del_group();
  int64_t add_vector(const std::string& group_id, const VecTensor& tensor);
  void send_add_vector(const std::string& group_id, const VecTensor& tensor);
  int64_t recv_add_vector();
  void add_vector_batch(VecTensorIdList& _return, const std::string& group_id, const VecTensorList& tensor_list);
  void send_add_vector_batch(const std::string& group_id, const VecTensorList& tensor_list);
  void recv_add_vector_batch(VecTensorIdList& _return);
  void search_vector(VecSearchResult& _return, const std::string& group_id, const int64_t top_k, const VecTensor& tensor, const VecTimeRangeList& time_range_list);
  void send_search_vector(const std::string& group_id, const int64_t top_k, const VecTensor& tensor, const VecTimeRangeList& time_range_list);
  void recv_search_vector(VecSearchResult& _return);
  void search_vector_batch(VecSearchResultList& _return, const std::string& group_id, const int64_t top_k, const VecTensorList& tensor_list, const VecTimeRangeList& time_range_list);
  void send_search_vector_batch(const std::string& group_id, const int64_t top_k, const VecTensorList& tensor_list, const VecTimeRangeList& time_range_list);
  void recv_search_vector_batch(VecSearchResultList& _return);
 protected:
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class VecServiceProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  ::apache::thrift::stdcxx::shared_ptr<VecServiceIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (VecServiceProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_add_group(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_get_group(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_del_group(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_add_vector(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_add_vector_batch(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_search_vector(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_search_vector_batch(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  VecServiceProcessor(::apache::thrift::stdcxx::shared_ptr<VecServiceIf> iface) :
    iface_(iface) {
    processMap_["add_group"] = &VecServiceProcessor::process_add_group;
    processMap_["get_group"] = &VecServiceProcessor::process_get_group;
    processMap_["del_group"] = &VecServiceProcessor::process_del_group;
    processMap_["add_vector"] = &VecServiceProcessor::process_add_vector;
    processMap_["add_vector_batch"] = &VecServiceProcessor::process_add_vector_batch;
    processMap_["search_vector"] = &VecServiceProcessor::process_search_vector;
    processMap_["search_vector_batch"] = &VecServiceProcessor::process_search_vector_batch;
  }

  virtual ~VecServiceProcessor() {}
};

class VecServiceProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  VecServiceProcessorFactory(const ::apache::thrift::stdcxx::shared_ptr< VecServiceIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::apache::thrift::stdcxx::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::apache::thrift::stdcxx::shared_ptr< VecServiceIfFactory > handlerFactory_;
};

class VecServiceMultiface : virtual public VecServiceIf {
 public:
  VecServiceMultiface(std::vector<apache::thrift::stdcxx::shared_ptr<VecServiceIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~VecServiceMultiface() {}
 protected:
  std::vector<apache::thrift::stdcxx::shared_ptr<VecServiceIf> > ifaces_;
  VecServiceMultiface() {}
  void add(::apache::thrift::stdcxx::shared_ptr<VecServiceIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  void add_group(const VecGroup& group) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->add_group(group);
    }
    ifaces_[i]->add_group(group);
  }

  void get_group(VecGroup& _return, const std::string& group_id) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->get_group(_return, group_id);
    }
    ifaces_[i]->get_group(_return, group_id);
    return;
  }

  void del_group(const std::string& group_id) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->del_group(group_id);
    }
    ifaces_[i]->del_group(group_id);
  }

  int64_t add_vector(const std::string& group_id, const VecTensor& tensor) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->add_vector(group_id, tensor);
    }
    return ifaces_[i]->add_vector(group_id, tensor);
  }

  void add_vector_batch(VecTensorIdList& _return, const std::string& group_id, const VecTensorList& tensor_list) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->add_vector_batch(_return, group_id, tensor_list);
    }
    ifaces_[i]->add_vector_batch(_return, group_id, tensor_list);
    return;
  }

  void search_vector(VecSearchResult& _return, const std::string& group_id, const int64_t top_k, const VecTensor& tensor, const VecTimeRangeList& time_range_list) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->search_vector(_return, group_id, top_k, tensor, time_range_list);
    }
    ifaces_[i]->search_vector(_return, group_id, top_k, tensor, time_range_list);
    return;
  }

  void search_vector_batch(VecSearchResultList& _return, const std::string& group_id, const int64_t top_k, const VecTensorList& tensor_list, const VecTimeRangeList& time_range_list) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->search_vector_batch(_return, group_id, top_k, tensor_list, time_range_list);
    }
    ifaces_[i]->search_vector_batch(_return, group_id, top_k, tensor_list, time_range_list);
    return;
  }

};

// The 'concurrent' client is a thread safe client that correctly handles
// out of order responses.  It is slower than the regular client, so should
// only be used when you need to share a connection among multiple threads
class VecServiceConcurrentClient : virtual public VecServiceIf {
 public:
  VecServiceConcurrentClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  VecServiceConcurrentClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void add_group(const VecGroup& group);
  int32_t send_add_group(const VecGroup& group);
  void recv_add_group(const int32_t seqid);
  void get_group(VecGroup& _return, const std::string& group_id);
  int32_t send_get_group(const std::string& group_id);
  void recv_get_group(VecGroup& _return, const int32_t seqid);
  void del_group(const std::string& group_id);
  int32_t send_del_group(const std::string& group_id);
  void recv_del_group(const int32_t seqid);
  int64_t add_vector(const std::string& group_id, const VecTensor& tensor);
  int32_t send_add_vector(const std::string& group_id, const VecTensor& tensor);
  int64_t recv_add_vector(const int32_t seqid);
  void add_vector_batch(VecTensorIdList& _return, const std::string& group_id, const VecTensorList& tensor_list);
  int32_t send_add_vector_batch(const std::string& group_id, const VecTensorList& tensor_list);
  void recv_add_vector_batch(VecTensorIdList& _return, const int32_t seqid);
  void search_vector(VecSearchResult& _return, const std::string& group_id, const int64_t top_k, const VecTensor& tensor, const VecTimeRangeList& time_range_list);
  int32_t send_search_vector(const std::string& group_id, const int64_t top_k, const VecTensor& tensor, const VecTimeRangeList& time_range_list);
  void recv_search_vector(VecSearchResult& _return, const int32_t seqid);
  void search_vector_batch(VecSearchResultList& _return, const std::string& group_id, const int64_t top_k, const VecTensorList& tensor_list, const VecTimeRangeList& time_range_list);
  int32_t send_search_vector_batch(const std::string& group_id, const int64_t top_k, const VecTensorList& tensor_list, const VecTimeRangeList& time_range_list);
  void recv_search_vector_batch(VecSearchResultList& _return, const int32_t seqid);
 protected:
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
  ::apache::thrift::async::TConcurrentClientSyncInfo sync_;
};

#ifdef _MSC_VER
  #pragma warning( pop )
#endif



#endif
