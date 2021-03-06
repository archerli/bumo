// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: merkeltrie.proto

#ifndef PROTOBUF_merkeltrie_2eproto__INCLUDED
#define PROTOBUF_merkeltrie_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protocol {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_merkeltrie_2eproto();
void protobuf_AssignDesc_merkeltrie_2eproto();
void protobuf_ShutdownFile_merkeltrie_2eproto();

class Child;
class Node;

enum CHILDTYPE {
  NONE = 0,
  INNER = 1,
  LEAF = 2,
  CHILDTYPE_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  CHILDTYPE_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool CHILDTYPE_IsValid(int value);
const CHILDTYPE CHILDTYPE_MIN = NONE;
const CHILDTYPE CHILDTYPE_MAX = LEAF;
const int CHILDTYPE_ARRAYSIZE = CHILDTYPE_MAX + 1;

const ::google::protobuf::EnumDescriptor* CHILDTYPE_descriptor();
inline const ::std::string& CHILDTYPE_Name(CHILDTYPE value) {
  return ::google::protobuf::internal::NameOfEnum(
    CHILDTYPE_descriptor(), value);
}
inline bool CHILDTYPE_Parse(
    const ::std::string& name, CHILDTYPE* value) {
  return ::google::protobuf::internal::ParseNamedEnum<CHILDTYPE>(
    CHILDTYPE_descriptor(), name, value);
}
// ===================================================================

class Child : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:protocol.Child) */ {
 public:
  Child();
  virtual ~Child();

  Child(const Child& from);

  inline Child& operator=(const Child& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Child& default_instance();

  void Swap(Child* other);

  // implements Message ----------------------------------------------

  inline Child* New() const { return New(NULL); }

  Child* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Child& from);
  void MergeFrom(const Child& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Child* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional bytes sublocation = 1;
  void clear_sublocation();
  static const int kSublocationFieldNumber = 1;
  const ::std::string& sublocation() const;
  void set_sublocation(const ::std::string& value);
  void set_sublocation(const char* value);
  void set_sublocation(const void* value, size_t size);
  ::std::string* mutable_sublocation();
  ::std::string* release_sublocation();
  void set_allocated_sublocation(::std::string* sublocation);

  // optional bytes hash = 2;
  void clear_hash();
  static const int kHashFieldNumber = 2;
  const ::std::string& hash() const;
  void set_hash(const ::std::string& value);
  void set_hash(const char* value);
  void set_hash(const void* value, size_t size);
  ::std::string* mutable_hash();
  ::std::string* release_hash();
  void set_allocated_hash(::std::string* hash);

  // optional .protocol.CHILDTYPE childtype = 3;
  void clear_childtype();
  static const int kChildtypeFieldNumber = 3;
  ::protocol::CHILDTYPE childtype() const;
  void set_childtype(::protocol::CHILDTYPE value);

  // @@protoc_insertion_point(class_scope:protocol.Child)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr sublocation_;
  ::google::protobuf::internal::ArenaStringPtr hash_;
  int childtype_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_merkeltrie_2eproto();
  friend void protobuf_AssignDesc_merkeltrie_2eproto();
  friend void protobuf_ShutdownFile_merkeltrie_2eproto();

  void InitAsDefaultInstance();
  static Child* default_instance_;
};
// -------------------------------------------------------------------

class Node : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:protocol.Node) */ {
 public:
  Node();
  virtual ~Node();

  Node(const Node& from);

