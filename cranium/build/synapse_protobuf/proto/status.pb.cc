// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: status.proto

#include "status.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_header_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Header_header_2eproto;
namespace synapse {
namespace msgs {
class StatusDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Status> _instance;
} _Status_default_instance_;
}  // namespace msgs
}  // namespace synapse
static void InitDefaultsscc_info_Status_status_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::synapse::msgs::_Status_default_instance_;
    new (ptr) ::synapse::msgs::Status();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::synapse::msgs::Status::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Status_status_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_Status_status_2eproto}, {
      &scc_info_Header_header_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_status_2eproto[1];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_status_2eproto[6];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_status_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_status_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::synapse::msgs::Status, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::synapse::msgs::Status, header_),
  PROTOBUF_FIELD_OFFSET(::synapse::msgs::Status, arming_),
  PROTOBUF_FIELD_OFFSET(::synapse::msgs::Status, joy_),
  PROTOBUF_FIELD_OFFSET(::synapse::msgs::Status, fuel_),
  PROTOBUF_FIELD_OFFSET(::synapse::msgs::Status, mode_),
  PROTOBUF_FIELD_OFFSET(::synapse::msgs::Status, safety_),
  PROTOBUF_FIELD_OFFSET(::synapse::msgs::Status, synapse_),
  PROTOBUF_FIELD_OFFSET(::synapse::msgs::Status, status_message_),
  PROTOBUF_FIELD_OFFSET(::synapse::msgs::Status, fuel_percentage_),
  PROTOBUF_FIELD_OFFSET(::synapse::msgs::Status, power_),
  PROTOBUF_FIELD_OFFSET(::synapse::msgs::Status, request_seq_),
  PROTOBUF_FIELD_OFFSET(::synapse::msgs::Status, request_rejected_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::synapse::msgs::Status)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::synapse::msgs::_Status_default_instance_),
};

const char descriptor_table_protodef_status_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\014status.proto\022\014synapse.msgs\032\014header.pro"
  "to\"\223\007\n\006Status\022$\n\006header\030\001 \001(\0132\024.synapse."
  "msgs.Header\022+\n\006arming\030\002 \001(\0162\033.synapse.ms"
  "gs.Status.Arming\022%\n\003joy\030\003 \001(\0162\030.synapse."
  "msgs.Status.Joy\022\'\n\004fuel\030\004 \001(\0162\031.synapse."
  "msgs.Status.Fuel\022\'\n\004mode\030\005 \001(\0162\031.synapse"
  ".msgs.Status.Mode\022+\n\006safety\030\006 \001(\0162\033.syna"
  "pse.msgs.Status.Safety\022-\n\007synapse\030\007 \001(\0162"
  "\034.synapse.msgs.Status.Synapse\022\026\n\016status_"
  "message\030\010 \001(\t\022\027\n\017fuel_percentage\030\t \001(\r\022\r"
  "\n\005power\030\n \001(\002\022\023\n\013request_seq\030\013 \001(\r\022\030\n\020re"
  "quest_rejected\030\014 \001(\010\"C\n\006Arming\022\022\n\016ARMING"
  "_UNKNOWN\020\000\022\023\n\017ARMING_DISARMED\020\001\022\020\n\014ARMIN"
  "G_ARMED\020\002\"c\n\004Fuel\022\020\n\014FUEL_UNKNOWN\020\000\022\021\n\rF"
  "UEL_CRITICAL\020\001\022\014\n\010FUEL_LOW\020\002\022\020\n\014FUEL_NOM"
  "INAL\020\003\022\026\n\022FUEL_OVER_CAPACITY\020\004\"G\n\003Joy\022\017\n"
  "\013JOY_UNKNOWN\020\000\022\020\n\014JOY_DISABLED\020\001\022\014\n\010JOY_"
  "LOSS\020\002\022\017\n\013JOY_NOMINAL\020\003\"`\n\004Mode\022\020\n\014MODE_"
  "UNKNOWN\020\000\022\017\n\013MODE_MANUAL\020\001\022\r\n\tMODE_AUTO\020"
  "\002\022\020\n\014MODE_CMD_VEL\020\003\022\024\n\020MODE_CALIBRATION\020"
  "\004\"@\n\006Safety\022\022\n\016SAFETY_UNKNOWN\020\000\022\017\n\013SAFET"
  "Y_SAFE\020\001\022\021\n\rSAFETY_UNSAFE\020\002\"[\n\007Synapse\022\023"
  "\n\017SYNAPSE_UNKNOWN\020\000\022\024\n\020SYNAPSE_DISABLED\020"
  "\001\022\020\n\014SYNAPSE_LOSS\020\002\022\023\n\017SYNAPSE_NOMINAL\020\003"
  "b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_status_2eproto_deps[1] = {
  &::descriptor_table_header_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_status_2eproto_sccs[1] = {
  &scc_info_Status_status_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_status_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_status_2eproto = {
  false, false, descriptor_table_protodef_status_2eproto, "status.proto", 968,
  &descriptor_table_status_2eproto_once, descriptor_table_status_2eproto_sccs, descriptor_table_status_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_status_2eproto::offsets,
  file_level_metadata_status_2eproto, 1, file_level_enum_descriptors_status_2eproto, file_level_service_descriptors_status_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_status_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_status_2eproto)), true);
