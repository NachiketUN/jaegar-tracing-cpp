/**
 * Autogenerated by Thrift Compiler (0.11.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef ZipkinCollector_H
#define ZipkinCollector_H

#include <thrift/TDispatchProcessor.h>
#include <thrift/async/TConcurrentClientSyncInfo.h>
#include "zipkincore_types.h"

namespace twitter { namespace zipkin { namespace thrift {

#ifdef _MSC_VER
  #pragma warning( push )
  #pragma warning (disable : 4250 ) //inheriting methods via dominance 
#endif

class ZipkinCollectorIf {
 public:
  virtual ~ZipkinCollectorIf() {}
  virtual void submitZipkinBatch(std::vector<Response> & _return, const std::vector<Span> & spans) = 0;
};

class ZipkinCollectorIfFactory {
 public:
  typedef ZipkinCollectorIf Handler;

  virtual ~ZipkinCollectorIfFactory() {}

  virtual ZipkinCollectorIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(ZipkinCollectorIf* /* handler */) = 0;
};

class ZipkinCollectorIfSingletonFactory : virtual public ZipkinCollectorIfFactory {
 public:
  ZipkinCollectorIfSingletonFactory(const ::apache::thrift::stdcxx::shared_ptr<ZipkinCollectorIf>& iface) : iface_(iface) {}
  virtual ~ZipkinCollectorIfSingletonFactory() {}

  virtual ZipkinCollectorIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(ZipkinCollectorIf* /* handler */) {}

 protected:
  ::apache::thrift::stdcxx::shared_ptr<ZipkinCollectorIf> iface_;
};

class ZipkinCollectorNull : virtual public ZipkinCollectorIf {
 public:
  virtual ~ZipkinCollectorNull() {}
  void submitZipkinBatch(std::vector<Response> & /* _return */, const std::vector<Span> & /* spans */) {
    return;
  }
};

typedef struct _ZipkinCollector_submitZipkinBatch_args__isset {
  _ZipkinCollector_submitZipkinBatch_args__isset() : spans(false) {}
  bool spans :1;
} _ZipkinCollector_submitZipkinBatch_args__isset;

class ZipkinCollector_submitZipkinBatch_args {
 public:

  ZipkinCollector_submitZipkinBatch_args(const ZipkinCollector_submitZipkinBatch_args&);
  ZipkinCollector_submitZipkinBatch_args& operator=(const ZipkinCollector_submitZipkinBatch_args&);
  ZipkinCollector_submitZipkinBatch_args() {
  }

  virtual ~ZipkinCollector_submitZipkinBatch_args() throw();
  std::vector<Span>  spans;

  _ZipkinCollector_submitZipkinBatch_args__isset __isset;

  void __set_spans(const std::vector<Span> & val);

  bool operator == (const ZipkinCollector_submitZipkinBatch_args & rhs) const
  {
    if (!(spans == rhs.spans))
      return false;
    return true;
  }
  bool operator != (const ZipkinCollector_submitZipkinBatch_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ZipkinCollector_submitZipkinBatch_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class ZipkinCollector_submitZipkinBatch_pargs {
 public:


  virtual ~ZipkinCollector_submitZipkinBatch_pargs() throw();
  const std::vector<Span> * spans;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _ZipkinCollector_submitZipkinBatch_result__isset {
  _ZipkinCollector_submitZipkinBatch_result__isset() : success(false) {}
  bool success :1;
} _ZipkinCollector_submitZipkinBatch_result__isset;

class ZipkinCollector_submitZipkinBatch_result {
 public:

  ZipkinCollector_submitZipkinBatch_result(const ZipkinCollector_submitZipkinBatch_result&);
  ZipkinCollector_submitZipkinBatch_result& operator=(const ZipkinCollector_submitZipkinBatch_result&);
  ZipkinCollector_submitZipkinBatch_result() {
  }

  virtual ~ZipkinCollector_submitZipkinBatch_result() throw();
  std::vector<Response>  success;

  _ZipkinCollector_submitZipkinBatch_result__isset __isset;

  void __set_success(const std::vector<Response> & val);

  bool operator == (const ZipkinCollector_submitZipkinBatch_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const ZipkinCollector_submitZipkinBatch_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ZipkinCollector_submitZipkinBatch_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _ZipkinCollector_submitZipkinBatch_presult__isset {
  _ZipkinCollector_submitZipkinBatch_presult__isset() : success(false) {}
  bool success :1;
} _ZipkinCollector_submitZipkinBatch_presult__isset;

class ZipkinCollector_submitZipkinBatch_presult {
 public:


  virtual ~ZipkinCollector_submitZipkinBatch_presult() throw();
  std::vector<Response> * success;

  _ZipkinCollector_submitZipkinBatch_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

class ZipkinCollectorClient : virtual public ZipkinCollectorIf {
 public:
  ZipkinCollectorClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  ZipkinCollectorClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
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
  void submitZipkinBatch(std::vector<Response> & _return, const std::vector<Span> & spans);
  void send_submitZipkinBatch(const std::vector<Span> & spans);
  void recv_submitZipkinBatch(std::vector<Response> & _return);
 protected:
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class ZipkinCollectorProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  ::apache::thrift::stdcxx::shared_ptr<ZipkinCollectorIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (ZipkinCollectorProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_submitZipkinBatch(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  ZipkinCollectorProcessor(::apache::thrift::stdcxx::shared_ptr<ZipkinCollectorIf> iface) :
    iface_(iface) {
    processMap_["submitZipkinBatch"] = &ZipkinCollectorProcessor::process_submitZipkinBatch;
  }

  virtual ~ZipkinCollectorProcessor() {}
};

class ZipkinCollectorProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  ZipkinCollectorProcessorFactory(const ::apache::thrift::stdcxx::shared_ptr< ZipkinCollectorIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::apache::thrift::stdcxx::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::apache::thrift::stdcxx::shared_ptr< ZipkinCollectorIfFactory > handlerFactory_;
};

class ZipkinCollectorMultiface : virtual public ZipkinCollectorIf {
 public:
  ZipkinCollectorMultiface(std::vector<apache::thrift::stdcxx::shared_ptr<ZipkinCollectorIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~ZipkinCollectorMultiface() {}
 protected:
  std::vector<apache::thrift::stdcxx::shared_ptr<ZipkinCollectorIf> > ifaces_;
  ZipkinCollectorMultiface() {}
  void add(::apache::thrift::stdcxx::shared_ptr<ZipkinCollectorIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  void submitZipkinBatch(std::vector<Response> & _return, const std::vector<Span> & spans) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->submitZipkinBatch(_return, spans);
    }
    ifaces_[i]->submitZipkinBatch(_return, spans);
    return;
  }

};

// The 'concurrent' client is a thread safe client that correctly handles
// out of order responses.  It is slower than the regular client, so should
// only be used when you need to share a connection among multiple threads
class ZipkinCollectorConcurrentClient : virtual public ZipkinCollectorIf {
 public:
  ZipkinCollectorConcurrentClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  ZipkinCollectorConcurrentClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
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
  void submitZipkinBatch(std::vector<Response> & _return, const std::vector<Span> & spans);
  int32_t send_submitZipkinBatch(const std::vector<Span> & spans);
  void recv_submitZipkinBatch(std::vector<Response> & _return, const int32_t seqid);
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

}}} // namespace

#endif
