// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: can.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_can_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_can_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "header.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_can_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_can_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_can_2eproto;
namespace synapse {
namespace msgs {
class Can;
class CanDefaultTypeInternal;
extern CanDefaultTypeInternal _Can_default_instance_;
}  // namespace msgs
}  // namespace synapse
PROTOBUF_NAMESPACE_OPEN
template<> ::synapse::msgs::Can* Arena::CreateMaybeMessage<::synapse::msgs::Can>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace synapse {
namespace msgs {

// ===================================================================

class Can PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:synapse.msgs.Can) */ {
 public:
  inline Can() : Can(nullptr) {};
  virtual ~Can();

  Can(const Can& from);
  Can(Can&& from) noexcept
    : Can() {
    *this = ::std::move(from);
  }

  inline Can& operator=(const Can& from) {
    CopyFrom(from);
    return *this;
  }
  inline Can& operator=(Can&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Can& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Can* internal_default_instance() {
    return reinterpret_cast<const Can*>(
               &_Can_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Can& a, Can& b) {
    a.Swap(&b);
  }
  inline void Swap(Can* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Can* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Can* New() const final {
    return CreateMaybeMessage<Can>(nullptr);
  }

  Can* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Can>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Can& from);
  void MergeFrom(const Can& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Can* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "synapse.msgs.Can";
  }
  protected:
  explicit Can(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_can_2eproto);
    return ::descriptor_table_can_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kDataFieldNumber = 6,
    kHeaderFieldNumber = 1,
    kIdFieldNumber = 2,
    kIsRtrFieldNumber = 3,
    kIsExtendedFieldNumber = 4,
    kDlcFieldNumber = 5,
  };
  // repeated uint32 data = 6;
  int data_size() const;
  private:
  int _internal_data_size() const;
  public:
  void clear_data();
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_data(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >&
      _internal_data() const;
  void _internal_add_data(::PROTOBUF_NAMESPACE_ID::uint32 value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >*
      _internal_mutable_data();
  public:
  ::PROTOBUF_NAMESPACE_ID::uint32 data(int index) const;
  void set_data(int index, ::PROTOBUF_NAMESPACE_ID::uint32 value);
  void add_data(::PROTOBUF_NAMESPACE_ID::uint32 value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >&
      data() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >*
      mutable_data();

  // .synapse.msgs.Header header = 1;
  bool has_header() const;
  private:
  bool _internal_has_header() const;
  public:
  void clear_header();
  const ::synapse::msgs::Header& header() const;
  ::synapse::msgs::Header* release_header();
  ::synapse::msgs::Header* mutable_header();
  void set_allocated_header(::synapse::msgs::Header* header);
  private:
  const ::synapse::msgs::Header& _internal_header() const;
  ::synapse::msgs::Header* _internal_mutable_header();
  public:
  void unsafe_arena_set_allocated_header(
      ::synapse::msgs::Header* header);
  ::synapse::msgs::Header* unsafe_arena_release_header();

  // uint32 id = 2;
  void clear_id();
  ::PROTOBUF_NAMESPACE_ID::uint32 id() const;
  void set_id(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_id() const;
  void _internal_set_id(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // bool is_rtr = 3;
  void clear_is_rtr();
  bool is_rtr() const;
  void set_is_rtr(bool value);
  private:
  bool _internal_is_rtr() const;
  void _internal_set_is_rtr(bool value);
  public:

  // bool is_extended = 4;
  void clear_is_extended();
  bool is_extended() const;
  void set_is_extended(bool value);
  private:
  bool _internal_is_extended() const;
  void _internal_set_is_extended(bool value);
  public:

  // uint32 dlc = 5;
  void clear_dlc();
  ::PROTOBUF_NAMESPACE_ID::uint32 dlc() const;
  void set_dlc(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_dlc() const;
  void _internal_set_dlc(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // @@protoc_insertion_point(class_scope:synapse.msgs.Can)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 > data_;
  mutable std::atomic<int> _data_cached_byte_size_;
  ::synapse::msgs::Header* header_;
  ::PROTOBUF_NAMESPACE_ID::uint32 id_;
  bool is_rtr_;
  bool is_extended_;
  ::PROTOBUF_NAMESPACE_ID::uint32 dlc_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_can_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Can

// .synapse.msgs.Header header = 1;
inline bool Can::_internal_has_header() const {
  return this != internal_default_instance() && header_ != nullptr;
}
inline bool Can::has_header() const {
  return _internal_has_header();
}
inline const ::synapse::msgs::Header& Can::_internal_header() const {
  const ::synapse::msgs::Header* p = header_;
  return p != nullptr ? *p : *reinterpret_cast<const ::synapse::msgs::Header*>(
      &::synapse::msgs::_Header_default_instance_);
}
inline const ::synapse::msgs::Header& Can::header() const {
  // @@protoc_insertion_point(field_get:synapse.msgs.Can.header)
  return _internal_header();
}
inline void Can::unsafe_arena_set_allocated_header(
    ::synapse::msgs::Header* header) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(header_);
  }
  header_ = header;
  if (header) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:synapse.msgs.Can.header)
}
inline ::synapse::msgs::Header* Can::release_header() {
  auto temp = unsafe_arena_release_header();
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::synapse::msgs::Header* Can::unsafe_arena_release_header() {
  // @@protoc_insertion_point(field_release:synapse.msgs.Can.header)
  
  ::synapse::msgs::Header* temp = header_;
  header_ = nullptr;
  return temp;
}
inline ::synapse::msgs::Header* Can::_internal_mutable_header() {
  
  if (header_ == nullptr) {
    auto* p = CreateMaybeMessage<::synapse::msgs::Header>(GetArena());
    header_ = p;
  }
  return header_;
}
inline ::synapse::msgs::Header* Can::mutable_header() {
  // @@protoc_insertion_point(field_mutable:synapse.msgs.Can.header)
  return _internal_mutable_header();
}
inline void Can::set_allocated_header(::synapse::msgs::Header* header) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(header_);
  }
  if (header) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(header)->GetArena();
    if (message_arena != submessage_arena) {
      header = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, header, submessage_arena);
    }
    
  } else {
    
  }
  header_ = header;
  // @@protoc_insertion_point(field_set_allocated:synapse.msgs.Can.header)
}

// uint32 id = 2;
inline void Can::clear_id() {
  id_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Can::_internal_id() const {
  return id_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Can::id() const {
  // @@protoc_insertion_point(field_get:synapse.msgs.Can.id)
  return _internal_id();
}
inline void Can::_internal_set_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  id_ = value;
}
inline void Can::set_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:synapse.msgs.Can.id)
}

// bool is_rtr = 3;
inline void Can::clear_is_rtr() {
  is_rtr_ = false;
}
inline bool Can::_internal_is_rtr() const {
  return is_rtr_;
}
inline bool Can::is_rtr() const {
  // @@protoc_insertion_point(field_get:synapse.msgs.Can.is_rtr)
  return _internal_is_rtr();
}
inline void Can::_internal_set_is_rtr(bool value) {
  
  is_rtr_ = value;
}
inline void Can::set_is_rtr(bool value) {
  _internal_set_is_rtr(value);
  // @@protoc_insertion_point(field_set:synapse.msgs.Can.is_rtr)
}

// bool is_extended = 4;
inline void Can::clear_is_extended() {
  is_extended_ = false;
}
inline bool Can::_internal_is_extended() const {
  return is_extended_;
}
inline bool Can::is_extended() const {
  // @@protoc_insertion_point(field_get:synapse.msgs.Can.is_extended)
  return _internal_is_extended();
}
inline void Can::_internal_set_is_extended(bool value) {
  
  is_extended_ = value;
}
inline void Can::set_is_extended(bool value) {
  _internal_set_is_extended(value);
  // @@protoc_insertion_point(field_set:synapse.msgs.Can.is_extended)
}

// uint32 dlc = 5;
inline void Can::clear_dlc() {
  dlc_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Can::_internal_dlc() const {
  return dlc_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Can::dlc() const {
  // @@protoc_insertion_point(field_get:synapse.msgs.Can.dlc)
  return _internal_dlc();
}
inline void Can::_internal_set_dlc(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  dlc_ = value;
}
inline void Can::set_dlc(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_dlc(value);
  // @@protoc_insertion_point(field_set:synapse.msgs.Can.dlc)
}

// repeated uint32 data = 6;
inline int Can::_internal_data_size() const {
  return data_.size();
}
inline int Can::data_size() const {
  return _internal_data_size();
}
inline void Can::clear_data() {
  data_.Clear();
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Can::_internal_data(int index) const {
  return data_.Get(index);
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Can::data(int index) const {
  // @@protoc_insertion_point(field_get:synapse.msgs.Can.data)
  return _internal_data(index);
}
inline void Can::set_data(int index, ::PROTOBUF_NAMESPACE_ID::uint32 value) {
  data_.Set(index, value);
  // @@protoc_insertion_point(field_set:synapse.msgs.Can.data)
}
inline void Can::_internal_add_data(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  data_.Add(value);
}
inline void Can::add_data(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_add_data(value);
  // @@protoc_insertion_point(field_add:synapse.msgs.Can.data)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >&
Can::_internal_data() const {
  return data_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >&
Can::data() const {
  // @@protoc_insertion_point(field_list:synapse.msgs.Can.data)
  return _internal_data();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >*
Can::_internal_mutable_data() {
  return &data_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >*
Can::mutable_data() {
  // @@protoc_insertion_point(field_mutable_list:synapse.msgs.Can.data)
  return _internal_mutable_data();
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace synapse

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_can_2eproto