namespace synapse {
namespace msgs {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Status_Arming_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_status_2eproto);
  return file_level_enum_descriptors_status_2eproto[0];
}
bool Status_Arming_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
constexpr Status_Arming Status::ARMING_UNKNOWN;
constexpr Status_Arming Status::ARMING_DISARMED;
constexpr Status_Arming Status::ARMING_ARMED;
constexpr Status_Arming Status::Arming_MIN;
constexpr Status_Arming Status::Arming_MAX;
constexpr int Status::Arming_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Status_Fuel_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_status_2eproto);
  return file_level_enum_descriptors_status_2eproto[1];
}
bool Status_Fuel_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
constexpr Status_Fuel Status::FUEL_UNKNOWN;
constexpr Status_Fuel Status::FUEL_CRITICAL;
constexpr Status_Fuel Status::FUEL_LOW;
constexpr Status_Fuel Status::FUEL_NOMINAL;
constexpr Status_Fuel Status::FUEL_OVER_CAPACITY;
constexpr Status_Fuel Status::Fuel_MIN;
constexpr Status_Fuel Status::Fuel_MAX;
constexpr int Status::Fuel_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Status_Joy_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_status_2eproto);
  return file_level_enum_descriptors_status_2eproto[2];
}
bool Status_Joy_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
constexpr Status_Joy Status::JOY_UNKNOWN;
constexpr Status_Joy Status::JOY_DISABLED;
constexpr Status_Joy Status::JOY_LOSS;
constexpr Status_Joy Status::JOY_NOMINAL;
constexpr Status_Joy Status::Joy_MIN;
constexpr Status_Joy Status::Joy_MAX;
constexpr int Status::Joy_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Status_Mode_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_status_2eproto);
  return file_level_enum_descriptors_status_2eproto[3];
}
bool Status_Mode_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
constexpr Status_Mode Status::MODE_UNKNOWN;
constexpr Status_Mode Status::MODE_MANUAL;
constexpr Status_Mode Status::MODE_AUTO;
constexpr Status_Mode Status::MODE_CMD_VEL;
constexpr Status_Mode Status::MODE_CALIBRATION;
constexpr Status_Mode Status::Mode_MIN;
constexpr Status_Mode Status::Mode_MAX;
constexpr int Status::Mode_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Status_Safety_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_status_2eproto);
  return file_level_enum_descriptors_status_2eproto[4];
}
bool Status_Safety_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
constexpr Status_Safety Status::SAFETY_UNKNOWN;
constexpr Status_Safety Status::SAFETY_SAFE;
constexpr Status_Safety Status::SAFETY_UNSAFE;
constexpr Status_Safety Status::Safety_MIN;
constexpr Status_Safety Status::Safety_MAX;
constexpr int Status::Safety_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Status_Synapse_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_status_2eproto);
  return file_level_enum_descriptors_status_2eproto[5];
}
bool Status_Synapse_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
constexpr Status_Synapse Status::SYNAPSE_UNKNOWN;
constexpr Status_Synapse Status::SYNAPSE_DISABLED;
constexpr Status_Synapse Status::SYNAPSE_LOSS;
constexpr Status_Synapse Status::SYNAPSE_NOMINAL;
constexpr Status_Synapse Status::Synapse_MIN;
constexpr Status_Synapse Status::Synapse_MAX;
constexpr int Status::Synapse_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)

// ===================================================================

void Status::InitAsDefaultInstance() {
  ::synapse::msgs::_Status_default_instance_._instance.get_mutable()->header_ = const_cast< ::synapse::msgs::Header*>(
      ::synapse::msgs::Header::internal_default_instance());
}
class Status::_Internal {
 public:
  static const ::synapse::msgs::Header& header(const Status* msg);
};