  inline Node& operator=(const Node& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Node& default_instance();

  void Swap(Node* other);

  // implements Message ----------------------------------------------

  inline Node* New() const { return New(NULL); }

  Node* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Node& from);
  void MergeFrom(const Node& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Node* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .protocol.Child children = 1;
  int children_size() const;
  void clear_children();
  static const int kChildrenFieldNumber = 1;
  const ::protocol::Child& children(int index) const;
  ::protocol::Child* mutable_children(int index);
  ::protocol::Child* add_children();
  ::google::protobuf::RepeatedPtrField< ::protocol::Child >*
      mutable_children();
  const ::google::protobuf::RepeatedPtrField< ::protocol::Child >&
      children() const;

  // @@protoc_insertion_point(class_scope:protocol.Node)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::RepeatedPtrField< ::protocol::Child > children_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_merkeltrie_2eproto();
  friend void protobuf_AssignDesc_merkeltrie_2eproto();
  friend void protobuf_ShutdownFile_merkeltrie_2eproto();

  void InitAsDefaultInstance();
  static Node* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Child

// optional bytes sublocation = 1;
inline void Child::clear_sublocation() {
  sublocation_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Child::sublocation() const {
  // @@protoc_insertion_point(field_get:protocol.Child.sublocation)
  return sublocation_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Child::set_sublocation(const ::std::string& value) {
  
  sublocation_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.Child.sublocation)
}
inline void Child::set_sublocation(const char* value) {
  
  sublocation_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.Child.sublocation)
}
inline void Child::set_sublocation(const void* value, size_t size) {
  
  sublocation_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.Child.sublocation)
}
inline ::std::string* Child::mutable_sublocation() {
  
  // @@protoc_insertion_point(field_mutable:protocol.Child.sublocation)
  return sublocation_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Child::release_sublocation() {
  // @@protoc_insertion_point(field_release:protocol.Child.sublocation)
  
  return sublocation_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Child::set_allocated_sublocation(::std::string* sublocation) {
  if (sublocation != NULL) {
    
  } else {
    
  }
  sublocation_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), sublocation);
  // @@protoc_insertion_point(field_set_allocated:protocol.Child.sublocation)
}

// optional bytes hash = 2;
inline void Child::clear_hash() {
  hash_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Child::hash() const {
  // @@protoc_insertion_point(field_get:protocol.Child.hash)
  return hash_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Child::set_hash(const ::std::string& value) {
  
  hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.Child.hash)
}
inline void Child::set_hash(const char* value) {
  
  hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.Child.hash)
}
inline void Child::set_hash(const void* value, size_t size) {
  
  hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.Child.hash)
}
inline ::std::string* Child::mutable_hash() {
  
  // @@protoc_insertion_point(field_mutable:protocol.Child.hash)
  return hash_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Child::release_hash() {
  // @@protoc_insertion_point(field_release:protocol.Child.hash)
  
  return hash_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Child::set_allocated_hash(::std::string* hash) {
  if (hash != NULL) {
    
  } else {
    
  }
  hash_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), hash);
  // @@protoc_insertion_point(field_set_allocated:protocol.Child.hash)
}

// optional .protocol.CHILDTYPE childtype = 3;
inline void Child::clear_childtype() {
  childtype_ = 0;
}
inline ::protocol::CHILDTYPE Child::childtype() const {
  // @@protoc_insertion_point(field_get:protocol.Child.childtype)
  return static_cast< ::protocol::CHILDTYPE >(childtype_);
}
inline void Child::set_childtype(::protocol::CHILDTYPE value) {
  
  childtype_ = value;
  // @@protoc_insertion_point(field_set:protocol.Child.childtype)
}

// -------------------------------------------------------------------

// Node

// repeated .protocol.Child children = 1;
inline int Node::children_size() const {
  return children_.size();
}
inline void Node::clear_children() {
  children_.Clear();
}
inline const ::protocol::Child& Node::children(int index) const {
  // @@protoc_insertion_point(field_get:protocol.Node.children)
  return children_.Get(index);
}
inline ::protocol::Child* Node::mutable_children(int index) {
  // @@protoc_insertion_point(field_mutable:protocol.Node.children)
  return children_.Mutable(index);
}
inline ::protocol::Child* Node::add_children() {
  // @@protoc_insertion_point(field_add:protocol.Node.children)
  return children_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::protocol::Child >*
Node::mutable_children() {
  // @@protoc_insertion_point(field_mutable_list:protocol.Node.children)
  return &children_;
}
inline const ::google::protobuf::RepeatedPtrField< ::protocol::Child >&
Node::children() const {
  // @@protoc_insertion_point(field_list:protocol.Node.children)
  return children_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace protocol

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::protocol::CHILDTYPE> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::protocol::CHILDTYPE>() {
  return ::protocol::CHILDTYPE_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_merkeltrie_2eproto__INCLUDED
