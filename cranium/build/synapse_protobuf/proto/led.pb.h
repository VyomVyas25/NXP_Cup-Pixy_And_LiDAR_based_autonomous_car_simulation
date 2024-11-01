// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: led.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_led_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_led_2eproto

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
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_led_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_led_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_led_2eproto;
namespace synapse {
namespace msgs {
class LED;
class LEDDefaultTypeInternal;
extern LEDDefaultTypeInternal _LED_default_instance_;
}  // namespace msgs
}  // namespace synapse
PROTOBUF_NAMESPACE_OPEN
template<> ::synapse::msgs::LED* Arena::CreateMaybeMessage<::synapse::msgs::LED>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace synapse {
namespace msgs {

// ===================================================================

class LED PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:synapse.msgs.LED) */ {
 public:
  inline LED() : LED(nullptr) {};
  virtual ~LED();

  LED(const LED& from);
  LED(LED&& from) noexcept
    : LED() {
    *this = ::std::move(from);
  }

  inline LED& operator=(const LED& from) {
    CopyFrom(from);
    return *this;
  }
  inline LED& operator=(LED&& from) noexcept {
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
  static const LED& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const LED* internal_default_instance() {
    return reinterpret_cast<const LED*>(
               &_LED_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(LED& a, LED& b) {
    a.Swap(&b);
  }
  inline void Swap(LED* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(LED* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline LED* New() const final {
    return CreateMaybeMessage<LED>(nullptr);
  }

  LED* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<LED>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const LED& from);
  void MergeFrom(const LED& from);
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
  void InternalSwap(LED* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "synapse.msgs.LED";
  }
  protected:
  explicit LED(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_led_2eproto);
    return ::descriptor_table_led_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kIndexFieldNumber = 1,
    kRFieldNumber = 2,
    kGFieldNumber = 3,
    kBFieldNumber = 4,
  };
  // uint32 index = 1;
  void clear_index();
  ::PROTOBUF_NAMESPACE_ID::uint32 index() const;
  void set_index(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_index() const;
  void _internal_set_index(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // uint32 r = 2;
  void clear_r();
  ::PROTOBUF_NAMESPACE_ID::uint32 r() const;
  void set_r(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_r() const;
  void _internal_set_r(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // uint32 g = 3;
  void clear_g();
  ::PROTOBUF_NAMESPACE_ID::uint32 g() const;
  void set_g(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_g() const;
  void _internal_set_g(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // uint32 b = 4;
  void clear_b();
  ::PROTOBUF_NAMESPACE_ID::uint32 b() const;
  void set_b(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_b() const;
  void _internal_set_b(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // @@protoc_insertion_point(class_scope:synapse.msgs.LED)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::uint32 index_;
  ::PROTOBUF_NAMESPACE_ID::uint32 r_;
  ::PROTOBUF_NAMESPACE_ID::uint32 g_;
  ::PROTOBUF_NAMESPACE_ID::uint32 b_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_led_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// LED

// uint32 index = 1;
inline void LED::clear_index() {
  index_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 LED::_internal_index() const {
  return index_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 LED::index() const {
  // @@protoc_insertion_point(field_get:synapse.msgs.LED.index)
  return _internal_index();
}
inline void LED::_internal_set_index(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  index_ = value;
}
inline void LED::set_index(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_index(value);
  // @@protoc_insertion_point(field_set:synapse.msgs.LED.index)
}

// uint32 r = 2;
inline void LED::clear_r() {
  r_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 LED::_internal_r() const {
  return r_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 LED::r() const {
  // @@protoc_insertion_point(field_get:synapse.msgs.LED.r)
  return _internal_r();
}
inline void LED::_internal_set_r(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  r_ = value;
}
inline void LED::set_r(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_r(value);
  // @@protoc_insertion_point(field_set:synapse.msgs.LED.r)
}

// uint32 g = 3;
inline void LED::clear_g() {
  g_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 LED::_internal_g() const {
  return g_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 LED::g() const {
  // @@protoc_insertion_point(field_get:synapse.msgs.LED.g)
  return _internal_g();
}
inline void LED::_internal_set_g(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  g_ = value;
}
inline void LED::set_g(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_g(value);
  // @@protoc_insertion_point(field_set:synapse.msgs.LED.g)
}

// uint32 b = 4;
inline void LED::clear_b() {
  b_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 LED::_internal_b() const {
  return b_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 LED::b() const {
  // @@protoc_insertion_point(field_get:synapse.msgs.LED.b)
  return _internal_b();
}
inline void LED::_internal_set_b(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  b_ = value;
}
inline void LED::set_b(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_b(value);
  // @@protoc_insertion_point(field_set:synapse.msgs.LED.b)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace synapse

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_led_2eproto