const ::synapse::msgs::Header&
Status::_Internal::header(const Status* msg) {
  return *msg->header_;
}
void Status::clear_header() {
  if (GetArena() == nullptr && header_ != nullptr) {
    delete header_;
  }
  header_ = nullptr;
}
Status::Status(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:synapse.msgs.Status)
}
Status::Status(const Status& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  status_message_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_status_message().empty()) {
    status_message_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_status_message(),
      GetArena());
  }
  if (from._internal_has_header()) {
    header_ = new ::synapse::msgs::Header(*from.header_);
  } else {
    header_ = nullptr;
  }
  ::memcpy(&arming_, &from.arming_,
    static_cast<size_t>(reinterpret_cast<char*>(&request_rejected_) -
    reinterpret_cast<char*>(&arming_)) + sizeof(request_rejected_));
  // @@protoc_insertion_point(copy_constructor:synapse.msgs.Status)
}

void Status::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Status_status_2eproto.base);
  status_message_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&header_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&request_rejected_) -
      reinterpret_cast<char*>(&header_)) + sizeof(request_rejected_));
}

Status::~Status() {
  // @@protoc_insertion_point(destructor:synapse.msgs.Status)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void Status::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  status_message_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete header_;
}

void Status::ArenaDtor(void* object) {
  Status* _this = reinterpret_cast< Status* >(object);
  (void)_this;
}
void Status::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Status::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Status& Status::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Status_status_2eproto.base);
  return *internal_default_instance();
}


void Status::Clear() {
// @@protoc_insertion_point(message_clear_start:synapse.msgs.Status)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  status_message_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  if (GetArena() == nullptr && header_ != nullptr) {
    delete header_;
  }
  header_ = nullptr;
  ::memset(&arming_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&request_rejected_) -
      reinterpret_cast<char*>(&arming_)) + sizeof(request_rejected_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Status::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .synapse.msgs.Header header = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_header(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .synapse.msgs.Status.Arming arming = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_arming(static_cast<::synapse::msgs::Status_Arming>(val));
        } else goto handle_unusual;
        continue;
      // .synapse.msgs.Status.Joy joy = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_joy(static_cast<::synapse::msgs::Status_Joy>(val));
        } else goto handle_unusual;
        continue;
      // .synapse.msgs.Status.Fuel fuel = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_fuel(static_cast<::synapse::msgs::Status_Fuel>(val));
        } else goto handle_unusual;
        continue;
      // .synapse.msgs.Status.Mode mode = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 40)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_mode(static_cast<::synapse::msgs::Status_Mode>(val));
        } else goto handle_unusual;
        continue;
      // .synapse.msgs.Status.Safety safety = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 48)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_safety(static_cast<::synapse::msgs::Status_Safety>(val));
        } else goto handle_unusual;
        continue;
      // .synapse.msgs.Status.Synapse synapse = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 56)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_synapse(static_cast<::synapse::msgs::Status_Synapse>(val));
        } else goto handle_unusual;
        continue;
      // string status_message = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 66)) {
          auto str = _internal_mutable_status_message();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "synapse.msgs.Status.status_message"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint32 fuel_percentage = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 72)) {
          fuel_percentage_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // float power = 10;
      case 10:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 85)) {
          power_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // uint32 request_seq = 11;
      case 11:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 88)) {
          request_seq_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bool request_rejected = 12;
      case 12:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 96)) {
          request_rejected_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Status::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:synapse.msgs.Status)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .synapse.msgs.Header header = 1;
  if (this->has_header()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::header(this), target, stream);
  }

  // .synapse.msgs.Status.Arming arming = 2;
  if (this->arming() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      2, this->_internal_arming(), target);
  }

  // .synapse.msgs.Status.Joy joy = 3;
  if (this->joy() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      3, this->_internal_joy(), target);
  }

  // .synapse.msgs.Status.Fuel fuel = 4;
  if (this->fuel() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      4, this->_internal_fuel(), target);
  }

  // .synapse.msgs.Status.Mode mode = 5;
  if (this->mode() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      5, this->_internal_mode(), target);
  }

  // .synapse.msgs.Status.Safety safety = 6;
  if (this->safety() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      6, this->_internal_safety(), target);
  }

  // .synapse.msgs.Status.Synapse synapse = 7;
  if (this->synapse() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      7, this->_internal_synapse(), target);
  }

  // string status_message = 8;
  if (this->status_message().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_status_message().data(), static_cast<int>(this->_internal_status_message().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "synapse.msgs.Status.status_message");
    target = stream->WriteStringMaybeAliased(
        8, this->_internal_status_message(), target);
  }

  // uint32 fuel_percentage = 9;
  if (this->fuel_percentage() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(9, this->_internal_fuel_percentage(), target);
  }

  // float power = 10;
  if (!(this->power() <= 0 && this->power() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(10, this->_internal_power(), target);
  }

  // uint32 request_seq = 11;
  if (this->request_seq() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(11, this->_internal_request_seq(), target);
  }

  // bool request_rejected = 12;
  if (this->request_rejected() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(12, this->_internal_request_rejected(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:synapse.msgs.Status)
  return target;
}

size_t Status::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:synapse.msgs.Status)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string status_message = 8;
  if (this->status_message().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_status_message());
  }

  // .synapse.msgs.Header header = 1;
  if (this->has_header()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *header_);
  }

  // .synapse.msgs.Status.Arming arming = 2;
  if (this->arming() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_arming());
  }

  // .synapse.msgs.Status.Joy joy = 3;
  if (this->joy() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_joy());
  }

  // .synapse.msgs.Status.Fuel fuel = 4;
  if (this->fuel() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_fuel());
  }

  // .synapse.msgs.Status.Mode mode = 5;
  if (this->mode() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_mode());
  }

  // .synapse.msgs.Status.Safety safety = 6;
  if (this->safety() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_safety());
  }

  // .synapse.msgs.Status.Synapse synapse = 7;
  if (this->synapse() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_synapse());
  }

  // uint32 fuel_percentage = 9;
  if (this->fuel_percentage() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_fuel_percentage());
  }

  // float power = 10;
  if (!(this->power() <= 0 && this->power() >= 0)) {
    total_size += 1 + 4;
  }

  // uint32 request_seq = 11;
  if (this->request_seq() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_request_seq());
  }

  // bool request_rejected = 12;
  if (this->request_rejected() != 0) {
    total_size += 1 + 1;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Status::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:synapse.msgs.Status)
  GOOGLE_DCHECK_NE(&from, this);
  const Status* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Status>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:synapse.msgs.Status)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:synapse.msgs.Status)
    MergeFrom(*source);
  }
}

void Status::MergeFrom(const Status& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:synapse.msgs.Status)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.status_message().size() > 0) {
    _internal_set_status_message(from._internal_status_message());
  }
  if (from.has_header()) {
    _internal_mutable_header()->::synapse::msgs::Header::MergeFrom(from._internal_header());
  }
  if (from.arming() != 0) {
    _internal_set_arming(from._internal_arming());
  }
  if (from.joy() != 0) {
    _internal_set_joy(from._internal_joy());
  }
  if (from.fuel() != 0) {
    _internal_set_fuel(from._internal_fuel());
  }
  if (from.mode() != 0) {
    _internal_set_mode(from._internal_mode());
  }
  if (from.safety() != 0) {
    _internal_set_safety(from._internal_safety());
  }
  if (from.synapse() != 0) {
    _internal_set_synapse(from._internal_synapse());
  }
  if (from.fuel_percentage() != 0) {
    _internal_set_fuel_percentage(from._internal_fuel_percentage());
  }
  if (!(from.power() <= 0 && from.power() >= 0)) {
    _internal_set_power(from._internal_power());
  }
  if (from.request_seq() != 0) {
    _internal_set_request_seq(from._internal_request_seq());
  }
  if (from.request_rejected() != 0) {
    _internal_set_request_rejected(from._internal_request_rejected());
  }
}

void Status::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:synapse.msgs.Status)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Status::CopyFrom(const Status& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:synapse.msgs.Status)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Status::IsInitialized() const {
  return true;
}

void Status::InternalSwap(Status* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  status_message_.Swap(&other->status_message_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Status, request_rejected_)
      + sizeof(Status::request_rejected_)
      - PROTOBUF_FIELD_OFFSET(Status, header_)>(
          reinterpret_cast<char*>(&header_),
          reinterpret_cast<char*>(&other->header_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Status::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace synapse
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::synapse::msgs::Status* Arena::CreateMaybeMessage< ::synapse::msgs::Status >(Arena* arena) {
  return Arena::CreateMessageInternal< ::synapse::msgs::Status >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
